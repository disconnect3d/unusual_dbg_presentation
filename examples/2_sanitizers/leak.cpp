#include <iostream>
using namespace std;

int main() {
    int * tab = new int[5];
    int * other = new int[5];
    other += 10;

    delete [] other;
}
