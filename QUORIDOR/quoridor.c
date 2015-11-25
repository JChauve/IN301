#include "graphics.h"
#include "plateau.h"

int main()
{
	init_graphics(900,700);
	
	affiche_interface();
	
	wait_escape();
	exit(0);
}
