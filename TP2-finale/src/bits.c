/* Fichier: bits.c
* vérifie si les 4eme et 20eme bits de gauche sont 1 (en binaire)
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>

int bits(int d){
    int tab[30], tab_endroit[30], i, j;
    int compteur = 0; 
    for(int i = 0; d > 0; i++){ //converti le nombre binaire en bits
        tab[i] = d%2;  
        d = d/2;
        compteur = compteur + 1;
    }
    for(i = compteur-1, j = 0; i >= 0; i--, j++){ //remet le nombre en bits dans le bon sens de lecture
        tab_endroit[j] = tab[i];  
    }
    //vérification des conditions
    if (tab_endroit[3] == 1){
        if (tab_endroit[19] == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

int main() {
    int d;
    printf("d = ");
    scanf("%d", &d);
    int DeuxBits = 0;
    DeuxBits = bits(d);
    printf("4ème et 20ème à 1 ? %d\n", DeuxBits);
    return 0;
}