#include <stdio.h> 

int main(){
    char nom[][10] = {"Carré","Imbert","Exbrayat","Ebermeyer","Nenach"};
    char prenom[][10] = {"Mathis","Benoit","Guillaume","Paul","Baptiste"};
    char adresse[][10] = {"Monastier","Aubenas","Gemenos","Lyon","CPE"};
    char note1[][10] = {"0","0","0","0","0"};
    char note2[][10] = {"20","20","20","20","20"};

    for (int i = 0; i < 5; i++){
        printf("%s %s habite à %s et a eu %s en Programmation en C et %s en Système d'exploitation\n",prenom[i],nom[i],adresse[i],note1[i],note2[i]);
    }
    return 0;
}