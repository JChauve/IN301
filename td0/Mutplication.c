#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fonction principale
int main(){

	int x, y;
	printf("Entrer la valeur de x : ");
	scanf("%d", &x);
	printf("\nEntrer la valeur de y : ");
	scanf("%d", &y);

	printf("%d * %d\n",x ,y);
	
	int res = x*y;
	int z = 0;
	while (x > 1){
		if (x % 2 == 0){
			x /= 2;
			y *= 2;
			printf("= %d * %d + %d\n",x ,y ,z);
		}
		else{
			x--;
			z += y;
			printf("= %d * %d + %d\n",x ,y ,z);
		}
	}
	
	printf("= %d", res);
  
  return 0;
}
