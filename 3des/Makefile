CC=gcc
CFLAGS=-Wall -O2
ATRIPLEDES=libtripleDes.a
TARGET=maintest
AR=ar
ARFLAGS=-rc

OBJECTS=*.o

staticLib: $(ATRIPLEDES)
main: $(TARGET)

$(TARGET): test.o
	$(CC) -o $(TARGET) test.o -L. -ltripleDes

$(ATRIPLEDES): des.o
	$(AR) $(ARFLAGS) $(ATRIPLEDES) des.o

%.o: %.c
	$(CC) -c $< $(CLAGS)

clean:
	rm -f *.o
	rm -f $(ATRIPLEDES)
	rm -f $(TARGET)

