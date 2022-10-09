#include <stdio.h>

int main() {
    int num1;
    printf("Entrez le 1er numéro: ");
    scanf("%d", &num1);
    char a = getchar();
    int num2;
    printf("Entrez le 2ème numéro: ");
    scanf("%d", &num2);
    char b = getchar();
    char op;
    printf("Entrez un opérateur: ");
    scanf("%c", &op);
    char c = getchar();
    switch (op){
        case 43 : printf("%d+%d=%d\n", num1, num2, num1+num2);
        break;
        case 45 : printf("%d-%d=%d\n", num1, num2, num1-num2);
        break;
        case 42 : printf("%d*%d=%d\n", num1, num2, num1*num2);
        break;
        case 47 : printf("%d/%d=%d\n", num1, num2, num1/num2);
        break;
        case 37 : printf("%d modulo %d = %d\n", num1, num2, num1%num2);
        break;
        case 38 : printf("%d&%d=%d\n", num1, num2, num1&&num2);
        break;
        case 124 : printf("%d||%d=%d\n", num1, num2, num1||num2);
        break;
        return 0;
    }
}