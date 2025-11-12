#include <stdio.h>

int main() 
{
    int num, choice, i, temp, rev = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    printf("\nChoose an operation:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            if(num % 2 == 0)
                printf("%d is Even.\n", num);
            else
                printf("%d is Odd.\n", num);
            break;

        case 2:
            if(num <= 1)
             {
                printf("%d is not a Prime Number.\n", num);
                break;
            }
            int isPrime = 1;
            for(i = 2; i <= num / 2; i++) 
            {
                if(num % i == 0) 
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime)
                printf("%d is a Prime Number.\n", num);
            else
                printf("%d is not a Prime Number.\n", num);
            break;

        case 3:
            temp = num;
            rev = 0;
            while(temp > 0)
             {
                rev = rev * 10 + temp % 10;
                temp = temp / 10;
            }
            if(rev == num)
                printf("%d is a Palindrome.\n", num);
            else
                printf("%d is not a Palindrome.\n", num);
            break;

        case 4:
            if(num > 0)
                printf("%d is Positive.\n", num);
            else if(num < 0)
                printf("%d is Negative.\n", num);
            else
                printf("The number is Zero.\n");
            break;

        case 5:
            temp = num;
            rev = 0;
            while(temp != 0) 
            {
                rev = rev * 10 + temp % 10;
                temp = temp / 10;
            }
            printf("Reversed number: %d\n", rev);
            break;

        case 6:
            temp = num;
            sum = 0;
            if(temp < 0) temp = -temp; 
            while(temp != 0) 
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            printf("Sum of digits: %d\n", sum);
            break;

        default:
            printf("Invalid choice. Please select between 1 to 6.\n");
    }

    return 0;
}
