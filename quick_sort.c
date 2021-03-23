#include <stdio.h>
#include <stdlib.h>
void quicksort(int *vetor, int inicio, int fim){
   int i, j, meio, aux;
   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];
   while(i <= j){
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   };
   if(inicio < j){
	   quicksort(vetor, inicio, j);
   }
      
   if(i < fim){
	   quicksort(vetor, i, fim);
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
  quicksort(v, 0, 9); 
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d,  ", v[i]);
  }
  printf("\n");
  return 0;
}
