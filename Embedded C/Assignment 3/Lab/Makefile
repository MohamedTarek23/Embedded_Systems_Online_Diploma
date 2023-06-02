CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2
INCS=-I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)

all : learn-in-depth_cortexM4.bin

%.o : %.s
	$(CC)as.exe $(CFLAGS) $(INCS) -mthumb $< -o $@

%.o : %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -mthumb -c $< -o $@

learn-in-depth.elf : $(OBJ) $(AsOBJ) 
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

learn-in-depth_cortexM4.bin : learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@
	@echo "Make is done"

clean:
	rm *.o *.elf *.bin
	@echo "Everything is clean"