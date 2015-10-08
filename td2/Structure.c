#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau{
	
	int taille;
	int tab[100];
};
typedef struct Tableau Tableau;

///////////// PROTOTYPES ////////////////////

int alea(int n); 
Tableau initialiser(Tableau T);
void afficher(Tableau T); 
long int produit(Tableau T);
int valMin(Tableau T);

//////////////////////////////////////////

///////////////// MAIN ////////////////////
int main(){

	srand(time(NULL)); //initialise fct rand().
	
	Tableau T;
	long int prod;
	int min;
	
	T = initialiser(T);
	afficher(T);
	prod = produit(T);
	printf("Le produit des elements du tableau vaut : %ld.\n", prod);
	min = valMin(T);
	printf("La plus petite valeur du tableau vaut : %d.\n",min);
	
  return 0;
}

//////////////// FONCTIONS ////////////////

int alea(int n) //renvoie entier aleatoirement entre 0 et n.
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

void afficher(Tableau T) //affiche les elements du tableau.
{
	int i;
	for(i=0; i<T.taille; i++)
	{
		printf("l'element de la case %d vaut %d.\n",i,T.tab[i]);
	}
}

long int produit(Tableau T)  //calcule le produit des elements du tableau.
{
	long int resultat=1;
	int i;
	for(i=0; i<T.taille; i++)
	{
		resultat = resultat*T.tab[i];
	}
	return resultat;
}

int valMin(Tableau T) //renvoie la plus petite valeur du tableau.
{
	int minTab = T.tab[0];
	int i;
	for(i=1; i<T.taille; i++)
	{
		if (T.tab[i] <= minTab)
		{
			minTab = T.tab[i];
		}
	}
	return minTab;
}

