/* Fichier: chercher.c
* crée un tableau de 100 entiers et cherche un entier dans ce tableau. Si l'entier est présent dans le tableau, affiche le message 'entier présent'.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cherche(int n, int liste[100]); //On annonce la fonction qui sera définie aprés

int main() {
    srand(time(NULL));//Nécessaire pour avoir un tableau différent à chaque fois
    int liste[100]; //On initilaise les variables
    int k;
    int n;
    for (k = 0;k<100;k++){//On crée le tableau de 100 entiers
        liste[k] = rand() %100;//Les entiers sont aléatoires entre 0 et 99
        printf("%d  ",liste[k]);//On affiche le tableau
    }
    printf("Entrez l'entier que vous voulez chercher: ");//On demande l'entier recherché
    scanf("%d",&n);//On associe l'entier saisie à la variable n
    cherche(n,liste);//On appelle la fonction cherche
}

int cherche(int n, int liste[100]){//On fait une fonction cherche 
    int i;//On initialise les variables
    int stop = 0;
    for (i=0;i<100;i++){ //On parcourt tout le tableau
        if (stop == 0){ //On met une condtion d'arrêt si l'entier est présent au moins une fois le programme s'arrête et ne finit pas de parcourir le tableau.
            if (liste[i] == n){
                printf("entier présent");//Si l'entier est présent on affiche ce message, sinon il ne se passse rien
                stop = 1;
            }
        }
    }
}