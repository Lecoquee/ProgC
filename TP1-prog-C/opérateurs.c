/* Fichier: opérateurs.c
* affiche le résultat des opérations arithmétiques et logiques de a et b à l'écran.
* auteur: Julie Ludwig
*/

#include <stdio.h> 

int main() {
    int(a) = 16; // On enregistre les valeurs de a et b en tant qu'entier voila pourquoi on utilise int
    int(b) = 3;
    printf("addition : %d \n", a + b); //on affiche le résultat de l'addition de a et b
    printf("multiplication : %d \n", a * b); //on affiche le résultat de la multiplication de a et b 
    printf("division : %d \n", a / b); //on affiche le résultat de la division de a par b 
    printf("soustraction : %d \n", a - b);//on affiche le résultat de la soustraction de a et b
    printf("modulus : %d \n", a % b );//on affiche le résultat du module de a par b
    printf("négation : %d \n", !a);//on affiche le résultat de la négation de a
    printf("et : %d \n", a && b);//on affiche le résultat de a et b
    printf("ou : %d \n", a || b);//on affiche le résultat de a ou b 
}