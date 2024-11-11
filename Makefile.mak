CC=arm-none-eabi-gcc
MACH=cortex-m4

#Wall  stands for Warning all
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 -g
C1FLAGS= -mcpu=$(MACH) -mthumb -mfloat-abi=soft -nostdlib -T stm32_ls.ld -Wl,-Map=final.map -g

all: clean main.o GPIO_Config.o stm32_startup.o final.elf 

# $@ : tells that what is the output file like main.o as below
# $^ : tells that what is the dependency of the output main.c as below

main.o: main.c
	$(CC) $(CFLAGS) -o $@ $^

GPIO_Config.o:	GPIO_Config.c
	$(CC) $(CFLAGS) -o $@ $^	

stm32_startup.o:	stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^	
	
final.elf: *.o 
	$(CC) $(C1FLAGS) $^ -o $@ 

clean:
	del *.o *.elf

load:
	openocd -f board/st_nucleo_f3.cfg

#define that clean is command not a file name
.PHONY: clean
