#include <iostream>
/*#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);
*/

using namespace std;

class A
{
public:int x=1;
	int y = 777;
	A(int a = NULL) : x(1) {}
	~A() {}
	virtual void f() { cout << "A" << endl; }
};

class B : public A
{
public:int x=2;
	B(int b = NULL) : x(2) {}
	~B() {}
	void f() { cout << "B" << endl; }
	virtual void ff() { cout << "B" << endl; }
};

class C : public B
{
public:int x=3;
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
class f : E
{
	void fa() { cout << "fasd"; };
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
void fff()
{
}

int main()
{
	C xxx;
	
	cout << xxx.A::x << endl;
	cout << xxx.B::x << endl;
	cout << xxx.C::x << endl;

	C *yyy = new C;

	yyy->f();

	cout << yyy->A::x << endl;
	cout << yyy->B::x << endl;
	cout << yyy->C::x << endl;

	cout << endl;

	A a;
	B b;
	C c;
	D d;
	E e;

	A *p = new A;
	p->f();
	p = &b;
	p->f();
	p = &c;
	p->f();
	p = &a;
	p->f();

	cout << endl;

	B* p2 = new B;
	p2 = &b;
	p2->ff();
	p2 = &c;
	p2->ff();
	p2 = &d;
	p2->ff();
	p2 = &e;
	p2->ff();

	f z;
	z.ff();

	return 0;
}

/*

ff()

*/