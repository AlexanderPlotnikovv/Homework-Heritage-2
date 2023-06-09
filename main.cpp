#include<iostream>

class Figure {
protected:
	std::string Name;
	Figure (std::string Name) : Name(Name) {}
public:
	Figure() {}
	std::string coutName() {
		return Name;
	}
	virtual void print_info() {};
};

class Triangle : public Figure {
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	Triangle (int a, int b, int c, int A, int B, int C, std::string Name) : a(a), b(b), c(c), A(A), B(B), C(C), Figure(Name) {}
public:
	Triangle() : Triangle(10, 20, 30, 50, 60, 70, "Triangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class Quadrangle : public Figure {
protected:
	int a1;
	int b1;
	int c1;
	int d1;
	int A1;
	int B1;
	int C1;
	int D1;
	Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name) : a1(a1), b1(b1), c1(c1), d1(d1), A1(A1), B1(B1), C1(C1), D1(D1), Figure(Name) {}
public:
	Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Quadrangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

class RectangularTriangle : public Triangle {
public:
	RectangularTriangle() : Triangle(10, 20, 30, 50, 60, 90, "Rectangular triangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle() : Triangle(10,20,10,50,60,50, "Isosceles triangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class EqualateralTriangle : public Triangle {
public:
	EqualateralTriangle() : Triangle(30,30,30,60,60,60, "Equalateral triangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram() : Quadrangle(20,30,20,30,30,40,30,40, "Parallelogram") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

class Rectangle : public Quadrangle {
public:
	Rectangle() : Quadrangle(10,20,10,20,90,90,90,90, "Rectangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

class Rhomb : public Quadrangle {
public:
	Rhomb() : Quadrangle(30,30,30,30,30,40,30,40, "Rhomb") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

class Square : public Quadrangle {
public:
	Square() : Quadrangle(20,20,20,20,90,90,90,90, "Square") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

int main()
{
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
	RectangularTriangle rectangularTriangle;
	IsoscelesTriangle isoscelesTriangle;
	EqualateralTriangle equalateralTriangle;
	Parallelogram parallelogram;
	Rectangle rectangle;
	Rhomb rhomb;
	Square square;
	triangle.print_info();
	quadrangle.print_info();
	rectangularTriangle.print_info();
	isoscelesTriangle.print_info();
	equalateralTriangle.print_info();
	parallelogram.print_info();
	rectangle.print_info();
	rhomb.print_info();
	square.print_info();
	return 0;
}