#include <stdio.h>

/* Declaring functions */
void updateValues(int *previous, int *current);

int main(void) {
/* Declaring variables local to main */
    int i, n;
    int series[200];
    int previous, current;    

/* User inputs integer to calculate series up to */
    printf("Input a non-zero positive integer:\n");
    scanf("%d", &n);
    
/* Initial value for series and integers, set up pointers */
    series[0] = 0;
    series[1] = 1;
    previous = 0;
    current = 1;

/* Loop to add values to series up to n */
    for (i=2; i < n; i++) {
        updateValues(&previous, &current);
        series[i] = current;
    }

/* Printing series values */
    printf("The Fibonacci sequence up to %d values is:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d\n", series[i]);
    }

    return 0;
}

/* Function to update values of previous and current */
void updateValues(int *pre,int *cur) {
    int temp;

    temp = *pre;
    *pre = *cur;
    *cur = *cur + temp;

    return;
}
