#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cherche(int n, int liste[100]);

int main() {
    srand(time(NULL));
    int liste[100];
    int k;
    int n;
    for (k = 0;k<100;k++){
        liste[k] = rand() %100;
        printf("%d  ",liste[k]);
    }
    printf("Entrez l'entier que vous voulez chercher: ");
    scanf("%d",&n);
    cherche(n,liste);
}

int cherche(int n, int liste[100]){
    int i;
    int stop = 0;
    for (i=0;i<100;i++){   
        if (stop == 0){
            if (liste[i] == n){
                printf("entier présent");
                stop = 1;
            }
        }
    }
}