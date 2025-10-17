#include <iostream>
using namespace std;

int main() {
    setlocale(0,"");
    int choice;

    cout << "[- ] Программа \"Времена года\"" << endl;
    cout << "[ 1 ] Лето" << endl;
    cout << "[ 2 ] Осень" << endl;
    cout << "[ 3 ] Зима" << endl;
    cout << "[ 4 ] Весна" << endl;
    cout << "[-] Введите значение: ";

    cin >> choice;

    if (choice == 1) {
        cout << "[-] Сейчас лето, можно легко одеться и наслаждаться солнцем." << endl;
    }
    else if (choice == 2) {
        cout << "[-] Сейчас осень, следует одеться тепло и взять с собой зонт." << endl;
    }
    else if (choice == 3) {
        cout << "[-] Сейчас зима, нужно тепло одеваться и не забывать про шапку и перчатки." << endl;
    }
    else if (choice == 4) {
        cout << "[-] Сейчас весна, можно одеться полегче, но лучше взять с собой куртку." << endl;
    }
    else {
        cout << "[-] Ошибка: такого времени года нет в списке!" << endl;
    }

    return 0;
}
