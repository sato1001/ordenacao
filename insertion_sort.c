#include <stdio.h>
#include <stdlib.h>

void insertionsort(int v[], int n){
  int i, j, x;
  for(i = 1; i < n; i++){
    x = v[i];
    j = i - 1;
    while(j >= 0 && v[j] > x){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = x;
  }
}

int main(){
  int v[10], i;
  for(i=0; i <10;i++){
	  v[i]=rand()%100;
  }
  printf("Vetor:\n");
  for(i=0; i <10;i++){
	  printf("%d,  ", v[i]);
  }
  insertionsort(v, 10);
  printf("\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d,  ", v[i]);
  }
  printf("\n");
  return 0;
}
