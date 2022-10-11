/* Fichier: tableauptr.c
* crée 2 tableaux et pour les 2 tableaux, si l'indice est divisible par 2, multiplie la valeur à cette position par 3
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>

void affichage_tableau_int(int tableau[]){
    printf("[");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%d]", tableau[i]);
        }
        else{
            printf("%d,", tableau[i]);
        }
    }
}

void affichage_tableau_float(float tableau[]){
    printf("[");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%.2f]", tableau[i]);
        }
        else{
            printf("%.2f,", tableau[i]);
        }
    }
}

int main(){

    int tableau_int[] = {3, 5, 2, 7, 14};
    int *pint = tableau_int;

    float tableau_float[] = {1.46, 5.23, 1.67, 10.54, 21.94};
    float *pfloat = tableau_float;

    //AFFICHAGE TABLEAU INT
    printf("Tableau int init: ");
    affichage_tableau_int(tableau_int);
    printf("\n");

    //AFFICHAGE TABLEAU FLOAT
    printf("Tableau float init: ");
    affichage_tableau_float(tableau_float);
    printf("\n");

    //Tableau int
    for(int i=0; i<5; i++){
        if(i%2==0){
            *pint = *pint*3;
        }
        pint++;
    }

    //Tableau float
    for(int i=0; i<5; i++){
        if(i%2==0){
            *pfloat = *pfloat*3;
        }
        pfloat++;
    }
        
    //AFFICHAGE TABLEAU INT
    printf("Tableau int : ");
    affichage_tableau_int(tableau_int);
    printf("\n");

    //AFFICHAGE TABLEAU FLOAT
    printf("Tableau float: ");
    affichage_tableau_float(tableau_float);
    printf("\n");

    return 0;
}