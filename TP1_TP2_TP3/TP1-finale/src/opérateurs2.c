/* Fichier: opérateurs2.c
* Utilise 3 variables et laisse le choix de l'opération arithmétique à effectuer entre les deux nombres.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>

int main() {
    int num1;//On initialise la première variable
    printf("Entrez le 1er numéro: ");//On demande de rentrer le premier nombre
    scanf("%d", &num1);//On associe le premier nombre à la première variable
    char a = getchar();
    int num2;//On initialise la deuxième variable
    printf("Entrez le 2ème numéro: ");//On demande de rentrer le deuxième nombre
    scanf("%d", &num2);//On associe le deuxième nombre à la deuxième variable
    char b = getchar();
    char op;//On initialise la troisième variable 
    printf("Entrez un opérateur: ");//On demande de rentrer l'opérateur
    scanf("%c", &op);//On associe l'opérateur à la troisième variable
    char c = getchar();
    switch (op){ //En fonction des différents cas on fait l'opération correspondante
        case 43 : printf("%d+%d=%d\n", num1, num2, num1+num2);
        break;
        case 45 : printf("%d-%d=%d\n", num1, num2, num1-num2);
        break;
        case 42 : printf("%d*%d=%d\n", num1, num2, num1*num2);
        break;
        case 47 : printf("%d/%d=%d\n", num1, num2, num1/num2);
        break;
        case 37 : printf("%d modulo %d = %d\n", num1, num2, num1%num2);
        break;
        case 38 : printf("%d&%d=%d\n", num1, num2, num1&&num2);
        break;
        case 124 : printf("%d||%d=%d\n", num1, num2, num1||num2);
        break;
        return 0;
    }
}