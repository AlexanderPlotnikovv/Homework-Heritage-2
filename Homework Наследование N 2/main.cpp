#include<iostream>

class Figure {
protected:
	std::string Name;
	Figure (std::string Name) : Name(Name) {}
public:
	Figure() {}
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
public:
	Triangle(int a, int b, int c, int A, int B, int C, std::string Name) : a(a), b(b), c(c), A(A), B(B), C(C), Figure(Name) {}
	Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a,b,c,A,B,C, "Triangle") {}
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
public:
	Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name) : a1(a1), b1(b1), c1(c1), d1(d1), A1(A1), B1(B1), C1(C1), D1(D1), Figure(Name) {}
	Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Quadrangle(a1,b1,c1,d1,A1,B1,C1,D1, "Quadrangle") {}
	void print_info() override {
		std::cout << Name << ":" << std::endl;
		std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
		std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
		std::cout << std::endl;
	}
};

class RectangularTriangle : public Triangle {
public:
	RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "Rectangular triangle") {}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a,b,a,A,B,A, "Isosceles triangle") {}
};

class EqualateralTriangle : public Triangle {
public:
	EqualateralTriangle(int a) : Triangle(a,a,a,60,60,60, "Equalateral triangle") {}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a1, int b1, int A1, int B1) : Quadrangle(a1,b1,a1,b1,A1,B1,A1,B1, "Parallelogram") {}
};

class Rectangle : public Quadrangle {
public:
	Rectangle(int a1, int b1) : Quadrangle(a1,b1,a1,b1,90,90,90,90,"Rectangle") {}
};

class Rhomb : public Quadrangle {
public:
	Rhomb(int a1, int A1, int B1) : Quadrangle(a1,a1,a1,a1,A1,B1,A1,B1, "Rhomb") {}
};

class Square : public Quadrangle {
public:
	Square(int a1) : Quadrangle(a1,a1,a1,a1,90,90,90,90, "Square") {}
};

void printinfo(Figure* p) {
	p->print_info();
}

int main()
{
	Triangle triangle(10,20,30,50,60,70);
	Quadrangle quadrangle(10,20,30,40,70,110,60,120);
	RectangularTriangle rectangularTriangle(20,30,40,50,40);
	IsoscelesTriangle isoscelesTriangle(30,40,50,60);
	EqualateralTriangle equalateralTriangle(30);
	Parallelogram parallelogram(20,30,30,40);
	Rectangle rectangle(20,30);
	Rhomb rhomb(30,30,40);
	Square square(20);
	printinfo(&triangle);
	printinfo(&quadrangle);
	printinfo(&rectangularTriangle);
	printinfo(&isoscelesTriangle);
	printinfo(&equalateralTriangle);
	printinfo(&parallelogram);
	printinfo(&rectangle);
	printinfo(&rhomb);
	printinfo(&square);
	return 0;
}