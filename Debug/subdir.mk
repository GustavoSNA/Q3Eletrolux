################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ArrayEvenNumbersHandler.c \
../ArrayParametersHandler.c \
../ArrayParametersPrinter.c \
../AverageCalculator.c \
../MaximumCalculator.c \
../MinimumCalculator.c \
../main.c 

OBJS += \
./ArrayEvenNumbersHandler.o \
./ArrayParametersHandler.o \
./ArrayParametersPrinter.o \
./AverageCalculator.o \
./MaximumCalculator.o \
./MinimumCalculator.o \
./main.o 

C_DEPS += \
./ArrayEvenNumbersHandler.d \
./ArrayParametersHandler.d \
./ArrayParametersPrinter.d \
./AverageCalculator.d \
./MaximumCalculator.d \
./MinimumCalculator.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


