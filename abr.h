
#ifndef INCLUDE_ABR_H
#define INCLUDE_ABR_H

typedef struct Noeud
{
	int valeur;
	struct Noeud* gauche;
	struct Noeud* droite;
} Noeud;

void ajout(Noeud **racine, int valeur);

void parcours_GRD(Noeud *racine);

void parcours_RGD(Noeud *racine);

//void insertion_iterative(Noeud **racine, int valeur);

void suppression(Noeud **racine, int valeur);

void supMax(int *max, Noeud *arbre);

#endif