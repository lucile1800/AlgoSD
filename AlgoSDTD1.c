/*() [] {}  ||	\  */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int fib_dyn(int n) {
  if(n == 1){
    return 1;
  }
  if(n == 0){
    return 0;
  }
  int val1 = 0 ;
  int val2 = 1 ;
  int temp;
  for(int i = 2 ; i <= n ; i++){
    temp = val2 + val1 ;
    val1 = val2 ;
    val2 = temp ; 
  }
  return val2 ;
}

int fib_naif(int n ){
  if((n == 0)||(n == 1)){
    return n;
  }
  return fib_naif(n-1) + fib_naif(n-2);
}

int prems_naif(int n){
  int sum = 0;
  int premier[n];
  for(int i = 2 ; i<=n ; i++){
    int racine = sqrt(i);
    int cle = 0  ; 
    for(int j = 0 ;(j < sum) && (premier[j] <=racine) ; j++){
      if( i%premier[j] == 0){
	cle = 1 ;
	break;
      }
    }
    if(cle == 0){
      premier[sum] = i;
      sum++;
      
    }
  }
  return sum ; 
}

int prems_dyn(int n){
  int sum = 0 ; 
  int premiers[n+1];
  for(int i = 0 ; i < n+1;i++){
    premiers[i] = 0 ; 
  }
  if((n == 0)||(n == 1)){
    return 0 ; 
  }
  for(int i = 2 ; i <= n; i++){
    if(premiers[i]  != -1){
      sum ++ ; 
      int k = i ; 
      while(i * k <= n){
	premiers[i*k] = -1;
	k++;
      }
    }
  }
  return sum ; 
  
}




int main(){
  
  clock_t deb = clock();
  fib_naif(40);
  clock_t fin = clock();
  double tps = (double)(fin - deb)/ CLOCKS_PER_SEC ;
  
  clock_t deb2 = clock();
  fib_dyn(40);
  clock_t fin2 = clock();
  double tps2 = (double)(fin2 - deb2)/ CLOCKS_PER_SEC ;
  
  clock_t deb3 = clock();
  prems_naif(10000);
  clock_t fin3 = clock();
  double tps3 = (double)(fin3 - deb3)/ CLOCKS_PER_SEC ;
  
  clock_t deb4 = clock();
  prems_dyn(10000);
  clock_t fin4 = clock();
  double tps4 = (double)(fin4 - deb4)/ CLOCKS_PER_SEC ;

  
  //printf("tps naif :  %.6f ", tps);
  //printf("tps dyn  : %.6f ",tps2);
  printf("tps naif prems :  %.6f ", tps3);
  printf("tps dyn prems  : %.6f ",tps4);
  //printf(" res :  %d", fib_dyn(40));
  printf(" premier : %d", prems_naif(10000));
  printf(" premier : %d", prems_dyn(10000));
  return 0;
}
