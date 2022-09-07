#ifndef MINIMUMCALCULATOR_H_
#define MINIMUMCALCULATOR_H_

typedef struct {
	int(*getMinimumOfArray)(int *array, int arrayCount);
} MinimumCalculator;

MinimumCalculator *getMinimumCalculator(void);


#endif
