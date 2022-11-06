/* Fichier: couleurs.c
* crée et initialise un tableau de 10 couleurs
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>
#include<stdlib.h>

struct RGBA {
    int r;
    int g;
    int b;
    int a;
};

int main() {

    int nb_couleurs = 10;
    struct RGBA tableau_couleurs[nb_couleurs];

    for (int i=0; i<nb_couleurs; i++){ //donne une couleur aléatoirement grâce à la structure
        tableau_couleurs[i].r = rand()&0xff;
        tableau_couleurs[i].g = rand()&0xff;
        tableau_couleurs[i].b = rand()&0xff;
        tableau_couleurs[i].a = rand()&0xff;
    }

    //affichage
    for(int i =0; i<nb_couleurs; i++){ 
        printf("Couleur %d : R=0x%hhx, G=0x%hhx, B=0x%hhx, A=0x%hhx\n", i+1, tableau_couleurs[i].r, tableau_couleurs[i].g, tableau_couleurs[i].b, tableau_couleurs[i].a);
    }

    return 0;
}
