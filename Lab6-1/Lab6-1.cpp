#include <iostream>
#include <string>

using namespace std;

void setMax(int A[4], int B[4], int C[4]);
void setMin(int maxA, int maxB, int maxC, int A[4], int B[4], int C[4]);
void multMin(string mas, int A[4], int B[4], int C[4]);
void multOther(string lit, int multiple, int A[4], int B[4], int C[4]);
void output(int multiple, int oMultiple);

void lab() {
	setlocale(LC_ALL, "Russian");
	int A[4], B[4], C[4];
	
	cout << "Наполните массив \n";
	cin >> A[0] >> A[1] >> A[2] >> A[3];  cout << endl;
	cin >> B[0] >> B[1] >> B[2] >> B[3];  cout << endl;
	cin >> C[0] >> C[1] >> C[2] >> C[3];  cout << endl;

	setMax(A, B, C);

}


void setMax(int A[4], int B[4], int C[4]) {
	int maxA = A[0], maxB = B[0], maxC = C[0];

	for (int i = 1; i < 4; i++) {
		if (A[i] > maxA)
			maxA = A[i];
		if (B[i] > maxB)
			maxB = B[i];
		if (C[i] > maxC)
			maxC = C[i];
	}

	setMin(maxA, maxB, maxC, A, B, C);
}


void setMin(int maxA, int maxB, int maxC, int A[4], int B[4], int C[4]) {
	int maxMas[3] = {maxA, maxB, maxC};
	int min = maxMas[0];
	string mas;
	if (maxMas[1] < min) {
		min = maxMas[1];
		mas = "B";
	}
	if (maxMas[2] < min) {
		min = maxMas[2];
		mas = "C";
	}
	if (min == maxMas[0]) {
		mas = "A";
	}
	
	multMin(mas, A, B, C);
}


void multMin(string mas, int A[4], int B[4], int C[4]) {
	int multiple = 0;
	string lit;
	if (mas == "A") {
		lit = "BC";
		for (int i = 0; i < 4; i++) {
			multiple += A[i] * A[i];
		}
	}
	else if (mas == "B") {
		lit = "AC";
		for (int i = 0; i < 4; i++) {
			multiple += B[i] * B[i];
		}
	}
	else if (mas == "C") {
		lit = "AB";
		for (int i = 0; i < 4; i++) {
			multiple += C[i] * C[i];
		}
	}

	multOther(lit, multiple, A, B, C);
}


void multOther(string lit, int multiple, int A[4], int B[4], int C[4]) {
	int oMultiple = 0;
	if (lit == "AB") {
		for (int i = 0; i < 4; i++) {
			oMultiple += A[i] * B[i];
		}
	}
	else if (lit == "BC") {
		for (int i = 0; i < 4; i++) {
			oMultiple += B[i] * C[i];
		}
	}
	else if (lit == "AC") {
		for (int i = 0; i < 4; i++) {
			oMultiple += A[i] * C[i];
		}
	}

	output(multiple, oMultiple);
}


void output(int multiple, int oMultiple) {
	cout << "Сумма произведений матриц: " << multiple + oMultiple;
}


int main()
{
	lab();
	return 0;
}
