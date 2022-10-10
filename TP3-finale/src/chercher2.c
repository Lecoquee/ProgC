/* Fichier: chercher2.c
* crée un tableau de 10 phrases et cherche si une phrase est bien dans le tableau.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define NB_PHRASES 10
#define MAX_PHRASES_TAILLE 40

void tab(char arr[NB_PHRASES][MAX_PHRASES_TAILLE]){//On affiche chaque phrase sous forme de tableau
    printf("Tableau de phrases : ");
	for (int i = 0; i < NB_PHRASES; i++){
		printf("'%s', ", arr[i]);
	}
    printf("\n");
}

longueur(char arr[]);//On initialise la fonction longueur qu'on définit après

int main() {
    srand (time(NULL)); //Nécessaire pour avoir un tableau différent à chaque fois
    
    //On initialise les phrases
    char arr[NB_PHRASES][MAX_PHRASES_TAILLE] =
	{ "Bryan is in the kitchen",
	  "J'aime coder",
	  "Bordeaux meilleure ville",
	  "Il fait froid",
      "Il fait beau",
      "L'eau ça mouille",
      "Le feu ça brûle",
      "AOT meilleur que Naruto",
      "La volvic c'est bon",
      "Joyeux noël",
	};

    tab(arr);//On affiche le tableau
    int find = 0;//On initialise les variables
    char to_find[] = {"Joyeux noël"};


    for(int i=0; i<NB_PHRASES; i++){//On vérifie si la phrase est bien dans le tableau ou pas
        int j=0;

        while(arr[i][j]==to_find[j] & j<longueur(to_find)){
            j++;
        }

        if(longueur(to_find)==j & longueur(arr[i])==j){
            find = 1;
        }
    }

    if(find){//On affiche le résultat
        printf("La phrase \"%s\" est dans le tableau\n", to_find);
    }
    else{
        printf("La phrase \"%s\" n'est pas dans le tableau\n", to_find);
    }
 
       
    return 0;
}

int longueur(char arr[]){//On parcourt toute la phrase à l'aide de pointeur
    int lgr=0;
    while(*arr!='\0'){
        lgr++;
        arr++;
    }
    return lgr;
}
