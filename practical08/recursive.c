#include <stdio.h>

//Declaring Functions
int GCD(int a, int b);

int main(void) {
    //Declaring variables
    int a, b, c;

    //Asking user for integers
    printf("Choose a  non-zero integer:\n");
    if ( scanf("%d", &a) != 1) {
        printf("Error: Did not enter an integer\n");
        return 0;
    }
    if (a == 0) {
	printf("Error: Entered 0\n");
        return 0;
    }

    printf("Choose another non-zero integer:\n");
    if (scanf("%d", &b) != 1) {
        printf("Error: Did not enter an integer\n");
        return 0;
    }
    if (b == 0) {
	printf("Error: Entered 0\n");
        return 0;
    }

    //Calculating GCD
    c = GCD(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, c);

    return 0;
}

//Function to calculate GCD in a recursive fashion
int GCD(int a, int b) {

    //Euclid for a >= b
    if ( a >= b ) {
        if (b != 0) {
	     a = GCD(b, a%b);
        }
    return a;    
    }

    //Euclid for b > a
    else if ( a < b ) {
        if (a != 0) {
	    b = GCD(a, b%a);
        }
    return b;
    }

}
