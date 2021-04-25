#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "BadExeption.h"
using namespace std;
class Point
{
	double first, second;
public:
	Point();  //конструктор без аргументів(за замовчуванням)
	Point(double, double) throw (BadException, invalid_argument, bad_exception); //конструктор ініціалізації
	Point(const Point&);  //конструктор копіювання

	void SetFirst(double);
	void SetSecond(double);
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }

	Point& operator = (const Point&);  //операція присвоєння
	operator string() const;     //виведення значень на екран

	friend ostream& operator << (ostream&, const Point&); //перевантаження функції виведення
	friend istream& operator >> (istream&, Point&) throw(const char*, bad_exception&); //перевантаження функції введення

	void distance();  //знаходження відстані між координатами

	Point& operator++(); //перевантаження операції "інкременту"(префіксна форма) - first
	Point& operator--(); //перевантаження операції "дикременту"(префіксна форма) - second
	Point operator++(int); //перевантаження операції "інкременту" (постфіксна форма) - first
	Point operator--(int); //перевантаження операції "дикременту" (постфіксна форма) - second
};
