#include <stdio.h>

int main() {
    printf("Taille char: %lu octet\n", sizeof (char));
    printf("Taille unsigned char: %lu octet\n", sizeof (unsigned char));
    printf("Taille short: %lu octets\n", sizeof (short));
    printf("Taille unsigned short: %lu octets\n", sizeof (unsigned short));
    printf("Taille int: %lu octets\n", sizeof (int));
    printf("Taille unsigned int: %lu octets\n", sizeof (unsigned int));
    printf("Taille long int: %lu octets\n", sizeof (long int));
    printf("Taille unsigned long int: %lu octets\n", sizeof (unsigned long int));
    printf("Taille long long int: %lu octets\n", sizeof (long long int));
    printf("Taille unsigned long long int: %lu octets\n", sizeof (unsigned long long int));
    printf("Taille float: %lu octets\n", sizeof (float));
    printf("Taille double: %lu octets\n", sizeof (double));
    printf("Taille long double: %lu octets\n", sizeof (long double));
    return 0;
}