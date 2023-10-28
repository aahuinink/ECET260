################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/font12.c \
../Core/Src/font16.c \
../Core/Src/font20.c \
../Core/Src/font24.c \
../Core/Src/font8.c \
../Core/Src/main.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c \
../Core/Src/z_displ_ILI9XXX.c \
../Core/Src/z_displ_ILI9XXX_test.c \
../Core/Src/z_touch_XPT2046.c \
../Core/Src/z_touch_XPT2046_menu.c \
../Core/Src/z_touch_XPT2046_test.c 

C_DEPS += \
./Core/Src/font12.d \
./Core/Src/font16.d \
./Core/Src/font20.d \
./Core/Src/font24.d \
./Core/Src/font8.d \
./Core/Src/main.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d \
./Core/Src/z_displ_ILI9XXX.d \
./Core/Src/z_displ_ILI9XXX_test.d \
./Core/Src/z_touch_XPT2046.d \
./Core/Src/z_touch_XPT2046_menu.d \
./Core/Src/z_touch_XPT2046_test.d 

OBJS += \
./Core/Src/font12.o \
./Core/Src/font16.o \
./Core/Src/font20.o \
./Core/Src/font24.o \
./Core/Src/font8.o \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o \
./Core/Src/z_displ_ILI9XXX.o \
./Core/Src/z_displ_ILI9XXX_test.o \
./Core/Src/z_touch_XPT2046.o \
./Core/Src/z_touch_XPT2046_menu.o \
./Core/Src/z_touch_XPT2046_test.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/font12.cyclo ./Core/Src/font12.d ./Core/Src/font12.o ./Core/Src/font12.su ./Core/Src/font16.cyclo ./Core/Src/font16.d ./Core/Src/font16.o ./Core/Src/font16.su ./Core/Src/font20.cyclo ./Core/Src/font20.d ./Core/Src/font20.o ./Core/Src/font20.su ./Core/Src/font24.cyclo ./Core/Src/font24.d ./Core/Src/font24.o ./Core/Src/font24.su ./Core/Src/font8.cyclo ./Core/Src/font8.d ./Core/Src/font8.o ./Core/Src/font8.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f4xx_hal_msp.cyclo ./Core/Src/stm32f4xx_hal_msp.d ./Core/Src/stm32f4xx_hal_msp.o ./Core/Src/stm32f4xx_hal_msp.su ./Core/Src/stm32f4xx_it.cyclo ./Core/Src/stm32f4xx_it.d ./Core/Src/stm32f4xx_it.o ./Core/Src/stm32f4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f4xx.cyclo ./Core/Src/system_stm32f4xx.d ./Core/Src/system_stm32f4xx.o ./Core/Src/system_stm32f4xx.su ./Core/Src/z_displ_ILI9XXX.cyclo ./Core/Src/z_displ_ILI9XXX.d ./Core/Src/z_displ_ILI9XXX.o ./Core/Src/z_displ_ILI9XXX.su ./Core/Src/z_displ_ILI9XXX_test.cyclo ./Core/Src/z_displ_ILI9XXX_test.d ./Core/Src/z_displ_ILI9XXX_test.o ./Core/Src/z_displ_ILI9XXX_test.su ./Core/Src/z_touch_XPT2046.cyclo ./Core/Src/z_touch_XPT2046.d ./Core/Src/z_touch_XPT2046.o ./Core/Src/z_touch_XPT2046.su ./Core/Src/z_touch_XPT2046_menu.cyclo ./Core/Src/z_touch_XPT2046_menu.d ./Core/Src/z_touch_XPT2046_menu.o ./Core/Src/z_touch_XPT2046_menu.su ./Core/Src/z_touch_XPT2046_test.cyclo ./Core/Src/z_touch_XPT2046_test.d ./Core/Src/z_touch_XPT2046_test.o ./Core/Src/z_touch_XPT2046_test.su

.PHONY: clean-Core-2f-Src

