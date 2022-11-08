/* Fichier: factorielle.c
* calcule la factorielle d'un entier naturel.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdlib.h>
#include <stdio.h>

int factorielle (int num) {
    if (num == 0) {
        return 1; //renvoie 1 si le nombre est égal à 0
    }
    else {
        return (num * factorielle (num-1)); //calcul de la factorielle
    }
}

int main(){
    int num;
    printf("Entrez le nombre factoriel à calculer: ");
    scanf("%d", &num);
    int fact = factorielle(num); //calcul de la factorielle
    printf("%d! = %d\n", num, fact); //affichage
    return 0;
}
