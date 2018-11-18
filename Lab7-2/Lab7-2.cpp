#include <iostream>
#include <string>

using namespace std;

struct Institution {
	string name;
};



int main()
{	
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите кол-во учреждений\n";
	cin >> N;

	Institution *inst = new Institution[N];

	for (int i = 0; i < N; i++) {
		cout << "Введите название " << i + 1 << " учреждения\n";
		cin >> inst[i].name;
	}

	while (true)
	{	
		cout << "Список учреждений";
		for (int i = 0; i < N; i++) {
			cout << endl << inst[i].name << endl;
		}
		string s;
		cout << "Введите название учреждения, которое хотите удалить\n";
		cin >> s;
		for (int i = 0; i < N; i++) {
			if (s == inst[i].name) {
				inst[i].name = inst[i + 1].name;
				inst[i + 1].name = "удаленное учр.";
				cout << "Удалено"<< endl <<endl;
			}
			
		}

		string ex;
		cout << "Хотите выйти ? {y/n}\n";
		cin >> ex;
		if (ex == "y") {
			break;
		}
	}

		
	return 0;
}

