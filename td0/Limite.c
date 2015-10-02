#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction principale
int main(){
	
	float i=2.0;
	float S = 1.0;
	float precedent = 0.0;
	float test = 1.0;
	float E = 0.00000000000001;
	
	while (test >= E){
		S += 1/(i*i);
		precedent += 1/((i-1)*(i-1));
		i += 1;
		test = S - precedent;
	}
	printf("\n\nLa limite de la suite est : %f.\n\n",S);
	  
  return 0;
}
