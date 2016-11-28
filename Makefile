

default: sha256.c sha256.h test.c
	gcc -o sha256test sha256.c test.c -Wall -pedantic
	