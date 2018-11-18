#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    srand(time(0));
    int countMin = 0, number = 0, r;
    cout << "Введите кол-во элементов: ";
    cin >> r;
    const int els = r;
    int x[els];
    for (int i = 0; i < els; i++) {
        x[i] = rand() % 200 - 100;
    }
    int y[els];
    for (int i = 0; i < els; i++) {
        if (x[i] > 0) number += 1;
    }
    for (int i = 0; i < els; i++) {
        if (x[i] < 0) {
            y[countMin] = x[i];
            countMin++;
        }
        else if (x[i] > 0) {
            y[els - number - 1] = x[i];
            number--;
        }
    }

    for ( int i = 0; i < els; i++) {
        cout << y[i] << " ";
    }
    system("pause");
    return 0;
}
