TARGET=cmanager
CC=gcc
CFLAGS=-c -Wall -g

$(TARGET) : contact_manager.o search_contact.o disply_contact.o add_contact.o
	$(CC) contact_manager.o search_contact.o disply_contact.o add_contact.o -o $(TARGET)

*.o : *.c
	$(CC) $(CFLAGS) *.c


clean :
	rm *.o
	rm cmanager
run :
	./cmanager
