#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	string pass;
	string nopass;
	pass = "12345";
	while (true) {
		cout << "Введите пароль:";
		cin >> nopass;
		if (pass == nopass) {
			cout << "Добро пожаловать!" << endl;
			break;
		}
		else {
			cout << "Неверный пароль!" << endl;
		}
	}




	return 0;
}
