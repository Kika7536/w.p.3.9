#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");

	int income;

	cout << "Введите свой доход: ";
	cin >> income;

	cout << "-----Расчитываем налог-----" << endl;

	if (income >= 50000) {
		if (income == 50000) { cout << "Сумма налога: " << (50000 - 10000) * 0.2 + 10000 * 0.13 << endl; }
		else {
			cout << "Сумма налога: " << (income - 50000) * 0.3 + (50000 - 10000) * 0.2 + 10000 * 0.13 << endl;
		}
	}
	else if (income >= 10000) {
		if (income == 10000) {
			cout << "Сумма налога: " << 10000 * 0.13 << endl;
		}
		else {
			cout << "Сумма налога: " << (income - 10000) * 0.2 + 10000 * 0.13 << endl;
		}
	}
	else if(income > 0) {
		cout << "Сумма налога: " << income * 0.13 << endl;
	}
	else if (income == 0) {
		cout << "Совсем денег нету? - не верю!" << endl;
	}
	else {
		cout << "Вы ввели неправильное значение..." << endl;
	}
}