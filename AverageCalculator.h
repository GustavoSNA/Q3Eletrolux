#ifndef AVERAGECALCULATOR_H_
#define AVERAGECALCULATOR_H_

typedef struct {
	double(*calculateAverageOfArray)(int *array, int arrayCount);
}AverageCalculator;

AverageCalculator *getAverageCalculator(void);

#endif
