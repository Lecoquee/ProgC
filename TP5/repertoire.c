/* Fichier: repertoire.c
* parcourt le répertoire saisi par l'utilisateur et affiche les noms des fichiers (et répertoires, si aucun) dans ce répertoire.
* auteur: Julie Ludwig et Guillaume Bufferne
*/


#include <stdlib.h>
#include <stdio.h>
#include "repertoire.h"
#include <dirent.h>
#include <string.h>

void lire_dossier(char *repertoire){
    struct dirent *lecture; 
    DIR *rep;
    rep = opendir(repertoire); //ouverture du répertoire
    while ((lecture = readdir(rep)) != NULL){ //tant qu'il y a quelque chose à lire dans le répertoire
        printf("%s\n", lecture->d_name); //on affiche
    }
    closedir(rep); //on ferme le répertoire
}

void lire_dossier_recursif(char *repertoire){
    char chemin[4096]; //chemin du dossier
    struct dirent *lecture; 
    DIR *rep;
    rep = opendir(repertoire); //ouverture du répertoire
    while ((lecture = readdir(rep)) != NULL){ //tant qu'il y a quelque chose à lire dans le répertoire
        printf("%s\n", lecture->d_name); //on affiche
        if (lecture->d_type == DT_DIR){ //si c'est un dossier
            if (strcmp(lecture->d_name, ".")!=0 && strcmp(lecture->d_name, "..")!=0){ //on ne prend pas en compte les dossiers . et ..
                strcpy(chemin, repertoire);
                strcat(chemin,"/");
                strcat(chemin, lecture->d_name);
                lire_dossier_recursif(chemin); //on re-execute la fonction avec le nouveau dossier
            }
        }       
    }
    closedir(rep); //on ferme le répertoire
}

/*
void lire_dossier_iteratif(char *repertoire){
    char chemin[4096];
    struct dirent *lecture; 
    DIR *rep;
    rep = opendir(repertoire);
    while ((lecture = readdir(rep)) != NULL){
        printf("%s\n", lecture->d_name);
        if (lecture->d_type == DT_DIR){
            if (strcmp(lecture->d_name, ".")!=0 && strcmp(lecture->d_name, "..")!=0){ 
                strcpy(chemin, repertoire);
                strcat(chemin,"/");
                strcat(chemin, lecture->d_name);
                lire_dossier_recursif(chemin);
            }
        }       
    }
    closedir(rep);
}
*/

int main(){
    char repertoire[256];
    printf("Entrez le nom du repertoire: ");
    scanf("%s", repertoire);
    //lire_dossier(repertoire);
    lire_dossier_recursif(repertoire);
    //lire_dossier_iteratif(repertoire);
    return 0;
}
