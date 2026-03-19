#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    cout << "Калькулятор\n";
    cout << "1. Складывать\n";
    cout << "2. Вычитать\n";
    cout << "3. Умножать\n";
    cout << "4. Делить\n";
    cout << "5. Остаток от деления\n";
    cout << "6. Степень\n";
    cout << "7. Корень\n";
    cout << "8. Куб\n";
    cout << "9. Синус\n";
    cout << "10. Косинус\n";
    cout << "0. Выход\n";

    int oper;
    double a, b, res;

    while (true) {
        cout << "Выберите операцию (0-10): ";
        cin >> oper;

        if (oper == 0) {
            cout << "До свидания\n";
            break;
        }

        if (oper < 1 || oper > 10) {
            cout << "Ошибка: Введите число от 0 до 10.\n";
            continue;
        }

        cout << "Введите число a: ";
        cin >> a;

        if (oper >= 1 && oper <= 6) {
            cout << "Введите число b: ";
            cin >> b;
        }

        switch (oper) {
        case 1:
            res = a + b;
            cout << "Результат: " << a << " + " << b << " = " << res << endl;
            break;
        case 2:
            res = a - b;
            cout << "Результат: " << a << " - " << b << " = " << res << endl;
            break;
        case 3:
            res = a * b;
            cout << "Результат: " << a << " * " << b << " = " << res << endl;
            break;
        case 4:
            if (b == 0) {
                cout << "Ошибка: деление на ноль запрещено!\n";
            }
            else {
                res = a / b;
                cout << "Результат: " << a << " / " << b << " = " << res << endl;
            }
            break;
        case 5:
            if (b == 0) {
                cout << "Ошибка: делить на 0 нельзя!\n";
            }
            else {
                res = fmod(a, b);
                cout << "[ % ] Результат: " << a << " % " << b << " = " << res << endl;
            }
            break;
        case 6:
            res = pow(a, b);
            cout << "[ ^ ] Результат: " << a << " ^ " << b << " = " << res << endl;
            break;
        case 7:
            if (a < 0) {
                cout << "Ошибка: нельзя узнать корень из отрицательного числа!\n";
            }
            else {
                res = sqrt(a);
                cout << "Корень: " << res << endl;
            }
            break;
        case 8:
            res = a * a * a;
            cout << "Куб: " << res << endl;
            break;
        case 9:
            res = sin(a);
            cout << "Синус: " << res << endl;
            break;
        case 10:
            res = cos(a);
            cout << "Косинус: " << res << endl;
            break;
        }
    }
    int _; cin >> _;
    return 0;
}
