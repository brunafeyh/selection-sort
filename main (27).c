/*3 aed**/
#include <stdio.h>
void SelectionSort(int vet[], int n) {
  if (n > 1){
    
      int min = 0;
      for (int i = 1; i < n; i++) {
        if (vet[i] < vet[min]) {
          min = i;
        }
      }
    
      int temp = vet[0]; vet[0] = vet[min];  vet[min] = temp;
    
      // Ordena o subarray restante
      SelectionSort(vet + 1, n - 1);
  }
}

void pvetor(int vet [], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    
}

int main(){
    int vetor[10] = {0, 12, 2, 3, 7, 6, 7, 8, 10, 13};
    
    SelectionSort(vetor, 10);
    
    pvetor(vetor, 10);

    return 0;
}





