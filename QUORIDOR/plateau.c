#include "graphics.h"
#include "plateau.h"

void quadrillage(){
	affiche_colonnes();
	affiche_lignes();
}

void affiche_colonnes(){
	POINT haut, bas;
	
	haut.x = 95; haut.y = 700;
	bas.x = 105; bas.y = 0;
	
	for(haut.x=95; haut.x<700; haut.x += 100, bas.x += 100){
		draw_fill_rectangle(haut, bas, gris);
	}
}

void affiche_lignes(){
	POINT gauche, droite;
	
	gauche.x = 0; gauche.y = 95;
	droite.x = 700; droite.y = 105;
	
	for(gauche.y=95; gauche.y<700; gauche.y +=100, droite.y += 100){
		draw_fill_rectangle(gauche, droite, gris);
	}
}

void affiche_interface(){
	fill_screen(white);
	quadrillage();
}
