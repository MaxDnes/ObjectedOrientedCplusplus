#include <iostream>
/*#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);
*/

using namespace std;
/*
class A
{
    int a;
public:
    A() { cout << " constructor clasa A" << endl; a = NULL; }
    ~A() { cout << " destructor clasa A" << endl; }
    void fA() { cout << "fA()" << endl; }
protected:
    int xa;
};
class B : public A
{
    int b;
public:
    B() { cout << " constructor clasa B" << endl; b = NULL;  }
    ~B() { cout << " destructor clasa B" << endl; }
    void fB() { cout << "fB()" << endl; }
protected:
    int xb;
};
*/
/*
class A
{
    int a;
public:
    A() { cout << " constructor clasa A" << endl; a = NULL; }
    ~A() { cout << " destructor clasa A" << endl; }
    void fA() { cout << "fA()" << endl; }
protected:
    int xa;
};

class B : protected A
{
    int b;
public:
    B() { cout << " constructor clasa B" << endl; b = NULL; }
    ~B() { cout << " destructor clasa B" << endl; }
    void fB() { cout << "fB()" << endl; }
    void Fx() {  };
protected:
    int xb;
    
    void f2() { fA(); this->xa; } // : protected are tot inafara de private numai pe teritoriul clasei
};                                // : protected nu poate fi gasita in main

class C : protected B
{
    int c;
public:
    C() { cout << " constructor clasa A" << endl; c = NULL; }
    ~C() { cout << " destructor clasa A" << endl; }
    void fC() { cout << "fA()" << endl; }
    void f3() { Fx(); this->xb; }
protected:
    int xc;
    void f31() { Fx(); this->xb; }
};
*/

class A
{
private:
    int a;
public:
    A() { cout << " constructor clasa A" << endl; a = NULL; }
    ~A() { cout << " destructor clasa A" << endl; }
    void fA() { cout << "fA()" << endl; }
    const int seta(int x) { this->a = x; }
    const void geta() { cout << this->a; }
protected:
    int xa;
};

class B : private A
{
    int b;
public:
    B() { cout << " constructor clasa B" << endl; b = NULL; }
    ~B() { cout << " destructor clasa B" << endl;  }
    void fB() { cout << "fB()" << endl; this->xa = 147; seta(14); geta(); }
    void Fx() {  };
protected:
    int xb;
    void f2() { fA(); this->xa; } //la B nu exista legaturi noi nu poate fi mostenit cu info de la alte clase cu : private
};

int main()
{
    B x;
    x.Fx();
	

	return 0;
}


/*

Sa se creeze clasa derivata automobil
1.Minim 4 clase de baza
2.Minim 5 proprietati protected, 3 private

*/