#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *p = (int*) malloc(sizeof(int));
    *p=10;
    printf("p size=%x\n", sizeof(p));
    printf("int size=%x\n", sizeof(int));
    printf("p=%x\n", *p);
    free(p);
    return 0;
}