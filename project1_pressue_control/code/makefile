CC=arm-none-eabi-
CFLAGS = -mcpu=cortex-m3 -mthumb 
INCS=-I.
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)

all: pressure_control.bin

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

pressure_control.elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

pressure_control.bin: pressure_control.elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm -rf *.o *~
	@echo "Everything clean"