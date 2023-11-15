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

//Function to calculate GCD in an interative fashion
int GCD(int a, int b) {
    int temp;
  
    //Euclid for a >= b
    if (a >= b) {
        while (b!=0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

   //Euclid for b > a
   else {
        while (a!=0) {
            temp = a;
            a = b % a;
            b = temp;
        }
        return b;
    }

}
