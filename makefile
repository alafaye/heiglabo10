all: outils_saisie

outils_saisie: labo10.o outils_saisie.o
	gcc -o outils_saisie labo10.o

outils_saisie.o: outils_saisie.c outils_saisie.h
	gcc -o outils_saisie.o -c outils_saisie.c -W -Wall -ansi -pedantic

labo10.o: labo10.c outils_saisie.h
	gcc -o labo10.o -c labo10.c -W -Wall -ansi -pedantic

clean:
	rm -rf build/*.o
