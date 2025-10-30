#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int choice, wordChoice;
    
    while (true) {
        cout << "[ + ] Переводчик" << endl;
        cout << endl;
        cout << "[ 1 ] Русские слова" << endl;
        cout << "[ 2 ] Английские слова" << endl;
        cout << "[ 3 ] Выйти" << endl;
        cout << endl;
        cout << "[ + ] Выберите пункт меню: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            cout << "[ + ] Переводчик \"Список русских слов\"" << endl;
            cout << endl;
            cout << "[ 1 ] Дом" << endl;
            cout << "[ 2 ] Дорога" << endl;
            cout << "[ 3 ] Книга" << endl;
            cout << "[ 4 ] Стол" << endl;
            cout << "[ 5 ] Стул" << endl;
            cout << "[ 6 ] Окно" << endl;
            cout << "[ 7 ] Дверь" << endl;
            cout << "[ 8 ] Вода" << endl;
            cout << "[ 9 ] Огонь" << endl;
            cout << "[ 10 ] Воздух" << endl;
            cout << "[ 11 ] Земля" << endl;
            cout << "[ 12 ] Солнце" << endl;
            cout << "[ 13 ] Луна" << endl;
            cout << "[ 14 ] Звезда" << endl;
            cout << "[ 15 ] Время" << endl;
            cout << endl;
            cout << "[ + ] Выберите номер слова: ";
            cin >> wordChoice;
            cout << endl;

            switch (wordChoice) {
            case 1: cout << "[ + ] Перевод: дом -> house" << endl; break;
            case 2: cout << "[ + ] Перевод: дорога -> road" << endl; break;
            case 3: cout << "[ + ] Перевод: книга -> book" << endl; break;
            case 4: cout << "[ + ] Перевод: стол -> table" << endl; break;
            case 5: cout << "[ + ] Перевод: стул -> chair" << endl; break;
            case 6: cout << "[ + ] Перевод: окно -> window" << endl; break;
            case 7: cout << "[ + ] Перевод: дверь -> door" << endl; break;
            case 8: cout << "[ + ] Перевод: вода -> water" << endl; break;
            case 9: cout << "[ + ] Перевод: огонь -> fire" << endl; break;
            case 10: cout << "[ + ] Перевод: воздух -> air" << endl; break;
            case 11: cout << "[ + ] Перевод: земля -> earth" << endl; break;
            case 12: cout << "[ + ] Перевод: солнце -> sun" << endl; break;
            case 13: cout << "[ + ] Перевод: луна -> moon" << endl; break;
            case 14: cout << "[ + ] Перевод: звезда -> star" << endl; break;
            case 15: cout << "[ + ] Перевод: время -> time" << endl; break;
            default: cout << "[ + ] Неправильный номер слова!" << endl; break;
            }
            break;

        case 2:
            cout << "[ + ] Переводчик \"Список английских слов\"" << endl;
            cout << endl;
            cout << "[ 1 ] House" << endl;
            cout << "[ 2 ] Road" << endl;
            cout << "[ 3 ] Book" << endl;
            cout << "[ 4 ] Table" << endl;
            cout << "[ 5 ] Chair" << endl;
            cout << "[ 6 ] Window" << endl;
            cout << "[ 7 ] Door" << endl;
            cout << "[ 8 ] Water" << endl;
            cout << "[ 9 ] Fire" << endl;
            cout << "[ 10 ] Air" << endl;
            cout << "[ 11 ] Earth" << endl;
            cout << "[ 12 ] Sun" << endl;
            cout << "[ 13 ] Moon" << endl;
            cout << "[ 14 ] Star" << endl;
            cout << "[ 15 ] Time" << endl;
            cout << endl;
            cout << "[ + ] Выберите номер слова: ";
            cin >> wordChoice;
            cout << endl;

            switch (wordChoice) {
            case 1: cout << "[ + ] Перевод: house -> дом" << endl; break;
            case 2: cout << "[ + ] Перевод: road -> дорога" << endl; break;
            case 3: cout << "[ + ] Перевод: book -> книга" << endl; break;
            case 4: cout << "[ + ] Перевод: table -> стол" << endl; break;
            case 5: cout << "[ + ] Перевод: chair -> стул" << endl; break;
            case 6: cout << "[ + ] Перевод: window -> окно" << endl; break;
            case 7: cout << "[ + ] Перевод: door -> дверь" << endl; break;
            case 8: cout << "[ + ] Перевод: water -> вода" << endl; break;
            case 9: cout << "[ + ] Перевод: fire -> огонь" << endl; break;
            case 10: cout << "[ + ] Перевод: air -> воздух" << endl; break;
            case 11: cout << "[ + ] Перевод: earth -> земля" << endl; break;
            case 12: cout << "[ + ] Перевод: sun -> солнце" << endl; break;
            case 13: cout << "[ + ] Перевод: moon -> луна" << endl; break;
            case 14: cout << "[ + ] Перевод: star -> звезда" << endl; break;
            case 15: cout << "[ + ] Перевод: time -> время" << endl; break;
            default: cout << "[ + ] Неправильный номер слова!" << endl; break;
            }
            break;

        case 3:
            return 0;

        default:
            cout << "[ + ] Неправильный пункт меню!" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}
