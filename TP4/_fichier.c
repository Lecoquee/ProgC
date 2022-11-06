#include <stdlib.h>
#include <stdio.h>
#include "fichier.h"

int lire_fichier(char*nom_de_fichier){
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(nom_de_fichier, "r"); // On ouvre le fichier
    if (fichier != NULL){
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL){ // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
}

int ecrire_dans_fichier(char *nom_de_fichier, char *message){
    FILE* fichier = NULL;
    fichier = fopen(nom_de_fichier, "w"); // On ouvre le fichier
    if (fichier != NULL){
        fputs(message, fichier); // On écris le message dans le fichier
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
}