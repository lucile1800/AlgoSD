/*() [] {} \  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stackdyn.h"

void pileVide(pile*p){
  p->taille = 32;
  p->tab=(int*)malloc((p->taille)*sizeof(int));
  p->nb_elts = 0 ;
}

bool estVidepile(pile p){
  return p.nb_elts == 0;
}

void empiler(pile*p, int x){
  int * aux;
  int i;
  if(p->nb_elts == p->taille){
    aux = malloc((p->taille)*2*sizeof(int));
    for(i = 0 ; i <(p->taille);i = i+1){
      aux[i] = p->tab[i];
    }
    free(p->tab);
    p->tab = aux;
    p->taille = p->taille * 2;
  }

  p->tab[p->nb_elts]=x;
  p->nb_elts = p->nb_elts + 1;
}

int depiler(pile*p){
  p->nb_elts = p->nb_elts - 1 ;
  return p->tab[p->nb_elts];
}

void afficher(pile p){
  printf("haut ");
  for(int i = p.nb_elts - 1 ; i >= 0 ; i--){
    printf("%d ",p.tab[i]);
  }
  printf(" bas \n");
}


