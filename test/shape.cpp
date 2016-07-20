#include <iostream>
using namespace std;
class Shape {
public:
	virtual void showShape() = 0;
};
class Point : public Shape {
public:
	Point(int x = 0, int y = 0) : myX(x), myY(y){
	}
	virtual void showShape(){
		cout << "tihs is a point at (" << myX << ", " << myY << ")\n";
	}
protected:
	int myX;
	int myY;
};

class Circle : public Point {
public:
	Circle(int x = 0, int y = 0, int r = 1) : Point(x, y), mR(r) {
	}
	void showShape() {
		cout <<"this is circle (" << myX << ", " << myY << ", " << mR <<")\n";
	}
private:
	int mR;
};

class Rectangle : public Point {
public:
	Rectangle(int x = 0, int y = 0, int z = 0, int w = 0) : Point(x, y), myZ(z), myW(w) {
	}
	void showShape() {
		cout <<"this is Rectangle (" << myX << ", " << myY <<  ", " << myZ <<  ", " << myW <<")\n";
	}
protected:
	int myW;
	int myZ;
};

class Ellipse : public Rectangle {
public:
	Ellipse(int x = 0, int y = 0, int a = 0, int b = 0) : Rectangle(x, y, a, b) {
	}
	void showShape() {
		Point::showShape();
		Rectangle::showShape();
		cout <<"this is Ellipse (" << myX << ", " << myY <<  ", " << myZ <<  ", " << myW <<")\n";
	}
};