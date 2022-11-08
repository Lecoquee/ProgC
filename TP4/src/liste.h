/* Fichier: liste.h
* contient le nom des fonctions de liste.c et la structure d'une liste de couleur.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#ifndef _LISTE_H
#define _LISTE_H
#include <stdlib.h>
#include <stdio.h>

struct liste_couleurs {                
    int r;
    int g;
    int b;
    int a;
};              

void insertion (struct couleur *, struct liste_couleurs *);                
void parcours (struct liste_couleurs *);

#endif