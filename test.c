#include <stdio.h>
#include "test.h"

void fun1(int *v)
{
    printf("v addr=%X\n", &v);
    printf("v addr=%X\n", v);
    printf("v addr=%X\n", *v);
    *v=10;
}

int main(void)
{
    struct mystruct testmystruct;
    int var1=0;
    printf("var1 value=%X\n", var1);
    printf("var1 addr=%X\n", &var1);
    fun1(&var1);
    printf("var1 value11=%X\n", var1);
    
    testmystruct.color='c';
    testmystruct.radius=10;
    printf("testmystruct.color=%x\n", testmystruct.color);
    return 0;
}

