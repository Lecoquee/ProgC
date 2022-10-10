#include <stdio.h> 

int main() {
    char caractere = 'a';
    printf("%ld octets est la taille de %c \n", sizeof(caractere), caractere);
    short chiffre = 1;
    printf("%ld octets est la taille de %d \n", sizeof(chiffre), chiffre);
    int nbr = 30;
    printf("%ld octets est la taille de %d \n", sizeof(nbr), nbr);
    long int nbr2 = 1000;
    printf("%ld octets est la taille de %ld \n", sizeof(nbr2), nbr2);
    long long int nbr3 = 999999;
    printf("%ld octets est la taille de %lld \n", sizeof(nbr3), nbr3);
    float nbr4 = 3.14;
    printf("%ld octets est la taille de %f \n", sizeof(nbr4), nbr4);
    double nbr5 = 2.5555;
    printf("%ld octets est la taille de %f \n", sizeof(nbr5), nbr5);
    long double nbr6 = 13.555;
    printf("%ld octets est la taille de %Lf \n", sizeof(nbr6), nbr6);

    signed char cara = 'a';
    printf("signed : %ld octets est la taille de %c \n", sizeof(cara), cara);
    signed short chif = 1;
    printf("signed : %ld octets est la taille de %d \n", sizeof(chif), chif);
    signed int nbr7 = 30;
    printf("signed : %ld octets est la taille de %d \n", sizeof(nbr7), nbr7);
    signed long int nbr8 = 1000;
    printf("signed : %ld octets est la taille de %ld \n", sizeof(nbr8), nbr8);
    signed long long int nbr9 = 999999;
    printf("signed : %ld octets est la taille de %lld \n", sizeof(nbr9), nbr9);

    unsigned char car = 'a';
    printf("unsigned : %ld octets est la taille de %c \n", sizeof(car), car);
    unsigned short chiff = 1;
    printf("unsigned : %ld octets est la taille de %d \n", sizeof(chiff), chiff);
    unsigned int nbr10 = 30;
    printf("unsigned : %ld octets est la taille de %d \n", sizeof(nbr10), nbr10);
    unsigned long int nbr11 = 1000;
    printf("unsigned : %ld octets est la taille de %ld \n", sizeof(nbr11), nbr11);
    unsigned long long int nbr12 = 999999;
    printf("unsigned : %ld octets est la taille de %lld \n", sizeof(nbr12), nbr12);


}