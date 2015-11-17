/* Fichier : saisie.c
 * Auteur  : Alexandre Lafaye
 * Date    : 12.11.2015
 *
 * But     :  Labo10: Libraire de saisie
 *
 *
 * Remarque(s) : 
 *
 *
 * Compilateur : g++
 * Debuggueur : gdb
 */
/*
 * Pour Windows
 * #define _CRT_SECURE_NO_WARNINGS
 */

#include "outils_saisie.h"
#include <stdio.h>
#include <stdlib.h>

/*amoi*/
int vide_ligne (void){
    return fflush(stdin);
}

int confirmation (char const *invite);

/*amoi*/
int lire_entier (char const *invite){
    int retour, verif_entree;

    printf("%s", invite);
    do{
	verif_entree = scanf("%d", &retour);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
    }
    while(verif_entree != 1);

    vide_ligne;
    return retour;
}

int lire_entier_borne (char const *invite,
                       int        borne_inf,
                       int        borne_sup);


/*amoi*/
double lire_reel ( char const *invite ){
    double retour;
    int verif_entree;

    printf("%s", invite);

    do{
	verif_entree = scanf("%d", &retour);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
    }
    while(verif_entree != 1);
    vide_ligne;
    return retour;
}

double lire_reel_borne (char const *invite,
                        double     borne_inf,
                        double     borne_sup);

