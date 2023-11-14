// Calculates e using a Taylor Expansion of e^x with x = 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaring Functions
int factorial(int n);

int main(void) {
    int i, order;
    double e, *terms;

    //Enter polynomial order
    printf("Enter the required polynomial order:\n");
    if (scanf("%d", &order) != 1){
        printf("Didn't enter a integer.\n");
        return 0;
    }
    
    //Allocate array
    terms = malloc(order * sizeof(double));
    for (i=0; i<order; i++){
        terms[i] = 1.0 / (double)factorial(i+1);
        printf("The %d term for order %d is %1.14lf \n", i+1, order, terms[i]);
    }

    //Calculate e
    e = 1.0;
    for (i=0; i<order; i++){
	e += terms[i];
    }

    //Deallocation and printing e
    free(terms);
    printf("The value of e using %d terms is %1.14lf \n", order, e);
    printf("The difference between the calculated value and the true value is %1.6e\n", e - exp(1));
    return 0;
}

int factorial(int n) {
    if(n<0){
	printf("Error: Negative number passed to factorial. \n");
	return(-1);
    }

    else if(n==0){return 1;}

    else{return(n*factorial(n-1));}
}
