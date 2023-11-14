#include <stdio.h>
#include <stdlib.h>

//Define functions
int  *allocatearray(int number);
void fillwithones(int *array, int arraySize);
void printarray(int *array, int arraySize);
void deAllocateArray(int *array);


int main(void) {
    int arraySize;
    int *arrayPointer;

    //Entering array size
    printf("Enter array size:\n");
    scanf("%d", &arraySize);

    arrayPointer = allocatearray(arraySize);
    fillwithones(arrayPointer, arraySize);
    printarray(arrayPointer, arraySize);
    deAllocateArray(arrayPointer);

    return 0;
}

int *allocatearray(int number) {
    int *p;
    p = (int *) malloc(number * sizeof(int));
    return p;
}

void fillwithones(int *array, int arraySize) {
    int i;
    for (i=0; i<arraySize; i++) {
	array[i] = 1;
    }
}

void printarray(int *array, int arraySize) {
    int i;
    for (i=0; i<arraySize; i++) {
	printf("Array[%d] is %d\n", i, array[i]);
    }
}

void deAllocateArray(int *array) {
    free(array);
    array = NULL;
}
