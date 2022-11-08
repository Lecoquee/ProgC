/* Fichier: main.c
* execution des fonctions des différents programmes
* auteur: Julie Ludwig et Guillaume Bufferne
*/


#include <stdlib.h>
#include <stdio.h>
#include "fichier.h"

int main(){
    char*nom_de_fichier = "fichier.txt";
    lire_fichier(nom_de_fichier);
    char *message = "Ceci est un message";
    ecrire_dans_fichier(nom_de_fichier, message);
    printf("\n");
    
    int num1 = 2;
    int num2 = 2;
    char op = '+';
    operation( num1, num2, op);


    return 0;
}

