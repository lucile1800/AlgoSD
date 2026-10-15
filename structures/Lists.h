#ifndef LISTS_H
#define LISTS_H
#include <stdbool.h>

typedef struct {
  int * tab ;
  int taille ;
  int nb_elts ;
} liste ;

//crée une liste vide
liste listeVide ();

//teste si la liste est vide
bool estVide(liste l);

//renvoie le premier élément de la liste ; attention la liste ne doit pas être vide
int premier(liste l);

//l non vide ; renvoie la liste sans le premier élt
liste fin(liste l);

//ajoute l'elt x en tête de liste
liste ajout(int x, liste l);

//fait la somme des elts de la liste
int somme (liste l);

//affiche la liste
void afficher(liste l);

//donne le nb d'elts de la liste
int longueur(liste l);
#endif
