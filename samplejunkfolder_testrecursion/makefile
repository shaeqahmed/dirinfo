GCC = gcc -g

all: song_node.o playlist.o main.o
	$(GCC) -o albumtest.exe playlist.o song_node.o main.o 

song_node.o: song_node.c song_node.h
	$(GCC) -c song_node.c

playlist.o: playlist.c playlist.h
	$(GCC) -c playlist.c

tunez.o: song_node.h playlist.h
	$(GCC) -c main.c

run: all
	./albumtest.exe

clean:
	rm *~
	rm *.o
