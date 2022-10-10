#include <stdio.h> 

int main() {
    int(compteur) = 0;

    printf("Entrez la taille du triangle :\n");
    scanf("%d", &compteur);

    if (compteur < 4){
        printf("Taille non valide");
    }
    else {

        for (int ligne = 0; ligne < compteur+1; ligne ++){
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
                    printf("#");
                    colonne++;
                }
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
}