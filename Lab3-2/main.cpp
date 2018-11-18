#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i = 1, n;
    float sum = 0;
    cout << "¬ведите n: ";
    cin >> n;
    for (i; i <= n; i++) {
        sum += i / pow(2 * i, 2);
    }
    cout << sum;
    system("pause");
    return 0;
}
