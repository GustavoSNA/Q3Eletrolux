#include "ArrayParametersPrinter.h"
#include <stdio.h>


static void printArrayParameters(ArrayParameters *parameters);
static void printArrayEvenNumbers(ArrayParameters *parameters);

static ArrayParametersPrinter printer = {
		.print = printArrayParameters
};

ArrayParametersPrinter *getArrayParametersPrinter(void) {
	return &printer;
}

static void printArrayParameters(ArrayParameters *parameters) {
	printf("------------------------------------\n");
	printf("Average: %.2f\n", parameters->average);
	printf("Maximum: %d\n", parameters->maximum);
	printf("Minimum: %d\n", parameters->minimum);
	printArrayEvenNumbers(parameters);
	printf("------------------------------------\n");
}


static void printArrayEvenNumbers(ArrayParameters *parameters) {
	printf("Array even numbers size: %d\n", parameters->arrayEvenNumbersSize);
	printf("Even numbers: ");

	for(int arrayIndex = 0; arrayIndex < parameters->arrayEvenNumbersSize; arrayIndex++) {
		printf("%d ", parameters->arrayEvenNumbers[arrayIndex]);
	}

	printf("\n");
}
