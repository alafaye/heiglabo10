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

#define ASCII_O 'O'
#define ASCII_o 'o'
#define ASCII_N 'N'
#define ASCII_n 'n'

/*amoi*/
int vide_ligne (void){
    return fflush(stdin);
}

int confirmation (char const *invite){
    int verif_entree, retour;
    char reponse;

    do{
	printf("%s ", invite);
	printf("(o/n) ");
	verif_entree = scanf("%c", &reponse);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
	else if(reponse != ASCII_O && reponse != ASCII_o && reponse != ASCII_N && reponse != ASCII_n){
	    printf("Il faut repondre par (o/n)!\n");
	    verif_entree = 0;
	}
    }
    while(verif_entree != 1);

    vide_ligne();

    if(reponse == ASCII_O || reponse == ASCII_o){
	retour = 1;
    }
    else if(reponse == ASCII_N || reponse == ASCII_n){
	retour = 0;
    }
    return retour;
}

int lire_entier (char const *invite){
    int retour, verif_entree;

    do{
	printf("%s", invite);
	verif_entree = scanf("%d", &retour);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
    }
    while(verif_entree != 1);

    vide_ligne();
    return retour;
}

int lire_entier_borne (char const *invite,
	int        borne_inf,
	int        borne_sup){

    int retour, verif_entree;

    do{
	printf("%s", invite);
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

    vide_ligne();
    return retour;
}


double lire_reel ( char const *invite ){
    double retour;
    int verif_entree;

    do{
	printf("%s", invite);
	verif_entree = scanf("%lf", &retour);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
    }
    while(verif_entree != 1);

    vide_ligne();

    return retour;
}

double lire_reel_borne (char const *invite,
	double     borne_inf,
	double     borne_sup){

    double retour;
    int verif_entree;

    do{
	printf("%s", invite);
	verif_entree = scanf("%lf", &retour);
	if(verif_entree != 1){
	    printf("L'entree est incorrecte!\n");
	}
	else if(retour>borne_sup || retour<borne_inf){
	    printf("L'entree n'est pas dans les bornes demandées!\n");
	    verif_entree = 0;
	}
    }
    while(verif_entree != 1);

    vide_ligne();
    return retour;
}

