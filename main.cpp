#include <iostream>
#include <conio.h>

#include "wassertank.h"

using namespace std;

int main() {
	unsigned int größe;
	unsigned int füllmenge = 0;
	char c;
	bool loop = true;

	cout << "Wie viel Liter fasst der Tank?" << endl;
	cin >> größe;
	Wassertank wt;
	wt.setGroesse(größe);

	while (loop) {
		cout << "Was moechten sie tun? [einfuellen = e, ausleeren = a; beenden = x]" << endl;
		cin >> c;

		switch (c)
		{
		case 'e':
			cout << "Wieviel Liter moechten Sie einfuellen?" << endl;
			cin >> füllmenge;
			wt.fuellen(füllmenge);
			cout << "aktueller Fuellstand: " << wt.getFuelstand() << endl;
			break;
		case 'a':
			wt.ausleeren();
			cout << "aktueller Fuellstand: " << wt.getFuelstand() << endl;
			break;
		case 'x':
			loop = false;
			break;
		}
		cout << endl;
	}

	cout << "Press any key to exit...";

	_getch();
	return 0;
}
