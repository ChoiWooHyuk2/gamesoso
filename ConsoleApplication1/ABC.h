#pragma once
#include <iostream>
using namespace std;

class A
{
public:
	A() { std::cout << "������ A" << std::endl; }
	~A() { std::cout << "�Ҹ��� A" << std::endl; }
};

class B
{
public:
	B() { std::cout << "������ B" << std::endl; }
	~B() { std::cout << "�Ҹ��� B" << std::endl; }
};

class C
{
public:
	C() { std::cout << "������ C" << std::endl; }
	~C() { std::cout << "�Ҹ��� C" << std::endl; }
};


