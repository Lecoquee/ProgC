/* Fichier: chaine.c
* calcule le nombre de caractères dans une chaine de caractères
* copie une chaine de caractères dans une autre chaine de caractère
* concatène deux chaines de caractères
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>

int longueur_chaine(char *arr){ //retourne la longueur de la chaine de cractère
    int longueur;
    while(*arr !='\0'){
        longueur++;
        arr++;
    }
    return longueur;
}

char* copie_chaine(char *mot1, char *mot2){ //copie la chaine de caractère à copier dans une autre chaine de caractère
    int longueur_mot2;
    while(*mot2 !='\0'){
        *mot1 = *mot2;
        mot1++;
        mot2++;
        longueur_mot2++;
    }
    return mot1-longueur_mot2*sizeof(char);
}

char* concat(char *chaine_finale, char *mot1, char *mot2){ //concatène les deux chaines de caractère
    int i=0;
    while(1==1){
        if(*mot1 =='\0'){ 
            while(*mot2 !='\0'){ 
                chaine_finale[i] = *mot2;
                i++;
                mot2++;
            }
        }
        mot1++;
        chaine_finale[i] = *mot1;
        i++;
    }
    return chaine_finale;
}

int main(){
    char chaine[] = {'h','e','l','l','o','\0'};

    //Longueur
    int longueur = longueur_chaine(chaine);
    printf("Longueur \"%s\" : %d\n",chaine, longueur);

    //Copy
    char chaine_copie[] = {'r','o','\0'};
    char *copie = copie_chaine(chaine, chaine_copie);
    printf("\"%s\" copié dans \"%s\" : %s", chaine_copie, chaine, copie);

    //Concatenate
/*     char to_concat[] = {'w','o','r','l','d'};
    char final_chaine[20];
    char *concat = concat(final_chaine, chaine, to_concat);
    printf("\"%s\" concat with \"%s\" : %s", chaine, to_concat, concat); */
}