#ifndef ARRAYEVENNUMBERSHANDLER_H_
#define ARRAYEVENNUMBERSHANDLER_H_

#include "ArrayParameters.h"

typedef struct {
	void(*insertArrayEvenNumbersInto)(int *array, int arraySize, ArrayParameters *parameters);
}ArrayEvenNumbersHandler;

ArrayEvenNumbersHandler *getArrayEvenNumbersHandler(void);

#endif
