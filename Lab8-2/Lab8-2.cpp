#include <iostream>

using namespace std;


void getOut(float **mas, int M, int N) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << mas[i][j] << " ";

		}
		cout << endl;
	}
}


void selectionSort(float **mas, int M, int N) {
	int max;
	float temp;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N - 1; j++) {
			max = j;
			for (int k = j + 1; k < N; k++) {
				if (mas[i][k] > mas[i][max]) {
					max = k;
				}
				temp = mas[i][j];
				mas[i][j] = mas[i][max];
				mas[i][max] = temp;
			}
		}
	}
	getOut(mas, M, N);
}


void setMatrix() {
	int M, N;
	cout << "Введите кол-во строк матрицы:\n";
	cin >> M;
	cout << endl;
	cout << "Введите кол-во столбцов матрицы:\n";
	cin >> N;
	float **mas = new float*[M];
	for (int i = 0; i < M; i++) {
		mas[i] = new float[N];
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Введите " << "mas[" << i << "][" << j << "]: ";
			cin >> mas[i][j];
		}
	}
	selectionSort(mas, M, N);

}


int main()
{
	setlocale(LC_ALL, "Russian");
	setMatrix();
	return 0;
}
