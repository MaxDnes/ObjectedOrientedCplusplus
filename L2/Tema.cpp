#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>

using namespace std;

class abc
{
	int value, n;
public:

	void setVAL2();
	void setVALn();
	void setVALR();

	const int getVAL() const;
	const int getVALa() const;
	const int getVALb() const;
	const int getVALc() const;
	const int getVALn() const;
	const int getVALR() const;

};

void abc::setVAL2()
{
	value = rand() % 15;
}

void abc::setVALn()
{
	system("cls");
	cout << "n=";
	cin >> value;
}


const int abc::getVAL() const { return value; };


int main()
{
	srand(time(0));

	abc a,b,c,n,R;

	a.setVAL2();
	cout << a.getVAL();

	return 0;
}