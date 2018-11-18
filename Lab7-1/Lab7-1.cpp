#include <iostream>
#include <string>


using namespace std;


struct mankind {
	string s;
	string f;
	int y;
};


int main() {
	setlocale(LC_ALL, "Russian");
	int N;

	int numM = 0;
	int numW = 0;

	int allYM = 0;
	int allYW = 0;

	int normYM;
	int normYW;

	cout << "Сколько жителей будет проживать в поселке ?\n";
	cin >> N;
	
	mankind *man = new mankind[N];

	for (int i = 0; i < N; i++) {
		cout << "Введите пол: (m/w)\n";
		cin >> man[i].s;
		if (man[i].s == "m") {
			numM += 1;
		}
		else {
			numW += 1;
		}
		cout << "Введите фамилию:\n";
		cin >> man[i].f;
		cout << "Введите кол-во лет:\n";
		cin >> man[i].y;
		if (man[i].s == "m")
			allYM += man[i].y;
		else
			allYW += man[i].y;
	}
	
	normYM = allYM / numM;
	normYW = allYW / numW;

	for (int i = 0; i < N; i++) {
		if (man[i].y > normYM && man[i].s == "m") {
			cout << "\t" <<man[i].f << " - фамилия" << endl;
			cout << "\t" << man[i].y << " - лет" << endl;
			cout << "\t" << man[i].s << " - пол" << endl;
			cout << endl << endl;
		}
		else if (man[i].y > normYW && man[i].s == "w") {
			cout << "\t" << man[i].f << " - фамилия" << endl;
			cout << "\t" << man[i].y << " - лет" << endl;
			cout << "\t" << man[i].s << " - пол" << endl;
			cout << endl << endl;
		}
	}

	return 0;
}
