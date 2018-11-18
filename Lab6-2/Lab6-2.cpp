#include <iostream>
#define N 4
#include <cmath>

using namespace std;

void lab(float x[N], float y[N], float z[N]) {

	float mult1 = 1;
	float mult2 = 1;

	for (int i = 0; i < N; i++) {
		if (1 - (y[i] * y[i]) > 0.5) {
			mult1 *= sin(x[i]) + 2;
		}
		else
		{
			mult2 *= 1 - (z[i] * z[i]);
		}
	}

	cout << mult1 << endl;
	cout << mult2 << endl;
}



int main()
{	
	setlocale(LC_ALL, "Russian");
	float x[N], y[N], z[N];

	cout << "Заполните массивы" << endl;
	
	cin >> x[0] >> x[1] >> x[2] >> x[3];
	cout << endl;
	cin >> y[0] >> y[1] >> y[2] >> y[3];
	cout << endl;
	cin >> z[0] >> z[1] >> z[2] >> z[3];
	
	lab(x, y, z);
}

