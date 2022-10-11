/* Fichier: conditions.c
* affiche les numéros <= 1000 qui sont divisibles par différents nombres en fonction des cas a, b ou c.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h> //header



int main() {
    char condition;//On initialise la variable condition
    printf("entrez a pour la question a ,b ou c pour choisir la question : ");//On demande de rentrer quelle condition on va appliquer
    scanf("%c",&condition);//On associe soit a, b ou c a la variable condition
    if(condition=='a'){//Condition a
    int compteur = 0;//On initialise le compteur
    while(compteur<=1000){//Pour affciher seulement les numeros inférieur à 1000
        if (compteur%2==0 & compteur%15==0) {//On veut seulement les nombres divisbles par 2 et 15
            printf("%d est divisible par 2 et 15 \n",compteur);//On les affiche
        }
        compteur++;//On incrémente le compteur
    }

    }
    
    if(condition=='b'){//Condition b
    int compteur = 0;//On initilaise le compteur
    while(compteur<=1000){//Pour affciher seulement les numeros inférieur à 1000
        if (compteur%103==0 || compteur%107==0) { //On veut seulement les nombres divisbles par 103 ou 107
            printf("%d est divisible par 103 ou 107 \n",compteur);//On les affiche
        }
        compteur++;//On incrémente le compteur
    }    
    }

    if(condition=='c'){//Condition c
    int compteur = 0;//On initilaise le compteur
    while(compteur<=1000){//Pour affciher seulement les numeros inférieur à 1000
        if (compteur%7==0 || compteur%5==0) {//On veut seulement les nombres divisbles par 7 ou 5 mais pas par 3
            if(compteur%3!=0){
                printf("%d est divisible par 7 ou 5 mais pas par 3 \n",compteur);//On les affiche
            }
            
        }
        compteur++;//On incrémente le compteur
    }    
    }


}