#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau{
	
	int taille;
	int tab[100];
};
typedef struct Tableau Tableau;

int alea(int n);
Tableau initialiser(Tableau T);
void afficher(Tableau T);
int produit(Tableau T);

//fonction Main
int main(){

	srand(time(NULL));
	
	Tableau T;
	int prod;
	
	T = initialiser(T);
	afficher(T);
	prod = produit(T);
	printf("Le produit des elements du tableau vaut : %d.", prod);
	
  return 0;
}

// Fonctions
int alea(int n)
{
	int a;
	a = rand() % n;
	return a;
}

Tableau initialiser(Tableau T)
{
	T.taille = 10;
	int i;
	for(i=0; i<10; i++)
	{
		T.tab[i] = alea(20);
	}
	return T;
}

void afficher(Tableau T)
{
	int i;
	for(i=0; i<T.taille; i++)
	{
		printf("l'element de la case %d vaut %d.\n",i,T.tab[i]);
	}
}

int produit(Tableau T)
{
	int resultat=1;
	int i;
	for(i=0; i<T.taille; i++)
	{
		resultat = resultat*T.tab[i];
	}
	return resultat;
}
