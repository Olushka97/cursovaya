#include <iostream>
#include <string>
#include <fstream>
#include <CoreWindow.h>
#include <sstream> 
#include "phone.h"
#define sputnic  "C:/Users/User/Desktop/Школа/6 semestr/Курсовая файлы/satellitephone.txt"
#define  smartphone "C:/Users/User/Desktop/Школа/6 semestr/Курсовая файлы/smartphone.txt"
#define homephone  "C:/Users/User/Desktop/Школа/6 semestr/Курсовая файлы/homephone.txt"
void Phone::setproductionyear(int pr)
{ 
	productionyear = pr;
};
int Phone::getproductionyear() {
	return productionyear;
};
void Phone::setcolor(string c) {
	color = c;
};
string Phone::getcolor() {
	return color;
};

void Phone::setperfomance(float per)
{
	perfomance = per;
};
float Phone::getperfomance() {
	return perfomance;
};

void Phone::setmegapixel(int mega)
{
	megapixel = mega;
};
int Phone::getmegapixel() {
	return megapixel;
};
void Phone::setmemory(int mem)
{
	memory = mem;
};
int Phone::getmemory() {
	return memory;
};

void Phone::setscreensize(string scr)
{
	screensize = scr;
};
string Phone::getscreensize() {
	return screensize;
};

void Phone::setsensorpresence(string sens)
{
	sensorpresence = sens;
};
string Phone::getsensorpresence() {
	return sensorpresence;
};

void Phone::setcommunicationtype(string com)
{
	communicationtype = com;
};
string Phone::getcommunicationtype() {
	return communicationtype;
};

void Phone::setwifi(string w)
{
	wifi = w;
};
string Phone::getwifi() {
	return wifi;
};

void Phone::setfourG(string f)
{
	fourG = f;
};
string Phone::getfourG() {
	return fourG;
};

void Phone::setkeyboard(string k)
{
	keyboard = k;
};
string Phone::getkeyboard() {
	return keyboard;
};

void Phone::setGPS(string G)
{
	GPS = G;
};
string Phone::getGPS() {
	return GPS;
};

