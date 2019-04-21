#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 
#include <CoreWindow.h>
using namespace std;
class Phone {
public:
	// ‘ункци€-член дл€ доступа к единственному экземпл€ру
	static Phone* getInstance() {
		static Phone instance;
		return &instance;
	}
	// Ќаполн€ем полезным функционалом, как и любой другой класс
private:
		int productionyear;
		string color;
		float perfomance;
		string sensorpresence;
		string communicationtype;

		string wifi;
		string fourG;
		int megapixel;
		int memory;
		string screensize;
		string keyboard;

		string GPS;
		string glonas;
public:
	void setproductionyear(int pr);
	int getproductionyear();

	void setcolor(string c);
	string getcolor();

	void setperfomance(float per);
	float getperfomance();

	void setmegapixel(int mega);
	int getmegapixel();
	void setmemory(int mem);
	int getmemory();

	void setscreensize(string scr);
	string getscreensize();

	void setsensorpresence(string sens);
	string getsensorpresence();

	void setcommunicationtype(string com);
	string getcommunicationtype();

	void setwifi(string w);
	string getwifi();

	void setfourG(string f);
	string getfourG();

	void setkeyboard(string k);
	string getkeyboard();

	void setGPS(string G);
	string getGPS();

	void setglonas(string g);
	string getglonas();

	void addingsatellitephone();
	void addingsmartphone(); 
	void addinghomephone();
	void readsatellitephone(); 
	void readsmartphone();
	void readhomephone();
private:
	// ќбъ€вл€ем конструктор закрытым, чтобы нельз€ было
	// создавать экземпл€ры класса извне
	Phone() { }
};


