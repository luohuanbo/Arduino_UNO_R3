SRCS=$(wildcard *.c)
EXEC=main

TARGET=atmega328p

all:main download 

main:${SRCS}
	avr-gcc -mmcu=${TARGET} -DF_CPU=16000000L -o ${EXEC} ${SRCS} 
download:
	sudo avrdude  -P /dev/ttyUSB0 -p m328p -c arduino -u -U flash:w:main
minicom:
	sudo minicom
temr:
	avrdude  -P /dev/ttyUSB0 -p m328p -c arduino -t
clean:
	rm main
