#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;
    int sum = 0;      
    int count = 0;    

    cout << "[ + ] Введите число: ";
    cin >> number;

    while (number != 0) {
        count++;      
        sum += number; 

        cout << "[ + ] Введите число: ";
        cin >> number;
    }

    cout << "[+] Количество чисел: " << count << endl;
    cout << "[+] Сумма: " << sum << endl;

    return 0;
}