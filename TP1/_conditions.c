#include <stdio.h> //header



int main() {
    char condition;
    printf("entrez a pour la question a ,b ou c pour choisir la question : ");
    scanf("%c",&condition);
    if(condition=='a'){
    int compteur = 0;
    while(compteur<=1000){
        if (compteur%2==0 & compteur%15==0) {
            printf("%d est divisible par 2 et 15 \n",compteur);
        }
        compteur++;
    }

    }
    
    if(condition=='b'){
    int compteur = 0;
    while(compteur<=1000){
        if (compteur%103==0 || compteur%107==0) {
            printf("%d est divisible par 103 ou 107 \n",compteur);
        }
        compteur++;
    }    
    }

    if(condition=='c'){
    int compteur = 0;
    while(compteur<=1000){
        if (compteur%7==0 || compteur%5==0) {
            if(compteur%3!=0){
                printf("%d est divisible par 7 ou 5 mais pas par 3 \n",compteur);
            }
            
        }
        compteur++;
    }    
    }


}
