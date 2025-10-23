#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;
    int multiplier = 1;

    cout << "Введите число: "; cin >> number;
    while (multiplier <= 9) {
        cout << "решите пример:" << number << " x " << multiplier << endl;
        int answer;
        cout << "Ответ:"; cin >> answer;

        int correct = number * multiplier;
        if (answer == correct)
        {
            cout << "Пример решен правильно!" << endl;
            multiplier++;
        }
        else {
            cout << "Ошибка, пример решен неверено!" << endl;
            break;
        }
    }
    if (multiplier > 9)
    {
        cout << "Все примеры решены верно!" << endl;
    }


    return 0;
}
