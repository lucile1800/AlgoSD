/*() [] {} \  */

#include <stdlib.h>
#include <stdio.h>
#include "Lists.h"
#include <stdbool.h>

liste listeVide () {
  liste l ;
  l.taille = 32; 
  l.tab = ( int *) malloc (( l.taille ) * sizeof ( int ) ) ;
  l.nb_elts = 0;
  return l ;
}

bool estVide(liste l) {
  return l.nb_elts == 0 ;
}

int premier(liste l) {
  return l.tab[l.nb_elts - 1];
}

liste fin(liste l){
  liste f;
  f.taille = l.taille;
  f.tab = l.tab;
  f.nb_elts = l.nb_elts - 1;
  return f;
}

liste ajout(int x, liste l){
  liste res;
  int i ;
  if(l.nb_elts == l.taille){
    res.tab = (int *)malloc((l.taille) * 2 * sizeof(int));
    for(i= 0 ; i < (l.taille); i++){
      res.tab[i] = l.tab[i];
    }
    res.taille = l.taille * 2 ;
  }
  else {
    res.tab = l.tab;
    res.taille = l.taille ;
  }
  res.nb_elts = l.nb_elts + 1;
  res.tab[res.nb_elts-1]= x;
  return res ;
}

int somme (liste l) {
  if ( estVide(l) ) {
    return 0;
  }
  return premier(l) + somme(fin(l)) ;
}

void afficher(liste l){
  if(!estVide(l)){
    printf("%d ", premier(l));
    afficher(fin(l));
  }
  else{
    printf("\n");
  }
}

int longueur(liste l){
  return l.nb_elts;
}

