#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()  {

    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int rows, cols, k = 0;
    cout << "Введите кол-во строк: ";
    cin >> rows;
    cout << "Введите кол-во столбцов: ";
    cin >> cols;
    int** mass = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        mass[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            mass[i][j] = rand() % 100;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < cols - 1; j++) {
            if (mass[i][j] > mass[i][j - 1] && mass[i][j] < mass[i][j + 1]) k++;
        }
    }
    cout << "Special: " << k;
    system("pause");
    return 0;

}
