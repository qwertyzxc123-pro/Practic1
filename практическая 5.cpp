#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int operation;
    setlocale(0, "");
    double num1, num2, result;

    cout << "=== КАЛЬКУЛЯТОР ===" << endl;
    cout << "Выберите операцию:" << endl;
    cout << "1 - Сложение (+)" << endl;
    cout << "2 - Вычитание (-)" << endl;
    cout << "3 - Умножение (*)" << endl;
    cout << "4 - Деление (/)" << endl;
    cout << "5 - Остаток от деления (%)" << endl;
    cout << "Введите номер операции: ";
    cin >> operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    
    cout << fixed << setprecision(2);

    if (operation == 1) {
        result = num1 + num2;
        cout << "Результат: " << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (operation == 2) {
        result = num1 - num2;
        cout << "Результат: " << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (operation == 3) {
        result = num1 * num2;
        cout << "Результат: " << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (operation == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Результат: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "ОШИБКА: Деление на ноль запрещено!" << endl;
        }
    }
    else if (operation == 5) {
        if (num2 != 0) {

            int intNum1 = static_cast<int>(num1);
            int intNum2 = static_cast<int>(num2);
            result = intNum1 % intNum2;
            cout << "Результат: " << intNum1 << " % " << intNum2 << " = " << result << endl;
        }
        else {
            cout << "ОШИБКА: Деление на ноль запрещено!" << endl;
        }
    }
    else {
        cout << "ОШИБКА: Неверный выбор операции!" << endl;
    }

    return 0;
}