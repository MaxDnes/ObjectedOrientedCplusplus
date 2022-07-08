#include <iostream>
/*#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);
*/


/*

try 
{
	Bloc cod (ce cuazeaza exceptia_
}
catch()
{
	Bloc cod dupa exceptie
}
*/


using namespace std;

class A
{
public:int x = 1;
	  int y = 777;
	  A(int a = NULL) : x(1) {}
	  ~A() {}
	  virtual void f() { cout << "A" << endl; }
};

class B : public A
{
public:int x = 2;
	  B(int b = NULL) : x(2) {}
	  ~B() {}
	  void f() { cout << "B" << endl; }
	  virtual void ff() { cout << "B" << endl; }
};

class C : public B
{
public:int x = 3;
	  C(int c = NULL) : x(3) {}
	  ~C() {}
	  void f() { cout << "C" << endl; }
	  void ff() { cout << "C" << endl; }
};

class D : public B
{
public:int x;
	  D(int d = NULL) : x(3) {}
	  ~D() {}
	  void f() { cout << "D" << endl; }
	  void ff() { cout << "D" << endl; }
};
class E : public D
{
public: int x;
	  E(int x = NULL) : x(4) {}
	  ~E() {}
	  void ff() { cout << "E" << endl; }
};
/*
  -> B -> 0x001 A 0x001
D
  -> C -> 0xaf2 A 0x001
  D x.fA()
  -> A -> 0xda1 f() 0xcb3
  -> B -> 0xaf2 f() 0xcb3
  -> C -> 0xcb3 f() 0xcb3
  C x;
  x.f();
 */


int main()
{
	//int x;
	/*char sir[256];

	try 
	{
		cout << "Enter x" << endl;
		cin >> x;
		if (x == 123) throw 1;
		else if (x == 321) throw 1.1;
		else if (x == 333) throw true;
		else if (x == 444) throw "step";
		else if (x == 555) throw sir;

		cout << "x = " << x << endl;
	}
	catch (int err)
	{
		cout << " err int " << err << endl;
	}
	catch (double err)
	{
		cout << " err double " << err << endl;
	}
	catch (bool err)
	{
		cout << " err bool " << err << endl;
	}
	catch (char err[])
	{
		cout << " err char " << err << endl;
	}
	catch (const char err[])
	{
		cout << " err const char " << err << endl;
	}
	*/



	int a, b;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	

	try
	{
		if (b == 0 && a == 0) throw 'c';
		if (b == 0) throw b;
		cout << a << " / " << b << " = " << double(a) / b << endl;
	}
	catch (int)
	{
		cout << " b = 0 error " << endl;
	}
	catch (char)
	{
		cout << " a = 0 error\nb = 0 error " << endl;
	}

	int c;

	cout << "c = "; cin >> c;

	try
	{
		if (c < 0) throw '-';
		cout << "square root of " << c << " = " << sqrt(c);
	}
	catch (char)
	{
		cout << " c < 0 error " << endl;
	}
	
	return 0;
}

/*

Sa se calculeze a/b
0/0 de prelucrat
radical -> la dorinta

*/