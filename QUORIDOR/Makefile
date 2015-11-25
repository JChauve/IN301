all: quoridor

run: quoridor
	./quoridor

clear:
	rm *.o

quoridor: quoridor.o graphics.o plateau.o
	gcc -Wall -o quoridor quoridor.o plateau.o graphics.o `sdl-config --libs` -lSDL_ttf -lm

quoridor.o: quoridor.c graphics.h plateau.h
	gcc -c -Wall quoridor.c

#construit le fichier binaire graphics.o
graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c graphics.c

plateau.o: plateau.c plateau.h
	gcc -c -Wall plateau.c