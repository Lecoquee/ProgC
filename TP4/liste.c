#include <stdlib.h>
#include <stdio.h>
#include "liste.h"

void insertion (struct couleur *, struct liste_couleurs *){
    liste_couleurs.r = couleur[1];
    liste_couleurs.g = couleur[2];
    liste_couleurs.b = couleur[3];
    liste_couleurs.a = couleur[4];
}  

void parcours (struct liste_couleurs *){
    //affichage
    for(int i = 0; i < ; i++){ 
        printf("Couleur %d : R=0x%hhx, G=0x%hhx, B=0x%hhx, A=0x%hhx\n", i+1, liste_couleurs[1].r, liste_couleurs[2].g, liste_couleurs[3].b, liste_couleurs[4].a);
    }
}
