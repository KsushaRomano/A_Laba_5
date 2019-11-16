using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, c, l1, k1, l2, k2;
	float  max, min;
	l1 = 0;
	l2 = 0;
	k1 = 0;
	k2 = 0;
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
	min = A[0][0];
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
				l1 = i;
				k1 = j;
			}
			else if (A[i][j] > max) {
				max = A[i][j];
				l2 = i;
				k2 = j;
			};
		};
	};
	cout << "Квадратная матрица: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << "[" << i << "][" << j << "] = " << A[i][j] << " ";
		};
		cout << "\t" << endl;
	};
	cout << "Минимальный элемент: " << min << " с индексами [" << l1 << "][" << k1 << "]" << endl;
	cout << "Максимальный элемент: " << max << " с индексами [" << l2 << "][" << k2 << "]" << endl;
}