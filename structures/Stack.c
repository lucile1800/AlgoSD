/*() [] {} \  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack.h"

void pileVide ( pile * p ) {
  * p = NULL ;
}

bool estVidepile (pile p) {
  return (p==NULL);
}

void empiler ( pile *p , int v ) {
  maillon * e ;
  e = ( maillon *) malloc ( sizeof ( maillon ) ) ;
  e -> valeur = v ;
  e -> suivant = *p; 
  *p = e ;
}

int depiler(pile *p){
  maillon *aux = *p;
  int x = aux -> valeur ;
  *p = aux -> suivant ;
  free(aux);
  return x; 
}


