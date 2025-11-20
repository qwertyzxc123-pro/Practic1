#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "");
    srand(time(NULL));
    while (1) {
        cout << "1.Игра 2.Выход: "; int c; cin >> c;
        if (c == 2) break;
        if (c != 1) continue;

        int n1, n2, n3;
        n1 = rand() % 10 + 1;
        n2 = rand() % 10 + 1; 
        while (n2 == n1) { n2 = rand() % 10 + 1; }
        n3 = rand() % 10 + 1;
        while (n3 == n1 || n3 == n2) { n3 = rand() % 10 + 1; }

        int g = 0, a = 5;
        while (a > 0 && g < 3) {
            cout << "Угадано:" << g << "/3 Попыток:" << a << "\nЧисло: ";
            int x; cin >> x;
            if (x == n1 || x == n2 || x == n3) { cout << "[+] Да!\n"; g++; }
                if (x == n1)n1 = -1;
                else if (x == n2)n2 = -1;
                else if (x == n3) n3 = -1;
            else cout << "[-] Нет!\n";
            a--;
        }
        cout << (g == 3 ? "Победа!" : "Проигрыш") << "\n";
    }
}
