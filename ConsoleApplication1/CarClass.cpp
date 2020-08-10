#include "CarClass.h"

void CarClass::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}

void CarClass::speedUp()
{
	speed += 10;
}
void CarClass::speedDown()
{
	speed -= 10;
}
void CarClass::show()
{
	cout << "===============" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << "===============" << endl;
}
int CarClass::getSpeed()
{
	return speed;
}
void CarClass::setSpeed(int s)
{
	speed = s;
}
int CarClass::getGear()
{
	return gear;
}
void CarClass::setGear(int g)
{
	gear = g;
}
string CarClass::getColor()
{
	return color;
}
void CarClass::setColor(string c)
{
	color = c;
}

CarClass::CarClass(): speed(0), gear(1), color("white")
{
	cout << "����Ʈ ������ ȣ��" << endl;
}


CarClass::~CarClass()
{
	cout << "�Ҹ��� ȣ��" << endl;
}
