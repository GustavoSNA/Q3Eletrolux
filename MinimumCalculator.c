#include "MinimumCalculator.h"

static int getMinimumOfArray(int *array, int arrayCount);

static MinimumCalculator minimumCalculator = {
		.getMinimumOfArray = getMinimumOfArray
};

MinimumCalculator *getMinimumCalculator(void) {
	return &minimumCalculator;
}

static int getMinimumOfArray(int *array, int arrayCount) {
	int minimum = 99999;

	for(int arrayIndex = 0; arrayIndex < arrayCount; arrayIndex++) {
		if(array[arrayIndex] < minimum) {
			minimum = array[arrayIndex];
		}
	}

	return minimum;
}
