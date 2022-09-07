
#ifndef ARRAYPARAMETERSPRINTER_H_
#define ARRAYPARAMETERSPRINTER_H_

#include "ArrayParameters.h"

typedef struct {
	void(*print)(ArrayParameters *parameters);
}ArrayParametersPrinter;

ArrayParametersPrinter *getArrayParametersPrinter(void);
#endif
