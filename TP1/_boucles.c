#include <stdio.h>

// // Version For
// int main() {
//     int compteur;
//     printf("Entrez la taille du triangle (>4): ");
//     scanf("%d", &compteur);
//     if (compteur > 4){
//         for (int ligne = 1; ligne <= compteur; ligne++){
//             if (ligne == 1) {
//                 printf("* \n");
//             }
//             else if (ligne == 2) {
//                 printf("* * \n");
//             }
//             else if (ligne == compteur) {
//                 for (int colonne = 1; colonne <= compteur; colonne++){
//                     printf("* ");
//                     if (colonne == compteur){
//                         printf("\n");
//                     }

//                 }
//             }
//             else {
//                 for (int colonne = 1; colonne <= ligne; colonne++){
//                     if (colonne == 1) {
//                         printf("* ");
//                     }
//                     else if (colonne == ligne){
//                         printf("* \n");
//                     }
//                     else{
//                         printf("# ");
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Version While
int main() {
    int compteur;
    printf("Entrez la taille du triangle (>4): ");
    scanf("%d", &compteur);
    int ligne = 1;
    if (compteur > 4){
        while (ligne <= compteur){
            if (ligne == 1) {
                printf("* \n");
            }
            else if (ligne == 2) {
                printf("* * \n");
            }
            else if (ligne == compteur) {
                int colonne = 1;
                while (colonne <= compteur){
                    printf("* ");
                    if (colonne == compteur){
                        printf("\n");
                    }
                    colonne++;
                }
            }
            else {
                int colonne = 1;
                while (colonne <= ligne){
                    if (colonne == 1) {
                        printf("* ");
                    }
                    else if (colonne == ligne){
                        printf("* \n");
                    }
                    else{
                        printf("# ");
                    }
                    colonne++;
                }
            }
            ligne++;
        }
    }    
    return 0;
}