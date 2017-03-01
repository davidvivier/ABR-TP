/********************************************************************/
/*** VIVIER David													*/
/*** VARAGNAT Kévin													*/
/*** 27/02/2017											            */
/*** Exécuter ./main pour utiliser le programme 					*/
/*** Make clean pour supprimer l'éxécutable et les fichiers .o      */
/********************************************************************/

#include <stdlib.h>
#include <stdio.h>

#include "abr.h"

int main() {

	Noeud * arbre = NULL ;

	int tab_inser[] = {15,10,25 , 5,12,20,33,1,6,11,13,17,22};
	int tab_suppr[] = {10,5, 20,33,6,1,17,22,13,15,25,12,11};
	int taille_tab = 13;
	int i = 0 ;

	for(i=0 ; i< 13 ; i++)
	{
		ajout(&arbre , tab_inser[i] ) ;
	}

	parcours_GRD(arbre);

	parcours_RGD(arbre);

	for(i=0 ; i< 13 ; i++)
	{
		suppression(&arbre , tab_suppr[i] ) ;
	}


	return 0;
}
