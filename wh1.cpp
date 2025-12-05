#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number; 
    int sum = 0;

    cout << "[ + ] Введите число: ";
    cin >> number; 

    
    while (number != 0) {
        sum += number; 
        cout << "[ + ] Введите число: ";
        cin >> number; 
    }

    cout << "[ + ] Сумма: " << sum << endl;

    return 0;
}