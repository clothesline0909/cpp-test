CC=g++
CFLAGS = -c -Wall -pthread

main: main.o i2c_configuration.o i2c_bus.o I2CSensor.o TMP006.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

i2c_configuration.o: i2c_configuration.cpp
	$(CC) $(CFLAGS) i2c_configuration.cpp

i2c_bus.o: i2c_bus.cpp
	$(CC) $(CFLAGS) i2c_bus.cpp

I2CSensor.o: I2CSensor.cpp
	$(CC) $(CFLAGS) I2CSensor.cpp

TMP006.o: TMP006.cpp
	$(CC) $(CFLAGS) TMP006.cpp

clean:
	rm -rf main *o