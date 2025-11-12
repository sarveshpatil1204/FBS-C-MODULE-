#include <stdio.h>
void main()
 {
    int m1=40, m2=45, m3=50, m4=55, m5=60;
    double total, percentage;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    printf("\nTotal Marks = %.2f / 500\n", total);
    printf("Percentage   = %.2f%%\n", percentage);


}
