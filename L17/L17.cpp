#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);

using namespace std;

class A
{
	int a;
public:

	A() { cout << " constructor clasa A" << endl; this->a = NULL; }

	A(int a) :a(a) {}

	~A() { cout << " destructor clasa A" << endl; }

	void fA() { cout << "fA()" << endl; }
};

class B : virtual public A
{
	int b;
public:

	B() { cout << " constructor clasa B" << endl; this->b = NULL; }

	B(int b) :b(b) {}

	B(int b, int a) :b(b), A(a) {}

	~B() { cout << " destructor clasa B" << endl; }

	void fB() { cout << "fB()" << endl; }
};

class C : virtual public A
{
	int c;
public:

	C() { cout << " constructor clasa C" << endl; this->c = NULL; }

	C(int c) :c(c) {}

	C(int c, int a) :c(c), A(a) {}

	~C() { cout << " destructor clasa C" << endl; }

	void fC() { cout << "fC()" << endl; }
};

class D : public C, public B
{
	int d;
public:

	D() { cout << " constructor clasa D" << endl; this->d = NULL; }

	D(int d, int c, int b, int a) :d(d), C(c, a), B(b, a), A(a) {}

	~D() { cout << " destructor clasa D" << endl; }

	void fD() { cout << "fD()" << endl; }
};

class om
{
protected:
	string nume;
	int ani;
	bool gen;

public:
	om(string nume = "\0", int ani = NULL, bool gen = true, int d = NULL) : nume(nume), ani(ani), gen(gen) {};
	~om() {};

	const string getNUME() { return this->nume; }
	const int getani() { return this->ani; }
	const bool getgen() { return this->gen; }
};


class stud : public om
{
protected:
	string grupa;
	double media;

public:
	stud(string nume = "\0", int ani = NULL, bool gen = true, double media = NULL, string grupa = "\0") : media(media), grupa(grupa) { this->nume = nume; this->ani = ani; this->gen = gen; };
	~stud() {};

	const double getmedia() { return this->media; }
	const string getgrupa() { return this->grupa; }
};

// -> C -> A
// D
// -> B -> A

int main()
{
	D x;

	x.fA();

	D y(1, 2, 3, 4);
	
	stud B("ad", 14, 1, 14.4, "LPS2115");
	cout << B.getNUME() << endl;
	cout << B.getani() << endl;
	cout << B.getgen() << endl;
	cout << B.getmedia() << endl;
	cout << B.getgrupa() << endl;

	return 0;
}


/*

Sa se creeze clasa derivata automobil
1.Minim 4 clase de baza
2.Minim 5 proprietati protected, 3 private 


string nume;
string producator;
string tipul;
	int capacitatebac;
	int nr_locuri;
int anfabricare;
	bool volan; //0-> stanga  1->dreapta
	string cutie_de_viteze;
	string tip_tractiune;

*/