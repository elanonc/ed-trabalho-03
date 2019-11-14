#include <iostream>
#include "Vetor.h"
using namespace std;

void ExibeArray(int vetor[]){
    for (int i=0; i<10 ;i++)
        cout << vetor << " ";
}

void BubbleSort(int vetor[], int tamanho){
    for (int i = 0; i < tamanho-1; i++)
        for (int j = tamanho-1; j > i; j--)
            if (vetor[j] < vetor [j-1])
                std:swap(vetor[j], vetor [j-1]);
}

void BubbleSortR(){ // incompleto
    if (tamanho = 0)
        return;

    for (int i = 0; i < tamanho-1; i++)
            if (vetor[i] < vetor [i-1])
                std:swap(vetor[i], vetor [i-1]);

    BubbleSortR();
}

void InsertionSort(int vetor[], int tamanho){ // no pior caso será n²
    int x = 0;
    for (int j = 1; j < tamanho; j++){
        x = vetor[j];
        for (int i = j-1; i >= 0 && vetor[i] > x; i--){
            vetor[i+1] = vetor[i];
        vetor[i+1] = x;
        }
    }
}

void InsertionSortR(int vetor[], int tamanho){
    if (tamanho <= 1) 
        return;

    InsertionSortR(vetor, tamanho);

    int fim = vetor[tamanho-1]; 
    int posicao = tamanho-2;

    while (posicao >= 0 && vetor[posicao] > fim) { 
        vetor[posicao+1] = vetor[posicao]; 
        posicao--; 
    } 
    vetor[posicao+1] = fim; 
}

void SelectionSort(int vetor[], int tamanh){
    for (int i = 0; i < tamanho-1; i++) {
        int min = i;
        for (int j = i+1; j < tamanho; j ++)
            if (vetor[j] < vetor[min])
                min = j;
            std::swap(vetor[i], vetor[min]);
    }
}

void SelectionSortR(int vetor[], int tamanho){
    if (tamanho == 0) {
        return;
    }
    else {
        SelectionSortR(vetor, tamanho-1 );
        if (vetor[tamanho-1] > vetor[x]) {
            std::swap(vetor[tamanho-1], vetor[x]);
        }
    }
}

void Intercala(int vetor[], int tamanho){
    int meio = tamanho / 2;
    int i = 0, j = meio, pos = 0;
    int aux[tamanho];

    while(i<meio && j<tamanho){
    if(vetor[i] <= vetor[j])
        aux[pos] = vetor[i++];
    else
        aux[pos] = vetor[j++];
    pos++;
    }
 
    if(i == meio)
    while(j < tamanho)
        aux[pos++] = vetor[j++];
    else
    while(i < meio)
        aux[pos++] = vetor[i++];
 
    for(i = 0; i < tamanho; i++)
        vetor[i] = aux[i];
}

void MergeSort (int vetor[], int tamanho) { 
    int p = 0, r = 0;
    int b = 1;

    while(b<tamanho){
        r = p + 2*b;
        if(r>tamanho) r = tamanho;
        Intercala();
        p = p + 2*b;
    }
    b = 2*b;
}
 
int MergeSortR(int vetor[], int tamanho){
    int meio = tamanho/2;
    if( tamanho > 1 ){
        MergeSort(vetor, meio);
        MergeSort(vetor + meio, tamanho - meio);
        Intercala(vetor, tamanho);
    }
}

int InsereEmHeap(int m, int vetor[]){
    int f = m+1;
    while(f > 1 && vetor[f/2] < vetor[f]){
        int t = vetor[f/2];
        vetor[f/2] = vetor[f];
        vetor[f] = t; 
        f = f/2;
    }
}

void SacodeHeap(int m, int vetor[]){
    int t, f = 2;
    while (){
        if (f < m && vetor[f] < vetor[f+1])
            f+1;
        if (vetor[f/2] >= vetor[f])
            break;
        t = vetor[f/2];
        vetor[f/2] = vetor[f];
        vetor[f] = t;
        f *= 2;
    }
}

int HeapSort(int n, in vetor[]){
    int m;
    for (m = 1; m < n; m++)
        InsereEmHeap (m, vetor);
    for (m = n; m > 1; m--){
        int t = vetor[1];
        vetor[1] = vetor[m];
        vetor[m] = t;
        SacodeHeap (m-1, vetor);
    }
}

int HeapSortR (){

}

int Separa(int vetor[], int esq, int dir){
    int aux, cont = esq;
    for (int i=esq+1; i<=dir; i++){
        if(vetor[i] < v[esq]){
            cont ++
            aux = vetor[i];
            vetor[i] = vetor[cont];
            vetor[cont] = aux;
        }
    }
    aux = vetor[esq];
    vetor[esq] = vetor[cont];
    vetor[cont] = aux;
    return 
}

int QuickSort(){

}

int QuickSortR(int vetor[], int esq, int dir){
    int posicao;
    if (esq<dir){
        posicao = Separar(vetor,esq,dir);
        QuickSortR(vetor,esq,posicao-1);
        QuickSortR(vetor,posicao+1, dir);
    }
}