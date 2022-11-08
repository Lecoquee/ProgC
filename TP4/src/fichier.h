/* Fichier: fichier.h
* contient le nom des fonctions de fichier.c.
* auteur: Julie Ludwig et Guillaume Bufferne
*/

#ifndef _FICHIER_H
#define _FICHIER_H
#include <stdlib.h>
#include <stdio.h>
#define TAILLE_MAX 1000

int lire_fichier(char*nom_de_fichier);
int ecrire_dans_fichier(char *nom_de_fichier, char *message);

#endif
