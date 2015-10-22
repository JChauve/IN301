#include <stdio.h>
#include <stdlib.h>

struct element
{
	int val;
	struct element *suiv;
};

//////////////PROTOTYPES/////////////////
typedef struct element Element;
typedef Element* liste;

liste initialiser();
int vide(liste l);
void afficher_liste(liste l);
//void liberer_memoire(Liste list);
liste ajoutdebut(liste l, int e);
liste ajoutfin(liste l, int e);
liste ajouttrie(liste l, int e);
void verifiertrie(liste l, int e);
void testajout();

//////////////////////MAIN//////////////////////
int main()
{
	liste l = initialiser();
	//vide(l);
	l = ajoutdebut(l,10);
	l = ajoutfin(l,15);
	l = ajouttrie(l,13);
	afficher_liste(l);
	testajout();
	return 0;
}

///////////////////////FONCTIONS/////////////////////
liste initialiser()
{
	return NULL;
}

int vide(liste l)
{
	return l == NULL;
}


void afficher_liste(liste l)
{
	if(vide(l)) printf(" \n ");
	
	else
	{
		printf(" %d ", l->val);
		afficher_liste(l->suiv);
	}
}

/*
void liberer_memoire(Liste list)
{
	
}
*/

liste ajoutdebut(liste l, int e)
{
	Element *elt = malloc(sizeof(Element));
	elt->val = e;
	elt->suiv = l;
	
	return elt;
}

liste ajoutfin(liste l, int e)
{
	if(vide(l))
		return ajoutdebut(l,e);
		
	l->suiv = ajoutfin(l->suiv,e);
	
	return l;
}

liste ajouttrie(liste l, int e)
{
	if(vide(l) || e <= l->val)
		return ajoutdebut(l,e);
	l -> suiv = ajouttrie(l->suiv,e);
	
	return l;
}

void verifiertrie(liste l, int e)
{
	if(vide(l) && l->val 
}

void testajout()
{
	int a;
	
	liste l1 = initialiser();
	liste l2 = initialiser();
	liste l3 = initialiser();
	
	do
	{
		a = alea(10);
		l1 = ajoutdebut(l1,a);
		l2 = ajoutfin(l2,a);
		l3 = ajouttrie(l3,a);
	} (a != 0);
	
	afficher_liste(l1);
	afficher_liste(l2);
	afficher_liste(l3);
}
