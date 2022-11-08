/* Fichier: operator.c
* Objectif : Tester les différents opérateurs arithmétiques et logiques en utilisant switch
* auteur: Julie Ludwig et Guillaume Bufferne
*/


#include <stdio.h>
#include "operator.h"

//On crée une fonction pour chaque opération
int somme(int num1, int num2){
    int val = num1 + num2;
    return val;
}

int difference(int num1, int num2){
    int val = num1 - num2;
    return val;
}
int produit(int num1, int num2){
    int val = num1 * num2;
    return val;
}

int quotient(int num1, int num2){
    int val = num1 / num2;
    return val;
}
int modulo(int num1, int num2){
    int val = num1 % num2;
    return val;
}
int et(int num1, int num2){
    int val = num1 & num2;
    return val;
}

int ou(int num1, int num2){
    int val = num1 | num2;
    return val;
}

int negation(int num1){
    return ~num1;
}

//On crée ensuite la fonction opération qui effectue l'opération voulu grâce à un switch case
int operation(int num1, int num2, char op) {
//    int num1;
//    printf("Entrez le 1er numéro: ");
//    scanf("%d", &num1);
//    getchar();
//    int num2;
//    printf("Entrez le 2ème numéro: ");
//    scanf("%d", &num2);
//    getchar();
//    char op;
//    printf("Entrez un opérateur: ");
//    scanf("%c", &op);
//    getchar();
    switch (op){
        case 43 : printf("%d+%d=%d\n", num1, num2, somme(num1, num2));
        break;
        case 45 : printf("%d-%d=%d\n", num1, num2, difference(num1, num2));
        break;
        case 42 : printf("%d*%d=%d\n", num1, num2, produit(num1, num2));
        break;
        case 47 : printf("%d/%d=%d\n", num1, num2, quotient(num1, num2));
        break;
        case 37 : printf("%d modulo %d = %d\n", num1, num2, modulo(num1, num2));
        break;
        case 38 : printf("%d&%d=%d\n", num1, num2, et(num1, num2));
        break;
        case 124 : printf("%d||%d=%d\n", num1, num2, ou(num1, num2));
        break;
    }
}
