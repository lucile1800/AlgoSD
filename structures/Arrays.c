/*() [] {} \  */

#include <stdlib.h>
#include <stdio.h>
#include "Arrays.h"
#include <stdbool.h>

bool present ( int * tab , int n , int x ){
  for ( int i = 0; i < n ; i = i + 1) {
    if ( tab [i] == x ) {
      return true ;
    }
  }
  return false ;
}

int occurrence ( int * tab , int n , int x ) {
  int nb = 0;
  for ( int i = 0; i < n ; i = i + 1) {
    if ( tab [i] == x ) {
      nb = nb + 1;
    }
 }
 return nb ;
}

int maximum ( int * tab , int n ) {
  int max = tab [0];
  for ( int i = 1; i < n ; i = i + 1) {
    if ( tab [i] > max ) {
      max = tab [i];
    }
  }
  return max ;
}

int minimum ( int * tab , int n ) {
  int min = tab [0];
  for ( int i = 1; i < n ; i = i + 1) {
    if ( tab [i] <  min ) {
      min = tab [i];
    }
  }
  return min ;
}

void echange ( int * tab , int i , int j ) {
  int aux = tab [i];
  tab [i] = tab [j];
  tab [j] = aux ;
}

void decale ( int t [] , int n , int i ) {
  int x = t [ i ];
  int j = i ;
  while (( j > 0) && ( x < t [j - 1]) ) {
    t[j] = t [j -1];
    j = j - 1;
  }
  t [ j ] = x ;
}

