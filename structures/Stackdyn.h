/*() [] {} \  */

#ifndef STACKDYN_H
#define STACKDYN_H

#include <stdbool.h>

typedef struct {
  int* tab;
  int taille;
  int nb_elts; 
} pile;

void pileVide(pile*p);

bool estVidepile(pile p);

void empiler(pile*p, int x);

int depiler(pile*p);

void afficher(pile p);

#endif


