/* Fichier: binaire.c
* affiche une variable int en format binaire.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>

int main() {

    int nbr, index; //On initialise les variables 
    int table[100];

    printf("Entrez le nombre à convertir : ");//On demande la saisie du nombre à convertir
    scanf("%d", &nbr);

    index = sizeof(nbr)*8;//On initialise le pointeur

    while(index >=0) {

        table[index-1] = nbr&1;//On fait la conversion
        index--;//On décrémente le compteur
        nbr >>= 1;
    }

    printf("Conversion binaire :");//On affiche à l'écran la conversion
    for (int i=0; i<sizeof(nbr)*8; i++){
        printf("%d", table[i]);
    }

    printf("\n");//Retour à la ligne
    
    return 0;
}