#include <iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return length * breadth;
	}

	int primeter()
	{
		return 2 * (length* breadth);
	}

	void setBreadth(int b) {
		breadth = b;
	}

	int getBreadth() {
		return breadth;
	}

	~Rectangle()
	{
		cout << "Destructor ";
	}
};

/*
int main() {

	Rectangle r(10,5);
	cout << "Area " << r.area();
	cout << " Peremiter " << r.primeter() << endl;

	return 0;

}

*/
