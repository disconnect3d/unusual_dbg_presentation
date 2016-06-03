#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char* data;
    struct node* next;
} node;

int main(void) {
    printf("sizeof(node) = %lu\n", sizeof(node));
    printf("sizeof(int) = %lu\n", sizeof(int));
    
    int* ptr = (int*) malloc(sizeof(int));
    printf("ptr = %p\n", ptr);
    
    node* x = (node*) malloc(sizeof(node));
    x->data = (char*) malloc(sizeof(char) * 3);    // indirectly lost
    x->data[5] = 'a';
    
    // free(x->data);
    // free(x);
    // free(ptr);
    
    return 0;
}
