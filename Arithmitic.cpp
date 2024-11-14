#include <iostream>

using namespace std;

template<class T>
class Arithmeitic
{

private:
	T a;
	T b;

public:
	Arithmeitic(T a, T b);
	T add();
	T sub();
};

template<class T>
	Arithmeitic<T>::Arithmeitic(T a, T b) {
		this->a = a;
		this->b = b;
	}

	template<class T>
	T Arithmeitic<T>::add()
	{

		T c;
		c = a + b;
		return c;
}
	template<class T>
	T Arithmeitic<T>::sub()
	{
		T c;
		c = a - b;
		return c;
	}
/*
Arithmeitic::~Arithmeitic()
{
}
*/



int main()
{
	Arithmeitic<char> ar('A', 'B'); // it mains this obj this->a
	//cout << "Add " << (int) ar.add()<<endl;
	//cout << "Sub " << (int) ar.sub() << endl;
	cout << "Add " <<  ar.add() <<endl;
	cout << "Sub " <<  ar.sub() << endl;

	return 0;
}
