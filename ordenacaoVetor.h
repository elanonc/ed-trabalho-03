#ifndef VETOR_H
#define VETOR_H
#include <vector>
#include <iostream>
struct Array; // Tipo no da arvore
 
void ExibeArray(); // imprime o vetor

void BubbleSort(); // metodo de ordenação "bolha" funciona em o(n²) no pior caso

void BubbleSortR(); // metodo de ordenação "bolha" funciona em o(n²) no pior caso

void InsertionSort(); // metodo de ordenação "inserção" funciona em o(n²) no pior caso  

void InsertionSortR(); // metodo de ordenação "inserção" funciona em o(n²) no pior caso  

void SelectionSort(); // metodo de ordenação "seleção" funciona em o(n²) no pior caso  

void SelectionSortR(); // metodo de ordenação "seleção" funciona em o(n²) no pior caso  

void Intercala(); // metodo auxiliar usado no algoritmo merge sort

void MergeSort(); // metodo de ordenação "intercala" funciona em o(n lg n) no pior caso

void MergeSortR(); // metodo de ordenação "intercala" funciona em o(n lg n) no pior caso

int InsereEmHeap(); // metodo para inser 		

void SacodeHeap(); // ?

void HeapSort(); // 

void HeapSortR(); 

int Separa();

void QuickSort();

void QuickSortR();

#endif
