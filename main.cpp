#include <iostream>
#include <string>
#include <fstream>
#include <CoreWindow.h>
#include <sstream> 
#include "Phone.h"
int main() {
	int ustr;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	while (true) {
	cout << "Выберите действие:\n1 - Вывести информацию о смартфонах\n2 - Добавить новый смартфон\n3 - Вывести информацию о спутниковых телефонах\n4 - Добавить новый спутниковый телефон\n5 - Вывести информацию о домашних телефонах\n6 - Добавить новый домашний телефон\n7 - Выход\n";
	cin >> ustr;
		switch (ustr)
		{
		case 1:
			Phone::getInstance()->readsmartphone();
			break;
		case 2:
			Phone::getInstance()->addingsmartphone();
			break;
		case 3:
			Phone::getInstance()->readsatellitephone();
			break;
		case 4:
			Phone::getInstance()->addingsatellitephone();
			break;
		case 5:
			Phone::getInstance()->readhomephone();
			break;
		case 6:
			Phone::getInstance()->addinghomephone();
			break;

		case 7:
		{return 0; }
		break;
		}
	}
}