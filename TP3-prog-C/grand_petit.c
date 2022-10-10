#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_grand(int liste[100]);
int num_petit(int liste[100]);

int main() {
    srand(time(NULL));
    int liste[100];
    int k;
    for (k = 0;k<100;k++){
        liste[k] = rand() %100;
        printf("%d  ",liste[k]);
    }
    printf("\n le plus grand numéro du tableau est : %d\n",num_grand(liste));
    printf("le plus petit numéro du tableau est : %d\n",num_petit(liste));
}

int num_grand(int liste[100]){
    int i;
    int max = 0;
    for (i=0;i<100;i++){
        if (liste[i] > max){
            max = liste[i];
        }
    }
    return max;
}

int num_petit(int liste[100]){
    int i;
    int min = 99;
    for (i=0;i<100;i++){
        if (liste[i] < min){
            min = liste[i];
        }
    }
    return min;
}
