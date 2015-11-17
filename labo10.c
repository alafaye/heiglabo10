/* Fichier : labo10.c
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

#include <stdlib.h>
#include <stdio.h>
#include "outils_saisie.h"

int main(void){
    int resultat_vide_ligne, resultat_confirmation;
    int resultat_lire_entier, resultat_lire_entier_borne;
    int resultat_lire_reel, resultat_lire_reel_borne;

    printf("Test Bench pour la labrairie de saisie.\n");

    printf("Test de vide_ligne\n");
    resultat_vide_ligne = vide_ligne();
    printf("Test de confirmation\n");
    resultat_confirmation = confirmation("Voulez-vous continuer?");
    printf("Test de lire_entier\n");
    resultat_lire_entier = lire_entier("Veuillez entrer un entier : ");
    printf("Test de lire_entier_borne\n");
    resultat_lire_entier_borne = lire_entier_borne("Veuillez entrer un entier entre 0 et 5 : ", 0, 5);
    printf("Test de lire_reel\n");
    resultat_lire_reel = lire_reel("Veuillez entrer un reel : ");
    printf("Test de lire_reel_borne\n");
    resultat_lire_reel_borne = lire_reel_borne("Veuillez entrer un reel entre 0 et 5 : ", 0, 5);


    return EXIT_SUCCESS;
}
