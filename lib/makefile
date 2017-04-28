CC=g++
CFLAGS = -c -Wall -pthread

main: main.o i2c_configuration.o i2c_bus.o sensor.o TMP006.o MCP9808.o 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

i2c_configuration.o: i2c_configuration.cpp
	$(CC) $(CFLAGS) i2c_configuration.cpp

i2c_bus.o: i2c_bus.cpp
	$(CC) $(CFLAGS) i2c_bus.cpp

sensor.o: sensor.cpp
	$(CC) $(CFLAGS) sensor.cpp

TMP006.o: TMP006.cpp
	$(CC) $(CFLAGS) TMP006.cpp

MCP9808.o: MCP9808.cpp
	$(CC) $(CFLAGS) MCP9808.cpp

clean:
	rm -rf main *o