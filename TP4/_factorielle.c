#include <stdlib.h>
#include <stdio.h>

int factorielle (int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return (num * factorielle (num-1));
    }
}

int main(){
    int num;
    printf("Entrez le nombre factoriel à calculer: ");
    scanf("%d", &num);
    int fact = factorielle(num);
    printf("%d! = %d\n", num, fact);
    return 0;
}
