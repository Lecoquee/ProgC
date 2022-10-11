/* Fichier: puissance.c
* affiche la valeur du nombre a élevé à une puissance b
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>

int puissance(int a,int b){
    int c = a;
    for (int boucle = 1; boucle < b; boucle++){ //tant que la boucle est inférieur à la puissance,
        c = c*a; //on multiplie le dernier nombre calculé par a
    }
    return c;
}

int main() {
    int a;
    printf("a = ");
    scanf("%d", &a);
    int b;
    printf("b = ");
    scanf("%d", &b);
    int a_puissance = 0;
    a_puissance = puissance(a,b);
    printf("a^b = %d\n", a_puissance);
    return 0;
}

