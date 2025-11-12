#include <stdio.h>

void main()
 {
    int a=2, b=4, c;

    
    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping:\n");
    printf("  a = %d,  b = %d\n", a, b);


}