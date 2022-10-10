/* Fichier: sizeof_types.c
* affiche la taille en octets des différents types de bases puis lorsqu'elles sont signées et non-signées à l'écran.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdio.h> 

int main() { //on affiche les tailles des différents types de base 
    printf("%ld octets est la taille de char \n", sizeof(char));//pour le type de base char
    printf("%ld octets est la taille de short \n", sizeof(short));//pour le type de base short
    printf("%ld octets est la taille de int \n", sizeof(int));//pour le type de base int
    printf("%ld octets est la taille de long int \n", sizeof(long int));//pour le type de base long int
    printf("%ld octets est la taille de long long int \n", sizeof(long long int));//pour le type de base long long int 
    printf("%ld octets est la taille de float \n", sizeof(float));//pour le type de base float
    printf("%ld octets est la taille de double \n", sizeof(double));//pour le type de base double
    printf("%ld octets est la taille de long double \n", sizeof(long double));//pour le type de base long double
    //on fait maintenant avec la version signée de chaque type de base
    printf("%ld octets est la taille de signed char \n", sizeof(signed char));
    printf("%ld octets est la taille de signed short \n", sizeof(signed short));
    printf("%ld octets est la taille de signed int \n", sizeof(signed int));
    printf("%ld octets est la taille de signed long int \n", sizeof(signed long int));
    printf("%ld octets est la taille de sogned long long int \n", sizeof(signed long long int));
    //pour float, double et long double il n'y a pas de version signée et non signée car ils le sont déja de base

    //On fait ensuite avec la version non-signée de chaque type de base
    printf("%ld octets est la taille de unsigned char \n", sizeof(unsigned char));
    printf("%ld octets est la taille de unsigned short \n", sizeof(unsigned short));
    printf("%ld octets est la taille de unsigned int \n", sizeof(unsigned int));
    printf("%ld octets est la taille de unsigned long int \n", sizeof(unsigned long int));
    printf("%ld octets est la taille de unsigned long long int \n", sizeof(unsigned long long int));

}