/* Fichier: calcul.c
* Objectif : Créer une commande calcule qui utilise l'interface en ligne de commande.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
#include <stdlib.h>
#include "operateur.h"

int main(int argc, char*argv[]){ //On ajoute des arguments dans le main pour pouvoir utiliser l'interface en ligne de commande
    int val = operation( atoi(argv[2]), atoi(argv[3]), *argv[1]);
    printf("%d\n", val);
}