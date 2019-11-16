using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, c, max, min, l, k;
	l = 0;
	k = 1;
	cout << "Введите количество строк: ";
	cin >> M;
	cout << "Введите количество столбцов: ";
	cin >> N;
	float** A = new float* [M];
	for (c = 0; c < M; c++)
		A[c] = new float[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		};
	};
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			l += A[i][j];
			k *= A[i][j];
		};
		cout << l << " " << k << endl;
		l = 0;
		k = 1;
	};
}