/* Fichier: tri.c
* créé d'abord un tableau de 100 entiers, puis les tries par ordre croissant
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int remp_tableau(int tableau[])
{
    int i;
    for(i = 0; i < 100; i++){ //rempli le tableau aléatoirement par 100 nombres de 1 à 100
        tableau[i] = rand() % (100 + 1);
    }
    return tableau[100];
 
}

int tri_et_aff_tableau (int tableau[100]){
    int i,j,c;
    for(i = 0; i < 100-1; i++){
        for(j = i+1; j < 100; j++){
            if ( tableau[i] > tableau[j] ){ //si le nombre d'après est plus grand que le nombre visé, on les échange
                c = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = c;
            }
        }
    }
    int x;
    for(x = 0 ; x < 100 ; x++){ //on affiche le tableau dans l'ordre
        printf("%d ", tableau[x]);
    }
}
 
int main(){
        srand(time(NULL));
        int tableau[100];
        remp_tableau(tableau);
        tri_et_aff_tableau(tableau);
}