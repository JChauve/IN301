#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction principale
int main(){

	
	printf("taille de char : %d\n", sizeof(char));
	printf("taille de int : %d\n", sizeof(int));
	printf("taille de double : %d\n", sizeof(double));
	printf("taille de char* : %d\n", sizeof(char*));
	printf("taille de int* : %d\n", sizeof(int*));
	printf("taille de void* : %d\n", sizeof(void*));
	printf("taille de double* : %d\n", sizeof(double*));
	printf("taille de int** : %d\n", sizeof(int**));
	printf("taille de int[10] : %d\n", sizeof(int[10]));
	printf("taille de char[7][3] : %d\n", sizeof(char[7][3]));
	//printf("taille de int[] : %d\n", sizeof(int[]));
	 
  return 0;
}
