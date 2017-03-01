
#ifndef INCLUDE_ABR_H
#define INCLUDE_ABR_H

typedef struct Noeud
{
	int valeur;
	struct Noeud* gauche;
	struct Noeud* droite;
} Noeud;


/*
*	entrée/sortie : ** sur un noeud - double pointeur sur la racine du sous-arbre dans lequel on insert
*	entrée : entier , valeur du nouveau noeud
*	Ajoute un nouveau noeud dans l'arbre de façon récursive
*/
void ajout(Noeud **racine, int valeur);

/*
*	entrée : pointeur sur un noeud - pointeur sur la racine du sous-arbre que l'on parcours
*	sortie : affiche le parcours GRD de l'ABR
*	Parcours l'ABR à gauche , puis racine , puis à droite
*/
void parcours_GRD(Noeud *racine);

/*
*	entrée : pointeur sur un noeud - pointeur sur la racine du sous-arbre que l'on parcours
*	sortie : affiche le parcours RGD de l'ABR
*	Parcours l'ABR par la racine , puis à gauche , puis à droite
*/
void parcours_RGD(Noeud *racine);

//void insertion_iterative(Noeud **racine, int valeur);


/*
*	entrée/sortie : ** sur un noeud - double pointeur sur la racine du sous-arbre dans lequel on supprime
*	entrée : entier - la valeur à supprimer de l'abre
*	Supprime la valeur de l'abre
*/
void suppression(Noeud **racine, int valeur);

/*
*	entrée/sortie : pointeur sur un noeud
*	entrée : pointeur d'entier
*	Recherche de l'élément le plus à droite du sous arbre de gauche pour qu'il remplace celui qui a été supprimé
*/
void supMax(int *max, Noeud *arbre);

#endif