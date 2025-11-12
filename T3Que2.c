#include <stdio.h>

void swap(int *a, int *b); 
void main() 
{
    int a = 2, b = 4;

    swap(&a, &b);  

    printf("After swapping in main: a = %d, b = %d\n", a, b);
}

void swap(int *a, int *b)
 {
    int c;
    c = *a;
    *a = *b;
    *b = c;

    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}
