

#include "abr.h"

#include <stdio.h>
#include <stdlib.h>

void ajout(Noeud **racine, int valeur) {
	
	if (*racine == NULL) {
		Noeud *nouveau = malloc(sizeof(Noeud));
		nouveau->gauche = NULL;
		nouveau->droite = NULL;
		nouveau->valeur = valeur;
		*racine = nouveau;
	} else {
		if (valeur < (*racine)->valeur) {
			ajout( &((*racine)->gauche), valeur);
		} else {
			ajout( &((*racine)->droite), valeur);
		}
	}


}

void parcours_GRD(Noeud *racine) {

	if (racine->gauche != NULL) {
		parcours_GRD(racine->gauche);
	}
	printf("%d ", racine->valeur);
	if (racine->droite != NULL) {
		parcours_GRD(racine->droite);
	}
}

void parcours_RGD(Noeud *racine) {
	printf("%d ", racine->valeur);
	if (racine->gauche != NULL) {
		parcours_RGD(racine->gauche);
	}
	if (racine->droite != NULL) {
		parcours_RGD(racine->droite);
	}
}

void supression(Noeud **racine, int valeur) {

}

