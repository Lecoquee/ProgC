/* Fichier: etudiant2.c
* gère les données étudiant.e.es (5 étudiant.e.es)
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include<stdio.h>

struct etudiant{
    char *nom;
    char *prenom;
    char *addresse;
    int note1;
    int note2;
};

int main() {
    //initialisation de la structure étudiant
    struct etudiant e1 = {"nom1", "prenom1", "adresse1", 12, 17};
    struct etudiant e2 = {"nom2", "prenom2", "adresse2", 11, 10};
    struct etudiant e3 = {"nom3", "prenom3", "adresse3", 18, 19};
    struct etudiant e4 = {"nom4", "prenom4", "adresse4", 19, 13};
    struct etudiant e5 = {"nom5", "prenom5", "adresse5", 12, 16};

    //tableau pour stocker les etudiants
    struct etudiant les_etudiants[] = {e1, e2, e3, e4, e5};

    //affichage
    for(int i=0; i<5; i++){
        printf("Je suis %s %s, j'habite a %s et mes notes sont : %d (ProgC), %d (Syst)\n", les_etudiants[i].nom, les_etudiants[i].prenom, les_etudiants[i].addresse, les_etudiants[i].note1, les_etudiants[i].note2);    
    }

    return 0;
}