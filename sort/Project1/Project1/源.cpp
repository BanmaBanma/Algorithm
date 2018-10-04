#include<iostream>
#include <stdlib.h>
using namespace std;



void printArray(int a[], int N) {
	int i;
	for (i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void initArray(int a[], int N) {
	int i;
	for (i = 0; i < N; ++i) {
		a[i] = rand();
	}
}



void insertionSort(int a[], int N) {
	int i, j, temp;
	for (i = 0; i < N; ++i) {
		temp = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = temp;
	}


}

int main() {
	int N = 15;
	int a[15];
	initArray(a, N);
	printArray(a, N);
	insertionSort(a, N);
	printArray(a, N);
	getchar();
	return 0;
}