#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;

    cout << "[ + ] Введите число: ";
    cin >> number;

    cout << "Отсчет:\n";

    while (number > 0) {
        cout << "Отсчет:" << number << endl;
        number--; 
    }

    cout << "[ + ] Старт!\n";

    return 0;
}