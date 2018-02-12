.PHONEY: build run clean

build: hangman

hangman: hangman.o
	gcc hangman.o -o hangman -lmenu -lncurses

hangman.o: hangman.c citire.c play1.c desen.c hidden1.c
	gcc -Wall -g -c hangman.c -o hangman.o -lmenu -lncurses

run: hangman
	./hangman

clean:
	rm -rf hangman.o hangman
	
