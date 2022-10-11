/* Fichier: grand_petit.c
* crée un tableau de 100 entiers et calcule le numéro le plus grand et le numéro le plus petit.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_grand(int liste[100]);//On initialise la fonction num_grand définie après
int num_petit(int liste[100]);//On initialise la fonction num_petit définie après

int main() {
    srand(time(NULL));///Nécessaire pour avoir un tableau différent à chaque fois
    int liste[100];//On initilaise les variables
    int k;
    for (k = 0;k<100;k++){//On crée le tableau de 100 entiers
        liste[k] = rand() %100;//Les entiers sont aléatoires entre 0 et 99
        printf("%d  ",liste[k]);//On affiche le tableau
    }
    printf("\n le plus grand numéro du tableau est : %d\n",num_grand(liste));//On appelle la fonction num_grand et on affiche le résulat
    printf("le plus petit numéro du tableau est : %d\n",num_petit(liste));//On appelle la fonction num_petit et on affiche le résulat
}

int num_grand(int liste[100]){//On fait une fonction num_grand
    int i;//On initialise les variables
    int max = 0;
    for (i=0;i<100;i++){//On cherche le maximum du tableau
        if (liste[i] > max){
            max = liste[i];
        }
    }
    return max;//On le renvoit comme réponse
}

int num_petit(int liste[100]){//On fait une fonction num_petit
    int i;//On initialise les variables
    int min = 99;
    for (i=0;i<100;i++){//On cherche le minimum du tableau
        if (liste[i] < min){
            min = liste[i];
        }
    }
    return min;//On le renvoit comme réponse
}
