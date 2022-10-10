#include <stdio.h> 

int puissance(int a, int b);

int main() {
    int n1,n2,puiss;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    puiss = puissance(n1, n2);        // function call
    printf("puissance = %d",puiss);

    return 0;
    

}

int puissance(int a, int b){
    int i = 1;
    int a1 = a;
    if (b == 0){
        a1 = 1;
        i = b;
    }
    while (i < b) {
        a1 = a1*a;
        i = i +1;
    }
    return a1;
}