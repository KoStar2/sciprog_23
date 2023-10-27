#include <stdio.h>
#include <math.h>

/* Declaring functions and global variables */
double delta;
double arctanh1(double x);
double arctanh2(double x);

void main(void) {
/* Declaring variables local to main */
    double seriesArray[181], logArray[181];
    double value, RMSE;
    int i;

/* Asking user to input an accuracy for the Maclaurin series */
    printf("Enter a positive real number: ");
    scanf("%lf", &delta);

/* Adding values to the arrays, summing over differences for RMSE */
    value = -0.9l;
    for (i=0; i <181; i++) {
        seriesArray[i] = arctanh1(value);
        logArray[i] = arctanh2(value);
        printf("Value: %lf   Series Array: %lf   Log Calc: %lf\n", value, seriesArray[i], logArray[i]);
        RMSE += pow(seriesArray[i] - logArray[i], 2);
        value += 0.01l;
    }

/* Completing RMSE and printing accuracy */
    RMSE = RMSE / 181l;
    RMSE = pow(RMSE, 0.5l);
    printf("The RMSE of the methods is %.10lf\n", RMSE);
    return;
}

/* Arctanh1 calculates arctanh using a Maclaurin series */

double arctanh1(double x) {
    double temp, oldcalc, calc, difference;
    int n;

/* While loop to stop at user given accuracy */
    calc = 0;
    n = 0;
    difference = 1.0l;
    while (difference > delta) {
        oldcalc = calc;
        temp = pow(x, (double) ( (2*n) + 1 ));
        temp = temp / (double) ( (2*n) + 1 );
        calc += temp;
        n += 1;
        difference = fabs(calc) - fabs(oldcalc);
    }
    return calc; 
}

/* Arctanh2 calculates arctanh using ln */

double arctanh2(double x) {
    double calc;

    calc = log(1.0l+  x);
    calc += -log(1.0l-  x);
    calc *= 0.5l;
    return calc;
}
