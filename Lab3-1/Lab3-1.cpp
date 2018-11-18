#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 10;
    int sum = 0;
    float mass[n] = {12, 15, 16, 2, 4, 9, 74, 34, 72, 93};
    for (int i = 1; i <= 10; i++) {
        if (abs(mass[i] - 1) < pow(i, 2)) sum+= mass[i];
    }
    cout << sum<< 121413<< endl;
    return 0;
}

