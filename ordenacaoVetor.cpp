#include <iostream>
#include "Vetor.h"

void ExibeArray(int vetor[], int tamanho){ // imprime elemento do array da posição i
    for (in t i=0; i<tamanho ;i++)
        std::cout << vetor[i] << " ";
}

void BubbleSort(int vetor[], int tamanho){ // falta comentar 
    for (int i = 0; i < tamanho-1; i++)
        for (int j = tamanho-1; j > i; j--)
            if (vetor[j] < vetor [j-1])
                std::swap(vetor[j], vetor [j-1]);
}

void BubbleSortR(int vetor[], int tamanho){ // falta comentar
    if (tamanho == 1) return;
    for (int i = 0; i < tamanho-1; i++)
            if (vetor[i] > vetor [i+1])
                std::swap(vetor[i], vetor [i+1]);

    BubbleSortR(vetor,tamanho-1);
}
void InsertionSort(int vetor[], int tamanho){ // falta comentar
    int i = 0, j = 0, x = 0;
    for (j = 1; j < tamanho; j++){
        x = vetor[j];
        for (i = j-1; i >= 0 && vetor[i] > x; i--){
            vetor[i+1] = vetor[i];
        }
        vetor[i+1] = x;
    }
}

void InsertionSortR(int vetor[], int tamanho){ // falta comentar
    if (tamanho <= 1) return;

    InsertionSortR(vetor, tamanho-1);
    int fim = vetor[tamanho-1];
    int i = tamanho-2;

    for (i; i >= 0 && vetor[i] > fim; i--){
            vetor[i+1] = vetor[i];
    } vetor[i+1] = fim;
}

void SelectionSort(int vetor[], int tamanho){ // falta comentar
    for (int i = 0; i < tamanho-1; i++) {
        int min = i;
        for (int j = i+1; j < tamanho; j ++)
            if (vetor[j] < vetor[min])
                min = j;
            std::swap(vetor[i], vetor[min]);
    }
}


void SelectionSortR(int vetor[], int tamanho, int i){ // falta comentar
    int min = i;
    for (int j = i + 1; j < tamanho; j++) {
        if (vetor[j] < vetor[min])
            min = j; // posição do menor elemento
    } std::swap(vetor[i], vetor[min]);
    if (i + 1 < tamanho) {
        SelectionSortRV2(vetor, tamanho, i + 1);
    }
}


void Intercala(int vetor[], int p, int q, int r){ // falta comentar
    int *aux = new int[r-p+1];
    int j = q+1;
    int k = 0;

    while (i <= q && j <= r) {
        if (vetor[i] <= vetor[j])
            aux[k++] = vetor[i++];
        else
            aux[k++] = vetor[j++];
    }
    while (i <= q) aux[k++] = vetor[i++];
    while (j <= r) aux[k++] = vetor[j++];

    for (i = p; i <= r; i++)
        vetor[i] = aux[i-p];

    delete[] aux; 
    }

void MergeSort(int vetor[], int esq, int dir) { // falta comentar
    int i, m;
    for (m = 1; m <= dir-esq; m = m+m)
       for (i = esq; i <= dir-m; i += m+m)
          IntercalaV2(vetor, i, i+m-1, std::min(i+m+m-1, dir));
}

void MergeSortR(int vetor[], int esq, int dir) { // falta comentar
    if (esq < dir) {
       int meio = (esq + dir) / 2;
       mergesoMergeSortRV(vetor, esq, meio);
       MergeSortRV2(vetor, meio+1, dir);
       IntercalaV2(vetor, esq, meio, dir);
    }
}

void Sacode(int vetor[], int tamanho, int i) { // falta comentar
    int maior = i; 
    int esq = 2 * i + 1;
    int dir = 2 * i + 2; 

    if (esq < tamanho && vetor[esq] > vetor[maior]) 
        maior = esq; 
  
    if (dir < tamanho && vetor[dir] > vetor[maior]) 
        maior = dir; 
  
    if (maior != i) { 
        std::swap(vetor[i], vetor[maior]); 
   
        Sacode(vetor, tamanho, maior); 
    } 
} 

void HeapSort(int vetor[], int tamanho) { // falta comentar
    for (int i = tamanho / 2 - 1; i >= 0; i--) 
        Sacode(vetor, tamanho, i); 
   
    for (int i = tamanho-1; i>=0; i--) { 
        std::swap(vetor[0], vetor[i]); 
  
        Sacode(vetor, i, 0); 
    }
} 

int HeapSortR (){ // incompleto

}

int Separa(int vetor[], int esq, int dir){ // falta comentar
    int aux, cont = esq;
    for (int i=esq+1; i<=dir; i++){
        if(vetor[i] < vetor[esq]){
            cont ++;
            std::swap(vetor[i], vetor[cont]);
        }
    }
    std::swap(vetor[esq], vetor[cont]);
    return cont;
}

int QuickSort(){ // incompleto

}

int QuickSortR(int vetor[], int esq, int dir){ // falta comentar
    int posicao;
    if (esq<dir){
        posicao = Separar(vetor,esq,dir);
        QuickSortR(vetor,esq,posicao-1);
        QuickSortR(vetor,posicao+1, dir);
    }
}

// QuickSortR(faixas, 0, tamanho);

/********

- Heap Sort Recursivo
- Quick Sort Iterativo

- Segue o líder
*********/


