#include <stdio.h>
int fdld(int);
int main()
 {
     int no=12345;
    int fd , ld , temp, a;

    
    temp = no;
    ld = temp % 10;           
    while (temp >= 10)
     {
        temp = temp / 10;
    }
    fd = temp;

    a = fd + ld ;
    fdld(a);
 }
 int fdld(int a)
    {
         printf("Sum of first and last digit = %d\n", a);
    }
