#include "ArrayParameters.h"
#include "ArrayParametersHandler.h"
#include "ArrayParametersPrinter.h"

static int arrayIn[] = {0, 1, 2, 3, 4, 5, -1, -2, -3, -4};
static int arraySize = 10;

int main() {
	ArrayParametersHandler *handler = getArrayParametersHandler();
	ArrayParametersPrinter *printer = getArrayParametersPrinter();
	ArrayParameters *parameters = handler->getArrayParametersOf(arrayIn, arraySize);
	printer->print(parameters);
	handler->freeParameters(parameters);
	return 0;
}
