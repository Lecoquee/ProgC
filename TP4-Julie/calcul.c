#include <stdio.h>
#include <stdlib.h>
#include "operateur.h"

int main(int argc, char*argv[]){
    int val = operation( atoi(argv[2]), atoi(argv[3]), *argv[1]);
    printf("%d\n", val);
}