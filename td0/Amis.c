#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SommeDiv (int n);

//fonction principale
int main(){

	int a, b;
	int ResA, ResB;
	printf("Valeur de a : ");
	scanf("%d", &a);
	
	ResA = SommeDiv (a);
	
	printf("Valeur de b : ");
	scanf("%d", &b);
	
	ResB = SommeDiv (b);
	
	if(ResA == b && ResB == a){
		printf("%d et %d sont des nombres amis.",a ,b);
	}
	else{
		printf("%d et %d ne sont pas des nombres amis.",a ,b);
	}
  
  return 0;
}

///////////////////////////
int SommeDiv (int n){
	int somme = 0;
	int i;
	for(i=1; i<n; i++){
		if(n%i == 0){
			//printf("%d", i);
			somme += i;
		}
	}
	return somme;	//renvoie le résultat de la somme de tous les diviseurs de n 
}
