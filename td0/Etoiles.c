#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction principale
int main(){

	int i = 50;
	while ( i>=1 ){
		int a;
		for(a=0; a<i; a++){
			printf(" ");
		}
		printf("*\n");
		i--;
	}
  
  return 0;
}
