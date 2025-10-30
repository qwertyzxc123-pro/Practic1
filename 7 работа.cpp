#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    int month, day;
    string monthName;
    cout << "[ + ] Календарь" << endl;
    cout << "[ 1 ] Январь" << endl;
    cout << "[ 2 ] Февраль" << endl;
    cout << "[ 3 ] Март" << endl;
    cout << "[ 4 ] Апрель" << endl;
    cout << "[ 5 ] Май" << endl;
    cout << "[ 6 ] Июнь" << endl;
    cout << "[ 7 ] Июль" << endl;
    cout << "[ 8 ] Август" << endl;
    cout << "[ 9 ] Сентябрь" << endl;
    cout << "[ 10 ] Октябрь" << endl;
    cout << "[ 11 ] Ноябрь" << endl;
    cout << "[ 12 ] Декабрь" << endl;
    cout << endl;

    cout << "[ + ] Выберите месяц: ";
    cin >> month;

    switch (month) {
    case 1:
        monthName = "Январь";
        break;
    case 2:
        monthName = "Февраль";
        break;
    case 3:
        monthName = "Март";
        break;
    case 4:
        monthName = "Апрель";
        break;
    case 5:
        monthName = "Май";
        break;
    case 6:
        monthName = "Июнь";
        break;
    case 7:
        monthName = "Июль";
        break;
    case 8:
        monthName = "Август";
        break;
    case 9:
        monthName = "Сентябрь";
        break;
    case 10:
        monthName = "Октябрь";
        break;
    case 11:
        monthName = "Ноябрь";
        break;
    case 12:
        monthName = "Декабрь";
        break;
    default:
        cout << "[ + ] Неправильно введен номер месяца!" << endl;
        return 1;
    }

    cout << "[ + ] Выбран месяц - \"" << monthName << "\"" << endl;

    cout << "[ + ] Выберите день месяца: ";
    cin >> day;

    cout << "[ + ] Календарь: ";
    switch (day) {
    case 1:
        cout << "1 " << monthName << "." << endl;
        break;
    case 2:
        cout << "2 " << monthName << "." << endl;
        break;
    case 3:
        cout << "3 " << monthName << "." << endl;
        break;
    case 4:
        cout << "4 " << monthName << "." << endl;
        break;
    case 5:
        cout << "5 " << monthName << "." << endl;
        break;
    case 6:
        cout << "6 " << monthName << "." << endl;
        break;
    case 7:
        cout << "7 " << monthName << "." << endl;
        break;
    case 8:
        cout << "8 " << monthName << "." << endl;
        break;
    case 9:
        cout << "9 " << monthName << "." << endl;
        break;
    case 10:
        cout << "10 " << monthName << "." << endl;
        break;
    case 11:
        cout << "11 " << monthName << "." << endl;
        break;
    case 12:
        cout << "12 " << monthName << "." << endl;
        break;
    case 13:
        cout << "13 " << monthName << "." << endl;
        break;
    case 14:
        cout << "14 " << monthName << "." << endl;
        break;
    case 15:
        cout << "15 " << monthName << "." << endl;
        break;
    case 16:
        cout << "16 " << monthName << "." << endl;
        break;
    case 17:
        cout << "17 " << monthName << "." << endl;
        break;
    case 18:
        cout << "18 " << monthName << "." << endl;
        break;
    case 19:
        cout << "19 " << monthName << "." << endl;
        break;
    case 20:
        cout << "20 " << monthName << "." << endl;
        break;
    case 21:
        cout << "21 " << monthName << "." << endl;
        break;
    case 22:
        cout << "22 " << monthName << "." << endl;
        break;
    case 23:
        cout << "23 " << monthName << "." << endl;
        break;
    case 24:
        cout << "24 " << monthName << "." << endl;
        break;
    case 25:
        cout << "25 " << monthName << "." << endl;
        break;
    case 26:
        cout << "26 " << monthName << "." << endl;
        break;
    case 27:
        cout << "27 " << monthName << "." << endl;
        break;
    case 28:
        cout << "28 " << monthName << "." << endl;
        break;
    case 29:
        cout << "29 " << monthName << "." << endl;
        break;
    case 30:
        cout << "30 " << monthName << "." << endl;
        break;
    case 31:
        cout << "31 " << monthName << "." << endl;
        break;
    default:
        cout << "Неправильно введен день месяца!" << endl;
        break;
    }

    return 0;
}
