/* Fichier: ptrvariables.c
* affecte et affiche les valeurs des variables de différents types de base (char, short, int, long int, long long int, float, double, long double) en utilisant leurs adresses
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>

int main() {

    //valeur prises au hasard pour l'exemple
    char c = 65;
    short s = 1;
    int i=315;
    long int li = 124582;
    long long int lli= 124856412;
    float f = 4.589;
    double d = -387.4582;
    long double ld = 4548.2;

    //affichage
    //Variables
    printf("==========\n");
    printf("Valeurs\n");
    printf("==========\n");
    printf("char c : %c\n", c);
    printf("short s : %d\n", s);
    printf("int i : %d\n", i);
    printf("long int li : %li\n", li);
    printf("long long int lli : %lli\n", lli);
    printf("float f : %f\n", f);
    printf("double d : %f\n", d);
    printf("long double ld : %Lf\n", ld);

    //Adresses
    printf("==========\n");
    printf("Adresses\n");
    printf("==========\n");
    printf("char c : %p\n", &c);
    printf("short s : %p\n", &s);
    printf("int i : %p\n", &i);
    printf("long int li : %p\n", &li);
    printf("long long int lli : %p\n", &lli);
    printf("float f : %p\n", &f);
    printf("double d : %p\n", &d);
    printf("long double ld : %p\n", &ld);

    return 0;
}