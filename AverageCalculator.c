#include "AverageCalculator.h"

static double calculateAverageOfArray(int *array, int arrayCount);

static AverageCalculator averageCalculator = {
		.calculateAverageOfArray = calculateAverageOfArray,
};

AverageCalculator *getAverageCalculator(void) {
	return &averageCalculator;
}

static double calculateAverageOfArray(int *array, int arrayCount) {
	double sum = 0.0;
	double average;

	for(int arrayIndex = 0; arrayIndex < arrayCount; arrayIndex++) {
		sum += array[arrayIndex];
	}

	average = sum / arrayCount;
	return average;
}
