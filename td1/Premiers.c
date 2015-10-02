#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "math.h"

//fonction principale
int main(){

	int test;
	printf("Nombre a tester : ");
	scanf("%d", &test);
	
	if(test == 1 || test == 2){
		printf("%d est un nombre premier.",test);
		return 0;
	}
	
	int i;
	for(i=2; i <= test-1; i++){
		if(test%i == 0){
			printf("%d n'est pas un nombre premier.", test);
			return 0;
		}
	}
	printf("%d est un nombre premier.",test);
  
  return 0;
}
