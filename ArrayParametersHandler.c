#include "ArrayParametersHandler.h"
#include <stdlib.h>
#include <stdlib.h>
#include "AverageCalculator.h"
#include "MaximumCalculator.h"
#include "MinimumCalculator.h"
#include "ArrayEvenNumbersHandler.h"

static ArrayParameters* createArrayParameters(int *arrayIn, int arrayInSize);
static void freeArrayParameters(ArrayParameters *parameters);

static ArrayParametersHandler instance = {
		.getArrayParametersOf = createArrayParameters,
		.freeParameters = freeArrayParameters,
};

ArrayParametersHandler *getArrayParametersHandler(void) {
	return &instance;
}

static ArrayParameters* createArrayParameters(int *arrayIn, int arrayInSize) {
	ArrayParameters *parameters = malloc(sizeof(ArrayParameters));
	parameters->average = getAverageCalculator()->calculateAverageOfArray(arrayIn, arrayInSize);
	parameters->maximum = getMaximumCalculator()->getMaximumOfArray(arrayIn, arrayInSize);
	parameters->minimum = getMinimumCalculator()->getMinimumOfArray(arrayIn, arrayInSize);
	getArrayEvenNumbersHandler()->insertArrayEvenNumbersInto(arrayIn, arrayInSize, parameters);
	return parameters;
}

static void freeArrayParameters(ArrayParameters *parameters) {
	free(parameters->arrayEvenNumbers);
	free(parameters);
}
