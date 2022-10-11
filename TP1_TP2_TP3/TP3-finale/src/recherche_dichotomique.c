/* Fichier: recherche_dichotomique.c
*crée un tableau de 100 entiers et puis cherche un entier dans le tableau déjà tri en ordre croissant. Si l'entier est présent dans le tableau, affiche le message 'entier présent'.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int remp_tableau(int tableau[])
{
    int i;
    for(i = 0; i < 100; i++){ //rempli le tableau aléatoirement de 100 nombres de 1 à 100
        tableau[i] = rand() % (100 + 1);
    }
    return tableau[100];
 
}

int tri_tableau(int tableau[100]){
    int i,j,c;
    for(i = 0; i < 100-1; i++){
        for(j = i+1; j < 100; j++){
            if ( tableau[i] > tableau[j] ){ //si le nombre d'après est plus grand que le nombre visé, on échange leur place
                c = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = c;
            }
        }
    }
    return tableau[100];
}

int aff_tableau(int tableau[100]){
    int i;
    for(i = 0 ; i < 100 ; i++){ //on affiche le tableau dans l'ordre
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int cher_entier(int tableau[100], int entier){
    int debut = 0;
    int fin = 100-1;
    int trouve = 0;
    while(trouve == 0){
        int position = floor((debut+fin)/2);
        if (tableau[position] == entier){ //si on trouve l'entier recherché dans le tableau, on arrête la boucle
            trouve = 1;
            printf("Entier présent à la position %d\n", position+1);
        }
        else{ //sinon,
            if(entier > tableau[position]){ //si l'entier est supérieur à l'élément dans le tableau, on recommence dans la moitié supérieur
                debut = position + 1;
            }
            else{ //sinon on recommence dans la moitié inférieur
                fin = position - 1;
            }
        }
        if(debut >= fin){ //si on arrive plus à rétrécir le tableau, on arrête la boucle
            trouve = 1;
            printf("Entier non présent\n");
        }
    }
}

int main(){
        srand(time(NULL));
        int tableau[100];
        remp_tableau(tableau);
        tri_tableau(tableau);
        aff_tableau(tableau);
        int entier;
        printf("Entrez un entier à chercher: ");
        scanf("%d", &entier);
        cher_entier(tableau, entier);
}