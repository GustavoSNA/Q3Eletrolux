#include "MaximumCalculator.h"


static int getMaximumOfArray(int *array, int arrayCount);

static MaximumCalculator maximumCalculator = {
		.getMaximumOfArray = getMaximumOfArray
};

MaximumCalculator *getMaximumCalculator(void) {
	return &maximumCalculator;
}

static int getMaximumOfArray(int *array, int arrayCount) {
	int maximum = -99999;

	for(int arrayIndex = 0; arrayIndex < arrayCount; arrayIndex++) {
		if(array[arrayIndex] > maximum) {
			maximum = array[arrayIndex];
		}
	}

	return maximum;
}
