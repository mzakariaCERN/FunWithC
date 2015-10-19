#include <iostream>
using namespace std;

class classExample
{
	public: 
		void setX(int a);
		void print() const;

	private:
		int x;
};

void classExample::setX(int a)
{
	x = a;
}

void classExample::print() const
{
	cout << "x = " << x << endl;
}

int main()
{
	classExample *cExpPtr;
	classExample cExpObject;

	cExpPtr = &cExpObject;

	cExpPtr->setX(5);
	cExpPtr->print();

	return 0;
}
