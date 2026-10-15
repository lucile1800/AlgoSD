#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdbool.h>

//x est dans le tableau ?
bool present ( int * tab , int n , int x );

//combien de fois x est dans le tableau
int occurrence ( int * tab , int n , int x );

//le plus grand entier présent dans le tableau
int maximum ( int * tab , int n );

//le plus petit entier présent dans le tableau
int minimum ( int * tab , int n );

//echange deux entiers de place dans le tableau
void echange ( int * tab , int i , int j );

//mets l'element i au debut du tableau et decale à droite le reste
void decale ( int t [] , int n , int i );

#endif
