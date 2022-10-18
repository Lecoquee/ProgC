#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "repertoire.h"

int main(int argc, char*argv[]){
    lire_dossier_recurssif(argv[1]);
    return 0;
}

void lire_dossier(char *rep) {

  DIR * fichier = opendir(rep);
  struct dirent * lecture;
   
  while(1){
    lecture = readdir(fichier);
    if (lecture == NULL){
	break;
    }
    printf ("%s  \n", lecture->d_name);
  }
}

void lire_dossier_recurssif(char *rep){
     putchar('\n');
  DIR * fichier = opendir(rep);
  if(fichier == NULL)
	return;
  struct dirent * lecture;
  chdir(rep);
   
  while(1){
    lecture = readdir(fichier);
    if (lecture == NULL){
		break;
    }
    char* file_name = lecture->d_name;
    printf ("%s  ", file_name);
    if (lecture->d_type == DT_DIR && strcmp(".",file_name) && strcmp("..",file_name)){
    	lire_dossier_recurssif(file_name);
  		chdir("..");
    }
  }
  putchar('\n');
  putchar('\n');
}