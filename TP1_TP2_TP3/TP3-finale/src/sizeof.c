/* Fichier: sizeof.c
* affiche la valeur de la taille de plusieurs types
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
    
int main(){ 
    printf("Taille int: %lu octets\n", sizeof (int));
    printf("Taille int *: %lu octets\n", sizeof (int *));
    printf("Taille int **: %lu octets\n", sizeof (int **));
    printf("Taille char *: %lu octets\n", sizeof (char *));
    printf("Taille char **: %lu octets\n", sizeof (char **));
    printf("Taille char ***: %lu octets\n", sizeof (char ***));
    printf("Taille float *: %lu octets\n", sizeof (float *));
    printf("Taille float **: %lu octets\n", sizeof (float **));
    printf("Taille float ***: %lu octets\n", sizeof (float ***));
    return 0;
}