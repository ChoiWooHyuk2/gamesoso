#pragma once
#include<iostream>
#include<string>

using namespace std;

class CarClass
{
private:
	int speed;
	int gear;
	string color;
public:
	void init(int s,int g,string c);
	void speedUp();
	void speedDown();
	void show();
	int getSpeed();
	void setSpeed(int s);
	int getGear();
	void setGear(int g);
	string getColor();
	void setColor(string c);
	CarClass();
	~CarClass();
};


