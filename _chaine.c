#include <stdio.h>

int calcul_nombre(char* chaine){
    int nb_caractere = 0;
    while(chaine[nb_caractere]){
        nb_caractere++;
    }  
    return nb_caractere;
}

int copie(char* chaine_init){
    char chaine_copiee;
    chaine_copiee = chaine_init;
    return chaine_copiee;
}

int concatenation(char* chaine1, char*chaine2){
    char chaine_concatenee[50];
    int i, j;
    for (i = 0; chaine1[i]!='\0'; i++);{
        for (j = 0; chaine2[j]!='\0'; j++, i++){
            chaine_concatenee[i] = chaine2[j];
        }
    }
    chaine_concatenee[i] = '\0';
    return chaine_concatenee[50];
}

int main() {
    char chaine1[50] = "\0";
    printf("Entrez un mot : ");
    scanf("%s", chaine1);
    int nombre = 0;
    nombre = calcul_nombre(chaine1);
    printf("Le nombre de caractère dans le mot est de %d\n", nombre);

    char chaine_copiee;
    chaine_copiee = copie(chaine1);
    printf("Le mot %c a bien été copié dans l'autre chaîne\n", chaine_copiee);

    char chaine2[50] = "\0";
    printf("Entrez un autre mot : ");
    scanf("%s", chaine2);
    char chaine_concatenee;
    chaine_concatenee = concatenation(chaine1,chaine2);
    printf("Les deux mots concaténées donnent %s\n", chaine_concatenee);

    return 0;
}