CC=g++
CFLAGS = -c -Wall -pthread

main: main.o sensor.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

sensor.o: sensor.cpp
	$(CC) $(CFLAGS) sensor.cpp

clean:
	rm -rf main *o