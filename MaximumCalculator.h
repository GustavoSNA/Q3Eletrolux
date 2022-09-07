#ifndef MAXIMUMCALCULATOR_H_
#define MAXIMUMCALCULATOR_H_

typedef struct {
	int(*getMaximumOfArray)(int *array, int arrayCount);
} MaximumCalculator;

MaximumCalculator *getMaximumCalculator(void);

#endif
