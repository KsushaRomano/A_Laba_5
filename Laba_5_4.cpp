using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int M, N, i, j, c, l;
	l = 0;
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
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (A[j][i] > 0) {
				l += A[j][i];
			};
		};
		cout << l << " ";
		l = 0;
	};
	cout << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (A[j][i] > 0) {
				l += 1;
			};
		};
		cout << l << " ";
		l = 0;
	};
}
