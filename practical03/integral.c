#include <stdio.h>
#include <math.h>

float main(void) {

/* Declaring variables */
    int N, i;
    float a, b, f, x, calc;

/* Start point, end point, points to end */
    a = 0;
    b = M_PI / 3;
    N = 12;

/* Adding start and end height to calculation */

    calc += tan(a);
    calc += tan(b);

/* Setting first point after start, for loop to add trapezoid heights between start and end */
    x = a + ( (b - a) / N);
    for (i=1; i<N; i++) {
        calc += (2 * tan(x));
        x += ( (b - a) / N);
    }

/* Multiplying by width of trapezoids */

    calc = calc * ( (b - a) / (2 * N));

/* Printing calculated value, analytical value for comparision */
    printf(" The value calculated using the trapezoidal rule is: %.4f\n", calc);
    printf(" The comparison value is: %.4f\n", log(2));

}
