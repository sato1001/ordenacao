#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int v[], int n){
  int i, j, aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
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
  bubbleSort(v, 10);
  printf("\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d,  ", v[i]);
  }
  printf("\n");
  return 0;
}
