#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    string s, result;
    int num=0;
    cout << "Введите строку:";
    cin >> s;
    for(int i = 0; s[i] != NULL; i++) {
        if (s[i] != '.' && std::isdigit(s[i]) || s[0] == '-')  {
            result += s[i];
            num++;
        }
        else {
            cout << "Не является";
            num=0;
            break;
        }
    }
    if (num != 0 ) cout << result;

    return 0;
}

