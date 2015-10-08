#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void permuter (int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void reinitPointeur (int** p)
{
	*p = NULL;
}

//fonction principale
int main(){

	/*printf("taille de char : %d\n", sizeof(char));
	printf("taille de int : %d\n", sizeof(int));
	printf("taille de double : %d\n", sizeof(double));
	printf("taille de char* : %d\n", sizeof(char*));
	printf("taille de int* : %d\n", sizeof(int*));
	printf("taille de void* : %d\n", sizeof(void*));
	printf("taille de double* : %d\n", sizeof(double*));
	printf("taille de int** : %d\n", sizeof(int**));
	printf("taille de int[10] : %d\n", sizeof(int[10]));
	printf("taille de char[7][3] : %d\n", sizeof(char[7][3]));
	printf("taille de int[] : %d\n", sizeof(int[]));
	
	char tab[10];
	
	printf("taille de tab : %d\n", sizeof(tab));
	printf("taille de tab[0] : %d\n", sizeof(tab[0]));
	printf("taille de &tab[0] : %d\n", sizeof(&tab[0]));
	printf("taille de *&tab : %d\n", sizeof(*&tab));
	printf("taille de *&tab[0] : %d\n", sizeof(*&tab[0]));
	
	char (*p)[10] = &tab;
	
	printf("taille de p : %d\n", sizeof(p));
	printf("taille de *p : %d\n", sizeof(*p));
	printf("taille de (*p)[2] : %d\n", sizeof((*p)[2]));
	printf("taille de &(*p)[2] : %d\n", sizeof(&(*p)[2]));*/
	
	/*int a = 9, b = 5;
	permuter (&a, &b);
	printf("a vaut %d et b vaut %d.\n\n",a,b);*/
	
	int a=1;
	int* p = &a;
	reinitPointeur(&p);
	
	printf("l'adresse de a est : %p\n",p);
	
  return 0;
}
