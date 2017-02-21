CC=gcc
CFLAGS=-Wall -O2
ALIB=libtripleDes.a
TARGET=maintest
AR=ar
ARFLAGS=-rc

OBJECTS=*.o

staticLib: $(ALIB)
main: $(TARGET)

$(TARGET): test.o
	$(CC) -o $(TARGET) test.o -L. -ltripleDes

$(ALIB): des.o
	$(AR) $(ARFLAGS) $(ALIB) des.o

%.o: %.c
	$(CC) -c $< $(CLAGS)

clean:
	rm -f *.o
	rm -f $(ALIB)
	rm -f $(TARGET)

