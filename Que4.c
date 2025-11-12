#include <stdio.h>
int factorial(int num)
 {
    int fact = 1;
    for(int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n, i, original, digit, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++)
     {
        original = i;
        sum = 0;

        while(original > 0)
         {
            digit = original % 10;
            sum += factorial(digit);
            original /= 10;
        }

       
        if(sum == i) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
