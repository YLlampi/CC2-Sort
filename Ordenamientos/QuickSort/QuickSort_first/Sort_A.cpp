#include <iostream>
using namespace std; 

void swap(int* a, int* b){ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int as (int arr[], int a, int b) { 
	int pivot = arr[b];
	int i = (a - 1);

	for (int j = a; j <= b - 1; j++) { 
		if (arr[j] < pivot) { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[b]); 
	return (i + 1); 
} 

void ordenamiento(int arr[], int a, int b){ 
	if (a < b){ 
		int pi = as(arr, a, b); 
		ordenamiento(arr, a, pi - 1); 
		ordenamiento(arr, pi + 1, b); 
	} 
} 

void imprimir(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout <<'\n'; 
} 

int main() 
{ 
	int arr[] = {38, 27, 43, 3, 9, 82, 10}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	ordenamiento(arr, 0, n - 1); 
	cout << "Arreglo Ordenado: \n"; 
	imprimir(arr, n); 
	return 0; 
} 

