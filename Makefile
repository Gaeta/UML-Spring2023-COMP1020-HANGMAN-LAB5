CC = gcc
CFLAGS = -Wall --std=c99
OBJECTS = main.o my_string.o 
UNIT_OBJECTS = my_string.o unit_test.o test_def.o

string_driver: $(OBJECTS)
	$(CC) $(CFLAGS) -o string_driver $(OBJECTS)

main.o: main.c my_string.h
	$(CC) $(CFLAGS) -c main.c -o main.o

my_string.o: my_string.c my_string.h
	$(CC) $(CFLAGS) -c my_string.c -o my_string.o

unit_test: $(UNIT_OBJECTS)
	$(CC) $(CFLAGS) -o unit_test $(UNIT_OBJECTS)

clean:
	rm string_driver $(OBJECTS)

clean_unit:
	rm unit_test $(UNIT_OBJECTS)