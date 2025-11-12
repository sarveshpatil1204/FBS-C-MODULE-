#include <stdio.h>
void swap(int,int,int);
void main()
 {
    int a=2, b=4, c;
    c = a;
    a = b;
    b = c;
    swap(a,b,c);
 }
 void swap(int a, int b,int c)
    {
       printf("  a = %d,  b = %d\n", a, b);
    }

