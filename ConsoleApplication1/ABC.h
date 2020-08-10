#pragma once
#include <iostream>
using namespace std;

class A
{
public:
	A() { std::cout << "持失切 A" << std::endl; }
	~A() { std::cout << "社瑚切 A" << std::endl; }
};

class B
{
public:
	B() { std::cout << "持失切 B" << std::endl; }
	~B() { std::cout << "社瑚切 B" << std::endl; }
};

class C
{
public:
	C() { std::cout << "持失切 C" << std::endl; }
	~C() { std::cout << "社瑚切 C" << std::endl; }
};


