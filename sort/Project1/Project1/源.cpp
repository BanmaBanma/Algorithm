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

void insertionSort(int a[], int N, int g) {
	for (int i = g; i < N; ++i) {
		int temp = a[i];
		int j = i - g;
		while (j >= 0 && a[j] > temp) {
			a[j + g] = a[j];
			j -= g;
		}
		a[j + g] = temp;
    }
}


void shellSort(int a[], int N) {
	int g[2] = { 1,4 };
	for (int i = 1; i >= 0; --i) {
		insertionSort(a, N, g[i]);
	}
}


void bubbleSort(int a[], int N) {
	bool flag = 1;
	for (int i = 0; flag; ++i) {
		flag = 0;
		for (int j = N - 1; j >= i + 1; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
				flag = 1;
			}
		}
	}
}

void selectionSort(int a[], int N) {
	int mini = 0;
	for (int i = 0; i < N-1; ++i) {
		mini = i;
		for (int j = i; j < N; ++j) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
		swap(a[mini], a[i]);
	}
}

int main() {
	int N = 15;
	int a[15];
	initArray(a, N);
	printArray(a, N);
//	insertionSort(a, N);
//	bubbleSort(a, N);
//	selectionSort(a, N);
	shellSort(a, N);
	printArray(a, N);
	getchar();
	return 0;
}