void Phone::setglonas(string g)
{
	glonas = g;
};
string Phone::getglonas() {
	return glonas;
};
void Phone:: addingsatellitephone() {//Ввод в файл нового устройства
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pr, per; string c, sens, com, G, g, k;
	std::ofstream out;
	out.open(sputnic, std::ios::app);
	try {
		cout << "Введите год выпуска устройства - ";
		cin >> pr;
		Phone::getInstance()->setproductionyear(pr);
		Phone::getInstance()->getproductionyear();
		cout << "Введите цвет устройства - ";
		cin >> c;
		Phone::getInstance()->setcolor(c);
		Phone::getInstance()->getcolor();
		cout << "Введите производительность устройства (в Гц) - ";
		cin >> per;
		Phone::getInstance()->setperfomance(per);
		Phone::getInstance()->getperfomance();
		cout << "Есть ли сенсор у устройства (да/нет) - ";
		cin >> sens;
		Phone::getInstance()->setsensorpresence(sens);
		Phone::getInstance()->getsensorpresence();
		cout << "Введите тип связи (спутниковая/сотовая/стационарная) - ";
		cin >> com;
		Phone::getInstance()->setcommunicationtype(com);
		Phone::getInstance()->getcommunicationtype();
		cout << "Есть ли GPS у устройства (да/нет) - ";
		cin >> G;
		Phone::getInstance()->setGPS(G);
		Phone::getInstance()->getGPS();
		cout << "Есть ли глонас у устройства (да/нет) - ";
		cin >> g;
		Phone::getInstance()->setglonas(g);
		Phone::getInstance()->getglonas();
		cout << "Есть ли клавиатура у устройства (да/нет) - ";
		cin >> k;
		Phone::getInstance()->setkeyboard(k);
		Phone::getInstance()->getkeyboard();
		out << "Год производства -  " << pr << " ";
		out << "Цвет -  " << c << " ";
		out << "Производительность -  " << per << " Гц ";
		out << "Наличие сенсора: " << sens << " ";
		out << "Тип связи " << com << " ";
		out << "GPS: " << G << " ";
		out << "Наличие глонасса: " << g << " ";
		out << "Наличие клавиатуры: " << k << endl;
		out.close();
	}
	catch (...) {
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
};
void Phone::addingsmartphone() {//Ввод в файл нового устройства
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pr, per, mega, mem; string c, sens, com, G, w, k, f, scr;
	std::ofstream out;
	out.open(smartphone, std::ios::app);
	try {
		cout << "Введите год выпуска устройства - ";
		cin >> pr;
		Phone::getInstance()->setproductionyear(pr);
		Phone::getInstance()->getproductionyear();
		cout << "Введите цвет устройства - ";
		cin >> c;
		Phone::getInstance()->setcolor(c);
		Phone::getInstance()->getcolor();
		cout << "Введите производительность устройства (в Гц) - ";
		cin >> per;
		Phone::getInstance()->setperfomance(per);
		Phone::getInstance()->getperfomance();
		cout << "Есть ли сенсор у устройства (да/нет) - ";
		cin >> sens;
		Phone::getInstance()->setsensorpresence(sens);
		Phone::getInstance()->getsensorpresence();
		cout << "Введите тип связи (спутниковая/сотовая/стационарная) - ";
		cin >> com;
		Phone::getInstance()->setcommunicationtype(com);
		Phone::getInstance()->getcommunicationtype();
		cout << "Есть ли GPS у устройства (да/нет) - ";
		cin >> G;
		Phone::getInstance()->setGPS(G);
		Phone::getInstance()->getGPS();
		cout << "Сколько мегапикселей камера - ";
		cin >> mega;
		Phone::getInstance()->setmegapixel(mega);
		Phone::getInstance()->getmegapixel();
		cout << "Какой размер экрана - ";
		cin >> scr;
		Phone::getInstance()->setscreensize(scr);
		Phone::getInstance()->getscreensize();
		cout << "Есть ли у устройства wi-fi (да/нет) - ";
		cin >> w;
		Phone::getInstance()->setwifi(w);
		Phone::getInstance()->getwifi();
		cout << "Какая у устройства память (Гб ) - ";
		cin >> mem;
		Phone::getInstance()->setmemory(mem);
		Phone::getInstance()->getmemory();
		cout << "Есть ли у устройства 4G (да/нет) - ";
		cin >> f;
		Phone::getInstance()->setfourG(f);
		Phone::getInstance()->getfourG();
		cout << "Есть ли клавиатура у устройства (да/нет) - ";
		cin >> k;
		Phone::getInstance()->setkeyboard(k);
		Phone::getInstance()->getkeyboard();
		out << "Год производства -  " << pr << " ";
		out << "Цвет -  " << c << " ";
		out << "Производительность -  " << per << " Гц ";
		out << "Наличие сенсора: " << sens << " ";
		out << "Тип связи " << com << " ";
		out << "GPS: " << G << " ";
		out << "Камера: " << mega << " Мп ";
		out << "Экран: " << scr << " ";
		out << "Wi-fi: " << w << " ";
		out << "Память: " << mem << " Гб ";
		out << "4G: " << f << " ";
		out << "Наличие клавиатуры: " << k << endl;
		out.close();
	}
	catch (...) {
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
};
void Phone::addinghomephone() {//Ввод в файл нового устройства
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pr; string c, sens, com, k;
	std::ofstream out;
	out.open(homephone, std::ios::app);
	try {
		cout << "Введите год выпуска устройства - ";
		cin >> pr;
		Phone::getInstance()->setproductionyear(pr);
		Phone::getInstance()->getproductionyear();
		cout << "Введите цвет устройства - ";
		cin >> c;
		Phone::getInstance()->setcolor(c);
		Phone::getInstance()->getcolor();
		cout << "Есть ли сенсор у устройства (да/нет) - ";
		cin >> sens;
		Phone::getInstance()->setsensorpresence(sens);
		Phone::getInstance()->getsensorpresence();
		cout << "Введите тип связи (спутниковая/сотовая/стационарная) - ";
		cin >> com;
		Phone::getInstance()->setcommunicationtype(com);
		Phone::getInstance()->getcommunicationtype();
		cout << "Есть ли клавиатура у устройства (да/нет) - ";
		cin >> k;
		Phone::getInstance()->setkeyboard(k);
		Phone::getInstance()->getkeyboard();
		out << "Год производства -  " << pr << " ";
		out << "Цвет -  " << c << " ";
		out << "Наличие сенсора: " << sens << " ";
		out << "Тип связи " << com << " ";
		out << "Наличие клавиатуры: " << k << endl;
		out.close();
	}
	catch(...) {
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
};
void Phone:: readsatellitephone() { //чтение устройств из файла
	std::ifstream in;
	string line;
	in.open(sputnic);
	try {
		while (!in.eof()) {
			getline(in, line);
			cout << line << endl;
		}
		}
	catch (...) {
			cout << "Файл не может быть открыт!\n";
			getchar();
		}
	in.close();
};
void Phone::readsmartphone() { //чтение устройств из файла
	std::ifstream in;
	string line;
	in.open(smartphone);
	try 
		{
		while (!in.eof()) {
			getline(in, line);
			cout << line << endl;
		}
		}
	catch (...) {
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
	in.close();
};
void Phone::readhomephone() { //чтение устройств из файла
	std::ifstream in;
	string line;
	in.open(homephone);
	try
		{
		while (!in.eof()) {
			getline(in, line);
			cout << line << endl;
		}
		}
	catch (...) {
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
	in.close();
};