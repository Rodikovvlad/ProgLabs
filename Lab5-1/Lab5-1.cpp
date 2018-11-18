include <iostream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s,ch;
    int num = 0;
    stringstream p;
    cout << "Введите строку: ";
    cin >> s;


    for (int i = 1; i < 10; i++) {
        for (int k = 0; s[k] != NULL; k++) {
            char sym = i + '0';
            if (s[k] == sym) num++;
        }
        cout << "Кол-во "<<i<<": "<<num<<endl;
        num=0;
    }
    return 0;
}

