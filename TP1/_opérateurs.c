#include <stdio.h>

int main() {
    int a = 16, b = 3;
    printf("Addition : a+b = %d\n", a+b);
    printf("Soustraction : a-b = %d\n", a-b);
    printf("Multiplication : a*b = %d\n", a*b);
    printf("Division : a/b = %d\n", a/b);
    printf("Modulus : a modulus b = %d\n", a%b);
    printf("Négation : !a = %d\n", !a);
    printf("Et : a&&b = %d\n", a&&b);
    printf("Ou : a||b = %d\n", a||b);
    return 0;
}