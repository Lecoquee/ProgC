#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int remp_tableau(int tableau[])
{
    int i;
    for(i = 0; i < 100; i++){
        tableau[i] = rand() % (100 + 1);
    }
    return tableau[100];
 
}

int tri_tableau(int tableau[100]){
    int i,j,c;
    for(i = 0; i < 100-1; i++){
        for(j = i+1; j < 100; j++){
            if ( tableau[i] > tableau[j] ){
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
    for(i = 0 ; i < 100 ; i++){
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
        if (tableau[position] == entier){
            trouve = 1;
            printf("Entier présent à la position %d\n", position+1);
        }
        else{
            if(entier > tableau[position]){
                debut = position + 1;
            }
            else{
                fin = position - 1;
            }
        }
        if(debut >= fin){
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