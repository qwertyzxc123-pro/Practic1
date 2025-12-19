#include <iostream>
using namespace std;


int main() {
	setlocale(0, "");


	int cheslo;
	int a;
	int visota;
	int shirena;

	cout << "Программа - “Геометрические фигуры”\n" << "[ 1 ] Линия\n[ 2 ] Квадрат\n[ 3 ] Прямоугольник";
	cin >> a;
	system("cls");

	switch (a) {
	case 1:
		cout << "[ 1 ] Вертикально\n[ 2 ] Горизонтально\n";
		cin >> a;
		system("cls");
		switch (a) {
		case 1:
			cout << "Ввидите длину линии:";
			cin >> cheslo;
			while (cheslo != 0) {
				cout << "# \n";
				cheslo -= 1;
			}
			break;
		case 2:
			cout << "Ввидите длину линии:";
			cin >> cheslo;
			while (cheslo != 0) {
				cout << "# ";
				cheslo -= 1;
			}
			break;
		}
		break;

	case 2:
		cout << "[ 1 ] Заполненный\n[ 2 ] Пустой\n";
		cin >> a;
		system("cls");
		switch (a) {
		case 1:
			cout << "Ввидите раммер квадрата:";
			cin >> cheslo;
			system("cls");

			for (int y = 0; y < cheslo; y++)
			{
				for (int x = 0; x < cheslo; x++)
				{

					cout << "# ";


				}
				cout << "\n";

			}
			break;
		case 2:
			cout << "Ввидите раммер квадрата:";
			cin >> cheslo;
			system("cls");

			for (int y = 0; y < cheslo; y++)
			{
				for (int x = 0; x < cheslo; x++)
				{
					if (y == 0 || x == 0 || x == cheslo - 1 || y == cheslo - 1) {
						cout << "# ";
					}
					else {
						cout << ". ";
					}


				}
				cout << "\n";

			}
			break;
		}


	case 3:
		cout << "[ 1 ] Заполненный\n[ 2 ] Пустой\n";
		cin >> a;
		system("cls");
		switch (a) {
		case 1:
			cout << "Ввидите высоту:";
			cin >> visota;
			cout << "Ввидите ширену:";
			cin >> shirena;
			system("cls");
			for (int y = 0; y < visota; y++)
			{
				for (int x = 0; x < shirena; x++)
				{

					cout << "# ";


				}
				cout << "\n";

			}
			break;

		case 2:
			cout << "Ввидите высоту:";
			cin >> visota;
			cout << "Ввидите ширену:";
			cin >> shirena;
			system("cls");

			for (int y = 0; y < visota; y++)
			{
				for (int x = 0; x < shirena; x++)
				{
					if (y == 0 || x == 0 || x == shirena - 1 || y == visota - 1) {
						cout << "# ";
					}
					else {
						cout << ". ";
					}


				}
				cout << "\n";

			}
			break;
		}

	}

}
