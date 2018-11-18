#include <iostream>

using namespace std;

void setOut(int *masF, int num) {
	for (int i = 0; i < num; i++) {
		cout << masF[i] << " ";
	}
}


void setSort(int num, int P, int G, int *masC, int *masD) {
	int *masF = new int[num];

	for (int i = 0; i < P; i++)
		masF[i] = masC[i];
	for (int i = P; i < num; i++)
		masF[i] = masD[i - P];
	for (int i = 0; i < num; i++) {
		int temp = masF[i];
		int j = i - 1;
		while (j >= 0 && masF[j] > temp) {
			masF[j + 1] = masF[j];
			j--;
		}
		masF[j + 1] = temp;
	}
	setOut(masF, num);

}


void setDigits() {
	int P, G;
	cout << "Сколько будет чисел C\n";
	cin >> P;
	cout << "Сколько будет чисел D\n";
	cin >> G;

	int num = P + G;


	int *masC = new int[P];
	int *masD = new int[G];

	cout << "Введите ряд чисел для С(каждое следующее больше предыдущего)\n";
	for (int i = 0; i < P; i++) {
		cin >> masC[i];
	}

	cout << "Введите ряд чисел для D(каждое следующее больше предыдущего)\n";
	for (int i = 0; i < G; i++) {
		cin >> masD[i];
	}

	setSort(num, P, G, masC, masD);
}

int main()
{	
	setlocale(LC_ALL, "Russian");

	setDigits();

	return 0;
}

