#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;

    cout << "Введите число от 1 до 100: " << endl;

    cin >> number;

    if (number < 0) {
        cout << "Число меньше 0." << endl;
    }
    else if (number > 100) {
        cout << "Число больше 100." << endl;
    }

 else {
     if (number >= 1 && number <= 10) {
         cout << "Диапазон: 1 - 10" << endl;
     }
     else if (number >= 11 && number <= 20) {
         cout << "Диапазон: 11 - 20" << endl;
     }
     else if (number >= 21 && number <= 30) {
         cout << "Диапазон: 21 - 30" << endl;
     }
     else if (number >= 31 && number <= 40) {
         cout << "Диапазон: 31 - 40" << endl;
     }
     else if (number >= 41 && number <= 50) {
         cout << "Диапазон: 41 - 50" << endl;
     }
     else if (number >= 51 && number <= 60) {
         cout << "Диапазон: 51 - 60" << endl;
     }
     else if (number >= 61 && number <= 70) {
         cout << "Диапазон: 61 - 70" << endl;
     }
     else if (number >= 71 && number <= 80) {
         cout << "Диапазон: 71 - 80" << endl;
     }
     else if (number >= 81 && number <= 90) {
         cout << "Диапазон: 81 - 90" << endl;
     }
     else if (number >= 91 && number <= 100) {
         cout << "Диапазон: 91 - 100" << endl;
     }
    }

    return 0;
}