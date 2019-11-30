#include <iostream>
#include "Vetor.h"

class vetor {
    int tamanho; // tamanho do vetor
    int *vetor; // ponteiro para inteiros

    public: 
        vetor(int); // construtor
        ~vetor(); // destrutor
}

// Construtor
vetor::vetor(int tam) {
    if (tam <= 0){
        std::cout << "";
        return;
    } 
    tamanho = tam; 
    vetor = new int[tam]; // aloca um vetor de inteiros
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "------------constroi vetor-----------" << std::endl;
}

// Destrutor
vetor::~vetor(){
    delete[] vetor; // desaloca um vetor
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "------------destroi vetor------------" << std::endl;
}

// função para imprirmir os valores do vetor
void ExibeArray(int vetor[], int tamanho){ 
    for (in t i=0; i<tamanho ;i++)
        std::cout << vetor[i] << " ";
}

// função BubbleSort Iterativo
void BubbleSort(int vetor[], int tamanho){ 
    for (int i = 0; i < tamanho-1; i++) // percorre o vetor de 0...tamanho-1
        for (int j = tamanho-1; j > i; j--) // percorre o vetor de tamanho-1...0
            if (vetor[j] < vetor [j-1])     // compara valor na posição j com o anterior
                std::swap(vetor[j], vetor [j-1]); // e troca !! 
} 

// função BubbleSort Recursivo
void BubbleSortR(int vetor[], int tamanho){ 
    if (tamanho == 1) return; // caso base, se o tamanho for 1, faz nada
    for (int i = 0; i < tamanho-1; i++) // percorre o vetor de 0...tamanho-1
            if (vetor[i] > vetor [i+1]) // compara valor na posição i com o posterior
                std::swap(vetor[i], vetor [i+1]); // e troca !!

    BubbleSortR(vetor,tamanho-1);
}   

/*BUBBLES: OK*/

// função InsertionSort Iterativo
void InsertionSort(int vetor[], int tamanho){ 
    int i = 0, j = 0, x = 0; 
    for (j = 1; j < tamanho; j++){ // percorre o vetor de 0...tamanho-1
        x = vetor[j];               // pega um valor
        for (i = j-1; i >= 0 && vetor[i] > x; i--){ // percorre o vetor 
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
        SelectionSortR(vetor, tamanho, i + 1);
    }
} // SelectionSortR(v,n,0);

void Intercala(int vetor[], int p, int q, int r){ // falta comentar
    int *aux = new int[r-p];
    int j = q;
    int k = 0;
    int i = p;

    while (i < q && j < r) {
        if (vetor[i] <= vetor[j])
            aux[k++] = vetor[i++];
        else
            aux[k++] = vetor[j++];
    }
    while (i < q) aux[k++] = vetor[i++];
    while (j < r) aux[k++] = vetor[j++];

    for (i = p; i < r; i++)
        vetor[i] = aux[i-p];

    delete[] aux;
}

void MergeSort(int n, int v[]) {
   int b = 1;
   while (b < n) {
      int p = 0;
      while (p + b < n) {
         int r = p + 2*b;
         if (r > n) r = n;
         Intercala(v, p, p+b, r);
         p = p + 2*b;
      }
      b = 2*b;
   }
}

void MergeSortR(int vetor[], int esq, int dir) { // falta comentar
    if (esq < dir-1) {
       int meio = (esq + dir) / 2;
       MergeSortR(vetor, esq, meio);
       //        mergesoMergeSortR(vetor, esq, meio);
       MergeSortR(vetor, meio, dir);
       Intercala(vetor, esq, meio, dir);
    }
} // MergeSortR(v,0,tamanho)

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

int QuickSort(int v[], int p, int r){ // incompleto
    int pilhap[0] = p;
    int pilhar[0] = r;
    int t = 0; // topo
    while (t >= 0){
        p = pilhap[t];
        r = pilhar[t];
        t--;
        while(p < r){
            int j = Separa(p, r, v);
            t++;
            pilhap[t] = p;
            pilhar[t] = j-1;
            p = j+1;
        }
    }
}

int QuickSortR(int vetor[], int esq, int dir){ // falta comentar
    int posicao;
    if (esq<dir){
        posicao = Separa(vetor,esq,dir);
        QuickSortR(vetor,esq,posicao-1);
        QuickSortR(vetor,posicao+1, dir);
    }
}



