GCC = gcc -g

all: dirinfo.o
	$(GCC) dirinfo.o -o dir

dirinfo.o: dirinfo.c
	$(GCC) -c dirinfo.c

clean:
	rm dir
	rm *.o
	rm *~

run: all
	./dir