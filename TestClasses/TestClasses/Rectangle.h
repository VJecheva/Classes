#pragma once
class Rectangle {
private:
	int a, b;
public: 
	Rectangle(int = 1, int = 1);
	void setA(int x);
	void setB(int);
	int getA()const;
	int getB()const;
	void print()const;
	int area()const;
	int perimeter()const;
};