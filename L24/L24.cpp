#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>
#include <exception>
#include <stdexcept>
#include <typeinfo>
#include <fstream>

#pragma warning( suppress : 4996);

using namespace std;

/*
r+b ios::in |ios::binary - ifstream
w+b ios::out|ios::binary - ofstream
a+b ios::app|ios::binary - fstream
*/

class x
{
	static int value;
public:
	static void get()
	{
		cout << "value = " << value << endl;
	}
	static void set(int x)
	{
		value = x;
	}
};

int x::value;


class test
{
public:
	virtual void f() = 0;
};

class abs1 : public test
{
public:
	int x;
	void f() { cout << "f abs1() " << endl; }
};

class abs2 : public test
{
public:
	double y;
	void f() { cout << "f abs2() " << endl; }
};






template <class T> //int,double,float etc.
class num 
{
	
public:
	T nr;
	num(T num = NULL) : nr(num) {}
	~num() {}

	void setn() { cin >> this->nr; }
	void setn(T n) { this->nr = n; }
	const T getn() const { return this->nr; }
};

template <class T> //valabil char/str
class chars 
{
	
public:
	T val;
	chars(T val = "\0") : val(val) {}
	~chars() {}

	void setval() { cin.getline(this->val, 256); }
	T setvalr() { return cin.getline(this->val, 256); }
	const T getval() const { return this->val; }
	const void getz() { cout << typeid(T).name(); }
};


template <class T0, class T1, class T2> //0.tip simplu 1,2 -> clase
class var
{
	T0 v0;
	T1 v1;
	T2 v2;
public:
	var(T0 v0 = NULL) : v0(v0) {  }
	~var() {}
	
	void set0() { cout << "Enter " << typeid(T0).name() << ": "; cin >> this->v0; }
	const T0 get0() { return this->v0;}

	void set1() { cout << "Enter " << typeid(T1).name() << ": "; cin >> this->v1.nr; }
	const T1 get1() { return this->v1.nr; }

	void set2() { /*cin.getline(this->v2.val, 256);*/ cout << "Enter " << typeid(T2).name() << ": "; cin >> this->v2.val; }
	const T2 get2() { return this->v2.val; }
};


int main()
{
	srand(time(0));
	
	

	//string s;

	//if (strcmp("class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >", typeid(s).name()) == 0 ) cout << typeid(s).name();
	

	var <int, num <int>, chars <string> > A;

	A.set0();
	A.set1();
	A.set2();

	cout << "v0 " << A.get0() <<endl;
	cout << "v1 " << A.get1().getn() << endl;
	cout << "v2 " << A.get2().getval() << endl;


	return 0;
}

/*

Acasa:Sa se realizeze
clasa var <template>


*/
