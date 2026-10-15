#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct maille {
  int valeur ;
  struct maille * suivant ;
} maillon ;

typedef maillon * pile ;

void pileVide(pile*p);
bool estVidepile(pile p);
void empiler(pile*p, int v);
int depiler(pile*p);

#endif
