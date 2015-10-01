#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction principale
int main(){

	int temps;
	scanf("%d", &temps);
	
	int sec=0, min=0, heu=0;
	min = temps/60;
	sec = temps%60;
	
	heu = min/60;
	min = temps%60;
	
	if(temps <= 1) printf("%d seconde correspond a ", temps);
	else printf("%d secondes correspondent a ", temps);
	
	if(heu <= 1) printf("%d heure, ", heu);
	else printf("%d heures, ", heu);
	
	if(min <= 1) printf("%d minute et ", min);
	else printf("%d minutes et ", min);
	
	if(sec <= 1) printf("%d seconde.",sec);
	else printf("%d secondes.", sec);
  
  return 0;
}
