#include <stdio.h>
#include <stdlib.h>

float foo(float f) { return (f / 0); }

int main(int argc, char* argv[]) {
    if (argc < 2) {
        puts("Usage: <number>");
        exit(-1);
    }

    int y = atoi(argv[1]);
    int x = 1 << y;
    foo( x / y );

    printf("%d %d\n", x, y);

    return 0;
}
