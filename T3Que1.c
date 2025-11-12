#include <stdio.h>

void sum(int *c);  
void main() 
{
    int a = 4, b = 8, c;
    c = a + b;

    sum(&c); 
}

void sum(int *c) 
{
    printf(" %d\n", *c); 
}
