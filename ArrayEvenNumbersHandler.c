#include "ArrayEvenNumbersHandler.h"
#include <stdlib.h>

static void insertArrayEvenNumbersInto(int *array, int arraySize, ArrayParameters *parameters);
static int countEvenNumbers(int *array, int arraySize);
static int *newArrayEvenNumbers(int numberOfEvenNumbers);
static void addEvenNumbersIntoArray(int *array, int arraySize, int *arrayEvenNumbers);
static char isEvenNumber(int number);

static ArrayEvenNumbersHandler arrayEvenNumbersHandler = {
		.insertArrayEvenNumbersInto = insertArrayEvenNumbersInto
};

ArrayEvenNumbersHandler *getArrayEvenNumbersHandler(void) {
	return &arrayEvenNumbersHandler;
}

static void insertArrayEvenNumbersInto(int *array, int arraySize, ArrayParameters *parameters) {
	int numberOfEvenNumbers = countEvenNumbers(array, arraySize);
	int *arrayEvenNumbers = newArrayEvenNumbers(numberOfEvenNumbers);
	addEvenNumbersIntoArray(array, arraySize, arrayEvenNumbers);
	parameters->arrayEvenNumbers = arrayEvenNumbers;
	parameters->arrayEvenNumbersSize = numberOfEvenNumbers;
}

static int countEvenNumbers(int *array, int arraySize) {
	int numberOfEvenNumbers = 0;

	for(int arrayIndex = 0; arrayIndex < arraySize; arrayIndex++) {
		if(isEvenNumber(array[arrayIndex])) {
			numberOfEvenNumbers++;
		}
	}

	return numberOfEvenNumbers;
}

static int *newArrayEvenNumbers(int numberOfEvenNumbers) {
	return malloc(sizeof(int) * numberOfEvenNumbers);
}

static void addEvenNumbersIntoArray(int *array, int arraySize, int *arrayEvenNumbers) {
	int arrayEvenNumbersIndex = 0;

	for(int arrayIndex = 0; arrayIndex < arraySize; arrayIndex++) {
		if(isEvenNumber(array[arrayIndex])) {
			arrayEvenNumbers[arrayEvenNumbersIndex++] = array[arrayIndex];
		}
	}
}

static char isEvenNumber(int number) {
	return number % 2 == 0;
}

