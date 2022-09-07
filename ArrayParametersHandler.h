#ifndef ARRAYPARAMETERSHANDLER_H_
#define ARRAYPARAMETERSHANDLER_H_

#include "ArrayParameters.h"

typedef struct {
	ArrayParameters *(*getArrayParametersOf)(int *arrayIn, int arrayInSize);
	void(*freeParameters)(ArrayParameters *parameters);
} ArrayParametersHandler;

ArrayParametersHandler *getArrayParametersHandler(void);

#endif
