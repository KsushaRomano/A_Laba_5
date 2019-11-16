using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, c, k, p;
	float  max;
	k = 0;
	cout << "Введите порядок матрицы: ";
	cin >> N;
	float** A = new float* [N];
	for (c = 0; c < N; c++)
		A[c] = new float[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		};
	};
	max = A[0][0];
	for (i = 0; i < N; i++) {
		max = A[i][0];
		for (j = 1; j < N; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				k = j;
			};
		};
		p = A[i][i];
		A[i][i] = A[i][k];
		A[i][k] = p;
	};
	cout << "Квадратная матрица: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << "[" << i << "][" << j << "] = " << A[i][j] << " ";
		};
		cout << "\t" << endl;
	};
}