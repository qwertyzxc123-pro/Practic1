#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num;

    cout << "[ + ] Введите число: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << "[+]" << num << " × " << i << " = " << num * i << endl;
    }

    return 0;
}