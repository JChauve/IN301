#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/****************STRUCTURE****************/
struct element{
	char c;
	struct element* suivant;
};
typedef struct element Element;
typedef struct element* ListeC;

/**************PROTOTYPES*****************/
ListeC ajoutdebut(ListeC l, char c);
ListeC ajoutfin (ListeC l, char c);
ListeC ajoutChaine(char* t, ListeC l);
ListeC ajoutCh(char* t, ListeC l);
void remplitMot(char** argv, int argc, char* t, ListeC* l);
int CompareCh(char* t, ListeC l);

/******************MAIN*******************/
int main(int argc, char** argv)
{
	char* t = malloc((strlen(argv[1]+1)*sizeof(char)));
	ListeC l = NULL;
	remplitMot(argv, argc, t, &l);
	
	return 0;
}

/**************FONCTIONS******************/
ListeC ajoutChaine(char* t, ListeC l)
{
	int i;
	for (i=0; t[i]!='\0'; i++)
	{
		l = ajoutfin(l, t[i]);											//ajoutfin dans les exos Listes.
	}
	return l;
}

ListeC ajoutCh(char* t, ListeC l)
{
	if (t[0] == '\0')
		return NULL;
	l = ajoutfin(l, t[0]);
	l->suivant = ajoutCh(t+1 ,l->suivant);
	return l;
}

void remplitMot(char** argv, int argc, char* t, ListeC* l)
{
	int i;
	if (argc != 3) exit(EXIT_FAILURE);
	for (i=0; argv[1][i] != '\0'; i++)
		t[i] = argv[1][i];
	*l = ajoutChaine(argv[2], *l);
}

ListeC ajoutfin(ListeC l, char c)
{
	if(l==NULL)
		return ajoutdebut(l,c);
		
	l->suivant = ajoutfin(l->suivant,c);
	
	return l;
}

ListeC ajoutdebut(ListeC l, char c)
{
	Element *elt = malloc(sizeof(Element));
	elt->c = c;
	elt->suivant = l;
	
	return elt;
}

int CompareCh(char* t, ListeC l)
{
	if (l == NULL)
		return !(t[0] == '\0');
	if (l->c < *t) return 1;
	esle if (l->c > *t) return -1;
	else return CompareCh(t+1, l->suivant);
}
