#include <stdio.h>
#include <math.h>

/* Declaring functions */
float degtorad(float arg);
float tanintegral(int arg);

/* Declaring global variables */
float tanarray[13], radang[13];

float main(void) {

/* Declaring variables local to main */
    float degang[13];
    float area;
    int i, N;

/* Loop to create tan(x) from 0 to 60 degrees */
    for (i=0; i<13; i++) {
        degang[i] = i*5;
        radang[i] = degtorad(degang[i]);
        tanarray[i] = tan(radang[i]);
    }

/* Area calculation and printing */
    area = tanintegral(12);
    printf("The calculated area is %.4f\n", area);
    return 0;
}

/* Function to convert from degrees to radians */
float degtorad(float arg) {
    return( (M_PI * arg) / 180 );
}

/* Function to calculate the area based on # of points */
float tanintegral(int arg) {

/* Declaring variables local to tanintegral  */
    float calc;
    int i;
   
/* Adding heights of both sides of each trapezoid */
    for (i=0; i<arg; i++) {
        calc += tanarray[i];
        calc += tanarray[i + 1];
    }

/* Multiplying by by width of trapezoids, triangle area correction */
    calc = calc * ( (radang[arg] - radang[0]) / (2 * arg) );

    return calc;
    
}
