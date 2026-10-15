#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include "Stackdyn.h"

typedef struct{
  pile p1;
  pile p2;
}file;

void fileVide (file*f);
bool estVidefile(file f);
void enfiler(file*f, int x);
int defiler(file*f);
void afficher(file f);

#endif
