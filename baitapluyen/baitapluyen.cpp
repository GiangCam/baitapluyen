#include <iostream>
using namespace std;
int main() {
	int sotien, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << "nhap so tien can rut ";

	cin >> sotien;
	while (sotien > 0)
	{
		soto500 = sotien / 500;
		sotien = sotien % 500;
		cout << "soto500 la" << soto500 << endl;

		soto200 = sotien / 200;
		sotien = sotien % 200;
		cout << "soto200 la" <<  soto200  << endl;

		soto100 = sotien / 100;
		sotien = sotien % 100;
		cout << "soto100 la" << soto100 << endl;

		soto50 = sotien / 50;
		sotien = sotien % 50;
		cout << "soto50 la" << soto50 << endl;

		soto20 = sotien / 20;
		sotien = sotien % 20;
		cout << "soto20 la" << soto20 << endl;

		soto10 = sotien / 10;
		sotien = sotien % 10;
		cout << "soto10 la" << soto10  << endl;

		soto5 = sotien / 5;
		sotien = sotien % 5;
		cout << "soto5 la" << soto5 << endl;

			 soto1 = sotien / 1;
			 sotien = sotien % 1;
			 cout << "soto1 la" << soto1 << endl;
	}
	
		return 0;
}
