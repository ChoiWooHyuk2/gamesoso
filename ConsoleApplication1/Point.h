#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point
{
private :
	int x, y;
public :
	void setPosition(int x,int y) {
		this->x = x;
		this->y = y;
	}

	void showPosition() {
		std::cout << x << "," << y << std::endl;
	}
};

class ColorPoint : public Point {

private :
	string color;


public:
	void setColor(string s) {
		color = s;
	}

	void showColor() {
		std::cout << color << std::endl;
	}

};
