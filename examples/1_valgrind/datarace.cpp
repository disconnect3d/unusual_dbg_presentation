#include <cstdio>
#include <thread>
#include <mutex>

std::mutex mut;
long long foo = 0;

void bar() {
    //std::lock_guard<std::mutex> lock(mut);
    for(int i=0; i<10000; ++i)
        foo += 1;
}

int main() {
    std::thread threads[10];
    
    for(int i=0; i<10; ++i)
        threads[i] = std::thread(&bar);
    
    for(auto&& t : threads)
        t.join();

    printf("Main thread over, foo = %lld\n", foo);
}
