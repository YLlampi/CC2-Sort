#include <iostream>
using namespace std; 

void swap(int* a, int* b){ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int as (int arr[], int a, int b) { 
	int pivot = arr[a];
	int i = (a);

	for (int j = a+1; j <= b; j++) { 
		if (arr[j] < pivot) { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i], &arr[a]); 
	return (i); 
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
	int arr[] = {1,2,7,4,8}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	ordenamiento(arr, 0, n - 1); 
	cout << "Arreglo Ordenado: \n"; 
	imprimir(arr, n); 
	return 0; 
} 

