

#include "abr.h"

#include <stdio.h>
#include <stdlib.h>

void ajout(Noeud **racine, int valeur) {
	
	if (*racine == NULL) {
		// on a trouvé où ajouter la valeur
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
		//printf(" g:");
		parcours_GRD(racine->gauche);
	}
	printf("%d ", racine->valeur);
	if (racine->droite != NULL) {
		//printf(" d:");
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

void suppression(Noeud **racine, int valeur) {
	if (*racine == NULL) {
		printf("Erreur : valeur %d non trouvé pour la suppression\n", valeur);
	} else {

		if ( valeur < (*racine)->valeur ) {
			// l'élément est à gauche
			suppression(&(*racine)->gauche, valeur);
		} else if ( valeur > (*racine)->valeur ) {
			// l'élément est à droite
			suppression(&(*racine)->droite, valeur);
		} else {
			// l'élément a été trouvé
			if ( (*racine)->gauche == NULL ) {
				*racine = (*racine)->droite;
			} else {
				int *max = malloc(sizeof(int));
				// on va chercher la valeur de l'élément le plus à droite du sous-arbre gauche
				supMax(max, (*racine)->gauche);

				// et on la met à la place de l'élément supprimé
				(*racine)->valeur = *max;
			}

			// 
		}

	}


}

void supMax(int *max, Noeud *arbre) {
	if (arbre->droite != NULL) {
		supMax(max, arbre->droite);
	} else {
		// on récupère la valeur qui nous intéresse
		*max = arbre->valeur;


		// on remplace par le noeud de gauche
		// (cela ne fonctionne pas encore correctement.)

		/*
		printf("au bout de supMax() :\n");
		printf("   arbre->valeur : %d\n", arbre->valeur);
		printf("   arbre->gauche : %d\n", arbre->gauche);
		*/
		//free(arbre);

		if (arbre->gauche != NULL) {
			arbre->valeur = (arbre->gauche)->valeur;
			arbre->droite = (arbre->gauche)->droite;
			arbre->gauche = (arbre->gauche)->gauche;
		} else {

		}
		//arbre = arbre->gauche;
		//printf("   arbre : %d\n", arbre);
	}
}