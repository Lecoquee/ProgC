/* Fichier: octets.c
* affiche les differents types de base en octets.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h>
int main(){
    //Pour short
    short sh=4; //on initialise la variable
    char *ptrsh=(char*)&sh; //on initialise le pointeur
    for (int i=0;i<sizeof(sh);i++){ //on parcourt chaque octet de la variable
        ptrsh++; //on incremente le pointeur pour pouvoir afficher l'octet suivant
    }
    printf("Variable short : %d en octet :",sh);
    for (int i=0;i<sizeof(sh);i++){ 
        printf("%hhx ",*ptrsh); //on affiche l'écriture en octet
        *ptrsh--;
    }
    //Pour int
    int b=-12;
    char *ptrb=(char*)&b;
    for (int i=0;i<sizeof(b);i++){
        printf("%hhx ",*ptrb);
        ptrb++;
    }
    printf("\n");

    //Pour long int
    long int c=15425;
    char *ptrc=(char*)&c;
    for (int i=0;i<sizeof(c);i++){
        printf("%hhx ",*ptrc);
        ptrc++;
    }
    printf("\n");

    //Pour float
    float d=-5.24;
    char *ptrd=(char*)&d;
    for (int i=0;i<sizeof(d);i++){
        printf("%hhx ",*ptrd);
        ptrd++;
    }
    printf("\n");

    //Pour double
    double e=4.569;
    char *ptre=(char*)&e;
    for (int i=0;i<sizeof(e);i++){
        printf("%hhx ",*ptre);
        ptre++;
    }
    printf("\n");

    //Pour long double
    long double f=3.255465454;
    char *ptrf=(char*)&f;
    for (int i=0;i<sizeof(f);i++){
        printf("%hhx ",*ptrf);
        ptrf++;
    }
}