#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau{
	
	int taille;
	int tab[100];
};
typedef struct Tableau Tableau;

//fonction principale
int main(){

	printf("Taille memoire de Tableau : %d", sizeof(Tableau));
		
  return 0;
}
