/* Fichier: etudiant_bd.c
* demande à l'utilisateur de saisir et sauvegarde les noms, prénoms, adresses, et les notes dans un fichier.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#include <stdlib.h>
#include <stdio.h>
#define TAILLE_MAX 2000

int lire_fichier(char*nom_de_fichier){
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(nom_de_fichier, "r"); // On ouvre le fichier
    if (fichier != NULL){
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL){ // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
}

int ecrire_dans_fichier(char *nom_de_fichier){
    FILE* fichier = NULL;
    char nom[5];
    char prenom[5];
    char adresse[5];
    char ville[5];
    int note1;
    int note2;
    fichier = fopen(nom_de_fichier, "w"); // On ouvre le fichier
    if (fichier != NULL){
        for(int i = 1; i < 3; i++){ //On test avec seulement 2 étudiants sinon c'est trop long...
            printf("Eleve %d:\n", i);
            // On demande le nom
            printf("Quel est votre nom?");
            scanf("%s", nom);
            char a = getchar();
            // On demande le prenom
            printf("Quel est votre prenom?");
            scanf("%s", prenom);
            char b = getchar();
            // On demande l'adresse
            printf("Quel est votre adresse?");
            scanf("%s", adresse);
            char c = getchar();
            // On demande la ville
            printf("Quel est votre ville?");
            scanf("%s", ville);
            char d = getchar();
            // On demande la 1ere note 
            printf("Quel est votre 1ere note?");
            scanf("%d", &note1);
            char e = getchar();
            // On demande la 1ere note 
            printf("Quel est votre 2eme note?");
            scanf("%d", &note2);
            char f = getchar();
            // On l'écrit dans le fichier
            fprintf(fichier, "%s, %s, %s, %s, %d, %d\n", nom, prenom, adresse, ville, note1, note2);
        }  
        fclose(fichier);  
    }
}

int main(){
    char*nom_de_fichier = "etudiant.txt";
    lire_fichier(nom_de_fichier);
    printf("\n");
    ecrire_dans_fichier(nom_de_fichier);
    lire_fichier(nom_de_fichier);
    printf("\n");
    return 0;
}
