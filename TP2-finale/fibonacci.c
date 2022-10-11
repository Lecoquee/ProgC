/* Fichier: fibonacci.c
* affiche les n termes de la suite de Fibonacci U0, U1, U2,...Un
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h> 

int fibo(int n);

int main(){
    int n;
    printf("Entrez n: ");
    scanf("%d",&n);

    for (int i = 0; i < n+1; i++){ //affiche la suite de Fibonacci jusqu'au n-ième terme
        printf("le %d terme de la suite est : %d\n",i,fibo(i));
    }
    return 0;
}

int fibo(int n){
    if(n == 0){ //1er terme
        return 0;
    }
    else if (n ==1){ //2ème terme
        return 1;
    }
    else{ //n-ième terme
        return fibo (n-1) + fibo(n-2);
    }
}