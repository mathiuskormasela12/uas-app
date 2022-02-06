#include <iostream>
using namespace std;

class Rectangle {
	int length;
	int width;

	public:int wide() {
		return (length * width);
	}

	public: void set_values(int x,int y) {
		length = x;
		width = y;
	}
};

class Triangle {
	int base;
	int height;

	public: float wide() {
		return (base * height * 0.5);
	}

	public: void set_values(int a, int t) {
		base = a;
		height = t;
	}
};

int main() {
	Rectangle RectangleOne;
	Triangle TriangleOne;

	RectangleOne.set_values(20, 10);
	TriangleOne.set_values(2, 5);
	
	cout << "Luas Persegi Panjang adalah " << RectangleOne.wide() << endl;
	cout << "Luas Segitiga adalah " << TriangleOne.wide() << endl;
}
