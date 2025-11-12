#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include <stdio.h>

void main()
 {
    double radius = 6.0; 
    if (radius < 0)
     {
        fprintf(stderr, "Error: radius cannot be negative.\n");
     }

    double area = M_PI * radius * radius;
    printf("Area = %.6f\n", area);

    
}