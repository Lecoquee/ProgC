// #include <stdio.h>

// int remplissage(tableau[10][10]){
//     int i;
//     for(i = 0; i < 10; i++){
//         for(j = 0; j < 10; j++){
//             tableau[i][j] = rand();
//         }
//     }
//     return tableau;
// }

// int tri(int tableau[10][10]){
//     int i,j,c;
//     for(i = 0; i < 100-1; i++){
//         for(j = i+1; j < 100; j++){
//             if ( tableau[i] > tableau[j] ){
//                 c = tableau[i];
//                 tableau[i] = tableau[j];
//                 tableau[j] = c;
//             }
//         }
//     }
//     return tableau;
// }

// int main(){ 
//     int tableau_vide[10][10];
//     int tableau_rempli;
//     tableau_rempli = remplissage(tableau_vide);
//     int tableau_trie;
//     tableau_trie = tri(tableau_rempli);
//     int i;
//     for (i = 0; i = 100-1; i++){
//         printf("%d ", tableau_trie[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int remp_tableau(int tableau[])
{
    int i;
    for(i = 0; i < 100; i++){
        tableau[i] = rand() % (100 + 1);
    }
    return tableau[100];
 
}

int tri_et_aff_tableau (int tableau[100]){
    int i,j,c;
    for(i = 0; i < 100-1; i++){
        for(j = i+1; j < 100; j++){
            if ( tableau[i] > tableau[j] ){
                c = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = c;
            }
        }
    }
    int x;
    for(x = 0 ; x < 100 ; x++){
        printf("%d ", tableau[x]);
    }
}
 
int main(){
        srand(time(NULL));
        int tableau[100];
        remp_tableau(tableau);
        tri_et_aff_tableau(tableau);
}