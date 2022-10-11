/* Fichier: couleurs.c
* Crée un tableau de 100 couleurs et compte le nombre de fois que chaque couleur apparaît.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

struct RGBA {//On crée la structure pour stocker les détails d'une couleur : R, G, B et A
    int r;
    int g;
    int b;
    int a;
    int cnt;
};

void aff_couleurs(struct RGBA tab[], int taille_tableau){//On crée une fonction pour afficher les couleurs
    for(int i =0; i<taille_tableau; i++){
        printf("Couleur %d : 0x%hhx 0x%hhx 0x%hhx 0x%hhx\n", i+1, tab[i].r, tab[i].g, tab[i].b, tab[i].a);
    }
}

int main() {
    srand (time(NULL)); //Nécessaire pour avoir un tableau différent à chaque fois

    int ref_couleurs = 10;
    int nb_couleurs = 100;

    struct RGBA colors_ref[ref_couleurs];

    for (int i=0; i<ref_couleurs; i++){
        colors_ref[i].r = rand()&0xff;
        colors_ref[i].g = rand()&0xff;
        colors_ref[i].b = rand()&0xff;
        colors_ref[i].a = rand()&0xff;
        colors_ref[i].cnt = 0;
    }

    //On affiche les couleurs de références 
    printf("Couleurs de references :\n");
    aff_couleurs(colors_ref, ref_couleurs);

    //On génère les couleurs
    struct RGBA rdn_couleurs[nb_couleurs];
    for (int i=0; i< nb_couleurs; i++){
        int rdn_index = rand()%9;
        rdn_couleurs[i] = colors_ref[rdn_index];
    }

    //Vérifie le nombre de couleurs distinctes
    for(int i=0; i<nb_couleurs; i++){
        for(int j=0; j<ref_couleurs; j++){
            if((rdn_couleurs[i].r == colors_ref[j].r) & (rdn_couleurs[i].g == colors_ref[j].g) & (rdn_couleurs[i].b == colors_ref[j].b) & (rdn_couleurs[i].a == colors_ref[j].a)){
                colors_ref[j].cnt +=1;
            }
        }
    }

    //Affiche le nombre de couleurs distinctes
    for(int i=0; i<ref_couleurs; i++){
        printf("La couleur %d apparaît %d fois.\n", i+1, colors_ref[i].cnt);
    }

    return 0;
}