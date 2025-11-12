#include <stdio.h>

void fdld(int *a); 

int main() 
{
    int no = 12345;
    int fd, ld, temp, a;

    temp = no;

    ld = temp % 10; 

    while (temp >= 10) 
    {
        temp = temp / 10; 
    }
    fd = temp;

    a = fd + ld;

    fdld(&a); 

    return 0;
}

void fdld(int *a) 
{
    printf("Sum of first and last digit = %d\n", *a); 
}
