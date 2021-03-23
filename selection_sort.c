#include <stdio.h>
#include <stdlib.h>
void selectionsort(int v[], int n){
  int i, j, aux, min;
  for(i = 0; i < n-1; i++){
    min = i;
    for(j = i+1; j < n; j++){
      if(v[j] < v[min]){
        min = j;
      }
    }
    aux = v[i];
    v[i] = v[min];
    v[min] = aux;
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
  selectionsort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++) {
    printf("%d,  ", v[i]);
  }
  printf("\n");
  return 0;
}
