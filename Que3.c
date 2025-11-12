#include <stdio.h>

void main() 
{
    float celsius=7 , fahrenheit;

     
    {
        fprintf(stderr, "Error: Invalid input\n");

    }

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
  
}
