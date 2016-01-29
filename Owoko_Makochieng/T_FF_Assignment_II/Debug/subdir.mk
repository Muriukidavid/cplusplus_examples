################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../tff_main.o 

CC_SRCS += \
../tff_main.cc 

OBJS += \
./tff_main.o 

CC_DEPS += \
./tff_main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


