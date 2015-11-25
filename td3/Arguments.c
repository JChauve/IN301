#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int estInt(char* t);
int somme(char** argv, int argc);

/*****************MAIN***********************/
int main( int argc, char** argv)
{
	
	/*int i;
	for(i=0; i<argc; i++)
		printf("\n%s\n\n", argv[i]);*/
	
	double som=0;
	/*int i,
	for (i=1; i<argc; i++)
	{
		
		somme += atof(argv[i]);
	}
	printf("%f\n\n",somme);*/
	
	som = somme(argv, argc);
	printf("%f\n",som);
	
	return 0;
}

/*****************FONCTIONS*****************/
int somme(char**argv, int argc)
{
	int i;
	double somme = 0;
	for (i=1; i<argc; i++)
	{
		if(!estInt(argv[i]))
		{
			printf("erreur\n");
			exit(EXIT_FAILURE);
		}
		somme += atof(argv[i]);
	}
	return somme;
}

int estInt(char* t)
{
	int i = 0;
	while (t[i] != '\0')
	{
		if(!isdigit(t[i]))
			return 0;
		i++;
	}
	if(i==0) return 0;
	return 1;
}

/**************COURS*********************/
/* Pour debug avec gdb :	gdb ./a.out
 * 							run toto tata
 * 
 * ./a.out 3.14 5
 * => argc vaut 3 => argv contient 3 chaines:
 * 		./a.out
 * 		3.14
 * 		5
 * argv[0] : |'.'|'/'|'a'|'.'|'o'|'u'|'t'|'\0'|
 * argv[1] : |'3'|'.'|'1'|'4'|'\0'|
 * argv[2] : |'5'|'\0'|
 * 
 * "5" -> '5'|'\0' chaine de charactere.
 * '5' -> caractere 5
 * 5 -> constante entiere 5.
 * 
 * 
 * tester si le caractere est un entier :
 * 
 * 
 * */
 
