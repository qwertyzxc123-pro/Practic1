#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;

    while (true) {
        cout << "[ + ] Цикл \"WHILE\"" << endl;
        cout << endl;
        cout << "[ + ] Введите число: ";
        cin >> number;
        cout << endl;

        if (number == 0) {
            break;
        }

        if (number < 1 || number > 15) {
            cout << "[ + ] Ошибка! Число должно быть от 1 до 15." << endl;
            cout << endl;
            continue;
        }

        int count = 1;
        while (count <= number) {
            cout << "[ + ] Цикл отработал. Круг: " << count << "." << endl;
            count++;
        }
        cout << endl;
    }

    return 0;
}
