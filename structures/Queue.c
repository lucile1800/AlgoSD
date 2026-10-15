/*() [] {} \  */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Queue.h"

void fileVide(file*f){
  pileVide(&(f->p1));
  pileVide(&(f->p2));
}

bool estVidefile(file f){
  return estVidepile(f.p1) && estVidepile(f.p2);
}

void enfiler(file*f, int x){
  empiler(&(f->p1), x);
}

int defiler(file *f){
  if (estVidepile(f->p2)){
    while(!estVidepile (f->p1)){
      empiler(&(f->p2),depiler(&(f->p1)));
    }
  }
  return depiler(&(f->p2));
}

void afficherfile(file f) {
    printf("début ");

    for (int i = f.p2.nb_elts - 1; i >= 0; i--) {
        printf("%d ", f.p2.tab[i]);
    }
    
    for (int i = 0; i < f.p1.nb_elts; i++) {
        printf("%d ", f.p1.tab[i]);
    }
    
    printf("fin\n");
}
