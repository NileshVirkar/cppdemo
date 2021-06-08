
#include <iostream>

class Shape {

	int* canvas;

public:

	Shape() {
		canvas = new int;
	}

	//Base Class with virtual functions must have virtual destructor.
	virtual ~Shape() {
		std::cout << "\nDctor::Shape()";
		delete canvas;
	}

	virtual bool draw() = 0;
};


class Circle : public Shape {

	int radius;
	int *circle;

public:

	Circle() {
		circle = new int;
	}

	~Circle() {
		std::cout << "\nDctor::Circle()";
		delete circle;
	}

	bool draw() {
		//draw circle on canvas
		return true;
	}
};

class A {
public:
	virtual void show() {

	}
	virtual ~A() {

	}
};

class B : public A {
public:

	void show() {

	}

	~B() {
		//jkdjdkk
	}
};

//int main() {
//
//	A* obj = new B();
//
//	delete obj;
//
//	return 0;
//
//}

//int main() {
//
//	Shape *obj = new Circle();
//	delete obj;
//
//	std::cout << std::endl;
//	return 0;
//}