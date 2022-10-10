/* Fichier: cercle.c
* affiche l'aire et le périmètre à l'écran.
* auteur: Julie Ludwig
*/


#include <stdio.h> 

int main() {
    float rayon; //on initialise le rayon
    printf ("entrer le rayon : \n"); 
    scanf ("%f",&rayon); //On demande de rentrer une valeur de rayon que l'on attribue à la variable rayon
    printf ("l'aire est : %f", rayon*rayon*3.14); // On affiche l'aire 
    printf ("le périmètre est : %f", 2*3.14*rayon); //On affiche le périmètre
 }