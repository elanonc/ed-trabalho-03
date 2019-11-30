#ifndef VETOR_H
#define VETOR_H
#include <vector>
#include <iostream>
struct Array; // ...

class QX_List{

	public:
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

		void Sacode(); // altera

		void HeapSort(); // altera

		void HeapSortR(); // altera  

		int Separa(); // a partir de um pivo, ele separa o vetor em dois

		void QuickSort(); // ordena os vetores separadamente

		void QuickSortR(); // ordena os vetores separadamente
};
#endif
