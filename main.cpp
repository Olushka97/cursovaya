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
	cout << "�������� ��������:\n1 - ������� ���������� � ����������\n2 - �������� ����� ��������\n3 - ������� ���������� � ����������� ���������\n4 - �������� ����� ����������� �������\n5 - ������� ���������� � �������� ���������\n6 - �������� ����� �������� �������\n7 - �����\n";
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