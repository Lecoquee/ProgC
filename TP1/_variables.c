#include <stdio.h>

int main() {
    float vchar;
    printf("Entrez une variable char: ");
    scanf("%f", &vchar);
    printf("Taille char: %lu octet\n", sizeof (vchar));
    float vuchar;
    printf("Entrez une variable unsigned char: ");
    scanf("%f", &vuchar);
    printf("Taille unsigned char: %lu octet\n", sizeof (vuchar));
    float vshort;
    printf("Entrez une variable short: ");
    scanf("%f", &vshort);
    printf("Taille short: %lu octets\n", sizeof (vshort));
    float vushort;
    printf("Entrez une variable unsigned short: ");
    scanf("%f", &vushort);
    printf("Taille unsigned short: %lu octets\n", sizeof (vushort));
    float vint;
    printf("Entrez une variable int: ");
    scanf("%f", &vint);
    printf("Taille int: %lu octets\n", sizeof (vint));
    float vuint;
    printf("Entrez une variable unsigned int: ");
    scanf("%f", &vuint);
    printf("Taille unsigned int: %lu octets\n", sizeof (vuint));
    float vlongint;
    printf("Entrez une variable long int: ");
    scanf("%f", &vlongint);
    printf("Taille long int: %lu octets\n", sizeof (vlongint));
    float vulongint;
    printf("Entrez une variable unsigned long int: ");
    scanf("%f", &vulongint);
    printf("Taille unsigned long int: %lu octets\n", sizeof (vulongint));
    float vlonglongint;
    printf("Entrez une variable long long int: ");
    scanf("%f", &vlonglongint);
    printf("Taille long long int: %lu octets\n", sizeof (vlonglongint));
    float vulonglongint;
    printf("Entrez une variable unsigned long long int: ");
    scanf("%f", &vulonglongint);
    printf("Taille unsigned long long int: %lu octets\n", sizeof (vulonglongint));
    float vfloat;
    printf("Entrez une variable float: ");
    scanf("%f", &vfloat);
    printf("Taille float: %lu octets\n", sizeof (vfloat));
    float vdouble;
    printf("Entrez une variable double: ");
    scanf("%f", &vdouble);
    printf("Taille double: %lu octets\n", sizeof (vdouble));
    float vlongdouble;
    printf("Entrez une variable long double: ");
    scanf("%f", &vlongdouble);
    printf("Taille long double: %lu octets\n", sizeof (vlongdouble));
    return 0;
}