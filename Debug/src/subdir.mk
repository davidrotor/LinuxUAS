################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/AVCDrone.c \
../src/GPS.c \
../src/MotorMix.c \
../src/PIDreglib.c \
../src/camaracontrol.c \
../src/i2c.c \
../src/interface.c \
../src/matrixOP.c \
../src/rotacion.c \
../src/sensorData.c 

OBJS += \
./src/AVCDrone.o \
./src/GPS.o \
./src/MotorMix.o \
./src/PIDreglib.o \
./src/camaracontrol.o \
./src/i2c.o \
./src/interface.o \
./src/matrixOP.o \
./src/rotacion.o \
./src/sensorData.o 

C_DEPS += \
./src/AVCDrone.d \
./src/GPS.d \
./src/MotorMix.d \
./src/PIDreglib.d \
./src/camaracontrol.d \
./src/i2c.d \
./src/interface.d \
./src/matrixOP.d \
./src/rotacion.d \
./src/sensorData.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-linux-gnueabihf-gcc -I/usr/arm-linux-gnueabihf/include -I"/home/david/Adronommer/Drone/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


