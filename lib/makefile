CC=g++
CFLAGS = -c -Wall -pthread

main: main.o i2c_configuration.o i2c_bus.o i2c_sensor.o tmp006.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

i2c_configuration.o: i2c_configuration.cpp
	$(CC) $(CFLAGS) i2c_configuration.cpp

i2c_bus.o: i2c_bus.cpp
	$(CC) $(CFLAGS) i2c_bus.cpp

i2c_sensor.o: i2c_sensor.cpp
	$(CC) $(CFLAGS) i2c_sensor.cpp

tmp006.o: tmp006.cpp
	$(CC) $(CFLAGS) tmp006.cpp

clean:
	rm -rf main *o