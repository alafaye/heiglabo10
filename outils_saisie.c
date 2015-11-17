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

#include <stdio.h>
#include <stdlib.h>
#include "outils_saisie.h"

#define ASCII_O 79
#define ASCII_o 111
#define ASCII_N 78
#define ASCII_n 110

/*amoi*/
int vide_ligne (void){
    return fflush(stdin);
}

int confirmation (char const *invite){
    int retour, retour_entree;
    char reponse;

    printf("%s ", invite);
    printf("(o/n) ");
    do{
	retour = scanf("%c", &reponse);
	if(retour != 1)
	    printf("L'entree est incorrecte!\n");
	else if(reponse != ASCII_O || reponse != ASCII_o || reponse != ASCII_N || reponse != ASCII_n)
	    retour = 0;
    }
    while(retour_entree != 1);
    vide_ligne();
}

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
                       int        borne_sup){

    int retour, verif_entree;

    printf("%s", invite);
    do{
	verif_entree = scanf("%d", &retour);
	if(verif_entree != 1){
	    printf("L'entree est incorrecte!\n");
	}
	else if(retour>borne_sup || retour<borne_inf){
	    printf("L'entree n'est pas dans les bornes demandées!\n");
	    verif_entree = 0;
	}
    }
    while(verif_entree != 1);

    vide_ligne;
    return retour;
}


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
                        double     borne_sup){

    int retour, verif_entree;

    printf("%s", invite);
    do{
	verif_entree = scanf("%d", &retour);
	if(verif_entree != 1){
	    printf("L'entree est incorrecte!\n");
	}
	else if(retour>borne_sup || retour<borne_inf){
	    printf("L'entree n'est pas dans les bornes demandées!\n");
	    verif_entree = 0;
	}
    }
    while(verif_entree != 1);

    vide_ligne;
    return retour;
}

