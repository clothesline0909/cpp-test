CC=g++
CFLAGS = -c -Wall -pthread

main: main.o sensor.o i2c_configuration.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

sensor.o: sensor.cpp
	$(CC) $(CFLAGS) sensor.cpp

i2c_configuration.o: i2c_configuration.cpp
	$(CC) $(CFLAGS) i2c_configuration.cpp

clean:
	rm -rf main *o