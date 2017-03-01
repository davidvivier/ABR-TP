
#ifndef INCLUDE_ABR_H
#define INCLUDE_ABR_H

typedef struct Noeud
{
	int val;
	struct Noeud* gauche;
	struct Noeud* droite;
} Noeud;

void ajout(Noeud **racine, int valeur);

void parcours_GRD(Noeud *racine);

void parcours_RGD(Noeud *racine);

//void insertion_iterative(Noeud **racine, int valeur);

void supression(Noeud **racine, int valeur);


#endif