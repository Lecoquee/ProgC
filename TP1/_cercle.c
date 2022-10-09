#include <stdio.h>

int main() {
    float rayon;
    printf("Entrez le rayon du cercle: ");
    scanf("%f", &rayon);
    printf("Aire: %f\n", 3.14*rayon*rayon);
    printf("Périmètre: %f\n", 2*3.14*rayon);
    return 0;
}