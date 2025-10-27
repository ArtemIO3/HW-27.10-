#include<iostream>
#include <cstdlib> 
using namespace std;
class Point
{
	int x;
	int y;
public:

	Point(int a = 0, int b = 0) :x(a), y(b) {}
	void Init(int a, int b) { x = a; y = b; };
	void Output() { cout << x << "\t" << y << "\n"; }
	void SetX(int a) { x = a; }
	int GetX() { return x; }
	void SetY(int b) { y = b; }
	int GetY() { return y; }

};
template<class T1, class T2>
class Numbers
{
	T1 a;
	T2 b;
public:
	Numbers() {	a = 0;	b = 0;}
	Numbers(T1 _a, T2 _b) { a = _a; b = _b; }
	void Init(T1 _a, T2 _b){a = _a;b = _b;}
	void InitRandom();
	void Output();
	void SetNumber(T1 c, T2 n) { a = c; b = n; }
	T1 GetA() { return a; }
	T2 GetB() { return b; }
};
template<class T1, class T2>
void Numbers<T1, T2>::InitRandom()
{
	a = rand() % 100;
	b = rand() % 100;
}

template<class T1, class T2>
void Numbers<T1, T2>::Output()
{
	cout << a << "\t" << b << endl;
}


template<>
void Numbers<Point, Point>::InitRandom()
{
	a = Point(rand() % 100, rand() % 100);
	b = Point(rand() % 100, rand() % 100);
}

template<>
void Numbers<Point, Point>::Output() {a.Output();b.Output();}

int main()
{
	srand(time(0));
	Point obj(1, 6);
	obj.Output();
	Numbers<int, double> obj1(10, 2.5);
	obj1.Output();
	Numbers<Point, Point> obj2(Point(1, 2), Point(3, 4));
	obj2.InitRandom();
	obj2.Output();
}