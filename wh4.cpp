#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int number;
	int count = 0;

	cout << "[+] Введите число: ";
	cin >> number;

	if (number == 0) {
		count = 1;
	}
	else {
		int temp = number;

		while (temp > 0) {
			count++;

			temp = temp / 10;


		}
	}

	cout << "[+] Количество цифр: "
<< count << endl;

	return 0;
}








