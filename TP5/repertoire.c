#include <stdlib.h>
#include <stdio.h>
#include "repertoire.h"
#include <dirent.h>
#include <string.h>

void lire_dossier(char *repertoire){
    struct dirent *lecture; 
    DIR *rep;
    rep = opendir(repertoire);
    while ((lecture = readdir(rep)) != NULL){
        printf("%s\n", lecture->d_name);
    }
    closedir(rep);
}

void lire_dossier_recursif(char *repertoire){
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

int main(){
    char repertoire[256];
    printf("Entrez le nom du repertoire: ");
    scanf("%s", repertoire);
    //lire_dossier(repertoire);
    // lire_dossier_recursif(repertoire);
    lire_dossier_iteratif(repertoire);
    return 0;
}
