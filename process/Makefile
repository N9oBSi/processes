all: taskmanager.exe
	./taskmanager.exe

process.o: process.c process.h
	gcc -c process.c -o process.o

taskmanager.exe: process.o taskmanager.c
	gcc process.o taskmanager.c -o taskmanager.exe

clean:
	del *.o *.exe