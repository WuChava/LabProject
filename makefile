CC = gcc
OBJS = test.o
LDLIBS = -lm
CFLAGS = -Wall

all: pointLab

.c.o:
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	-del *.o *.exe

#test: $(OBJS)
#	$(CC) -o $@ $^ $(LDLIBS) $(CFLAGS)aaa

#test.o: test.c
#	$(CC) -c test.c
