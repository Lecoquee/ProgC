#include <stdio.h> 

int fibo(int n);

int main(){
    int n;
    printf("Entrez n: ");
    scanf("%d",&n);

    for (int i = 0; i < n+1; i++){
        printf("le %d terme de la suite est : %d\n",i,fibo(i));
    }
    return 0;
}

int fibo(int n){
    if(n == 0){
        return 0;
    }
    else if (n ==1){
        return 1;
    }
    else{
        return fibo (n-1) + fibo(n-2);
    }
}