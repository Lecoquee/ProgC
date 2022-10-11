/* Fichier: boucles.c
* affiche un triangle rectangle composé de # et *.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h> 

int main() {
    int(compteur) = 0;//On initialise le compteur

    printf("Entrez la taille du triangle :\n");//On demande la taille du triangle
    scanf("%d", &compteur);

    if (compteur < 4){
        printf("Taille non valide");//Le triangle doit être supérieur à 5 sinon il y a une erreur
    }
    else {

        for (int ligne = 0; ligne < compteur+1; ligne ++){//On met des * à l'extérieur du triangle
            int colonne = 0;
            if(ligne < 3 || ligne == compteur){
                while (colonne < ligne){
                    printf("*");
                    colonne++;
                }
            }
            else {
                printf("*");
                while(colonne < ligne -2){
                    printf("#");//On remplit le triangle avec #
                    colonne++;
                }
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
}