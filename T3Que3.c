#include <stdio.h>

void more(double *ts); 
int main() {
    double bs = 8000;        
    double da = 0, ta = 0, hra = 0, ts;

    if (bs < 5000) {
        da = bs * 0.10;
        ta = bs * 0.15;
        hra = bs * 0.20;
    } else {
        da = bs * 0.15;
        ta = bs * 0.10;      
        hra = bs * 0.05;
    }

    ts = bs + da + ta + hra;

    more(&ts);  

    return 0;
}

void more(double *ts) {
    printf("Total Salary = %.2lf\n", *ts); 
}
