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
    ~B() { cout << " destructor clasa B" << endl; }
    void fB() { cout << "fB()" << endl; this->xa = 147; seta(14); geta(); }
    void Fx() {  };
protected:
    int xb;
    void f2() { fA(); this->xa; } //la B nu exista legaturi noi nu poate fi mostenit cu info de la alte clase cu : private
};

   // tip mostenire  ::
   //  1. public :       class derivata :  public clasa_de_baza
    //      public  ->  public
    //   protected  ->  protected
    //     private  ->  nu se mosteneste
    //  2. protected :       class derivata :  protected clasa_de_baza
    //      public  ->  protected
    //   protected  ->  protected
    //     private  ->  nu se mosteneste
    //  3. privat :       class derivata :  privat clasa_de_baza (se mosteneste doar o singura data)
    //      public  ->  private
    //   protected  ->  private
    //     private  ->  nu se mostenes

*/




class culoareauto
{
protected:
	string culoare;
public:
	culoareauto(string culoare = "\0") : culoare(culoare) {}
	~culoareauto() {}
	const string getculoare() { return this->culoare; }
};


class infoauto 
{
	int anfabricare;
	bool volan; //0-> stanga  1->dreapta
	string cutie_de_viteze;
	string tip_tractiune;
public:
	infoauto(int anfabricare = NULL, bool volan = false, string cutie_de_viteze = "\0", string tip_tractiune = "\0") : anfabricare(anfabricare), volan(volan), cutie_de_viteze(cutie_de_viteze), tip_tractiune(tip_tractiune) {}
	~infoauto() {}
	const int getanfabricare() { return this->anfabricare; }
	const bool getvolan() { return this->volan; }
	const string getcutie_de_viteze() { return this->cutie_de_viteze; }
	const string gettip_tractiune() { return this->tip_tractiune; }
};



class tip_capacitate
{
protected:
	string tipul;
	int capacitatebac;
	int nr_locuri;
public:
	tip_capacitate(string tipul = "\0", int capacitatebac = NULL, int nr_locuri = NULL) : tipul(tipul), capacitatebac(capacitatebac), nr_locuri(nr_locuri) {}
	~tip_capacitate() {}
	const string getipul() { return this->tipul; }
	const int getcapacitatebac() { return this->capacitatebac; }
	const int getnrlocuri() { return this->nr_locuri; }

};


class marca
{
protected:
	string producator;
public:
	marca(string producator = "\0") : producator(producator) {}
	~marca() {}
	const string getproducator() { return this->producator; }
};


class automobil : private marca, private culoareauto, public tip_capacitate, protected infoauto
{
protected:
	string nume;
public:
	automobil(string nume = "\0", string culoare = "\0", string producator = "\0", string tipul = "\0", int capacitatebac = NULL, int nr_locuri = NULL, int anfabricare = NULL, bool volan = false, string cutie_de_viteze = "\0", string tip_tractiune = "\0") : nume(nume), infoauto(anfabricare, volan, cutie_de_viteze, tip_tractiune), culoareauto(culoare)
	{
		this->producator = producator;
		this->tipul = tipul;
		this->capacitatebac = capacitatebac;
		this->nr_locuri = nr_locuri;
	}
	~automobil() {}
	const string getnume() { return this->nume; }
    const string getcolor() { return this->culoare; }
    const string getprod() { return this->producator; }
    const int getanfabric() { return getanfabricare(); }
    const bool getvol() { return  getvolan(); }
    const string getcutieviteze() { return getcutie_de_viteze();; }
    const string gettiptract() { return gettip_tractiune(); }
};


class A
{
    int a;
public:
    A(int a = NULL) : a(a),xa(NULL) {}
    ~A() {}
    void fA() { cout << "fA"; }
    const int geta() {  return this->a; }
    const void seta(int x) { this->a = x; }
protected:
    int xa;
};

class B : private A
{
    int b;
public:
    B(int b = NULL) : b(b), xb(NULL) {}
    const int getb() { return this->b; }
    const void setb(int x) { this->b = x; }
    const int bgeta() { return this->geta(); }
    const int bseta(int x) { seta(x); return this->geta(); }
    const int xax() { return this->xa; }
    ~B() {}

protected:
    int xb;
};

class C 
{
    int c;
public:
    C(int c = NULL) : c(c),xc(NULL) {}
    ~C() {}
    const int getc() { return this->c; }
    const void setc(int x) { this->c = x; }
protected:
    int xc;
};

class D : private C
{
    int d;
public:
    D(int d = NULL) : d(d),xd(NULL) {}
    ~D() {}
    const int getd() { return this->d; }
    const void setd(int x) { this->d = x; }
    const int dgetc() { setc(9); return this->getc(); }
    const void dsetc(int x) { setc(x); }
    const int xcx() { return this->xc; }

protected:
    int xd;
};

class E : protected B
{
    int e;
public:
    E(int e = NULL) : e(e),xe(NULL) {}
    ~E() {}
    const int gete() { return this->e; }
    const void sete(int x) { this->e = x; }
    const int egeta() { bseta(5); return this->bgeta(); }
    const int xbx() { return this->xb; }

protected:
    int xe;
};

class F : protected D
{
    int f;
public:
    F(int f = NULL) : f(f),xf(NULL) {}
    ~F() {}
    const int getf() { return this->f; }
    const void setf(int x) { this->f = x; }
    const int fgetd() { setd(12); return this->getd(); }
    const int xdx() { return this->xd; }

protected:
    int xf;
};

class G : public F
{
    int g;
public:
    G(int g = NULL) : g(g),xg(NULL) {}
    ~G() {}
    const int getg() { return this->g; }
    const void setg(int x) { this->g = x; }
    const int ggetd() { setf(21); return this->getd(); }
    const int xfx() { return this->xf; }

protected:
    int xg;
};

int main()
{
    
	
	automobil Z("Corrola", "alb", "Toyota", "Sedan", 1231, 4, 2005, false, "mecanica", "din spate");
    
	cout << Z.getnume() << endl;
	cout << Z.getcolor() << endl;
	cout << Z.getprod() << endl;
	cout << Z.getipul() << endl;
	cout << Z.getcapacitatebac() << endl;
	cout << Z.getnrlocuri() << endl;
	cout << Z.getanfabric() << endl;
	cout << Z.getvol() << endl;
	cout << Z.getcutieviteze() << endl;
	cout << Z.gettiptract() << endl;
	
    A a(1);
    B b(2);
    C c(3);
    D d(4);
    E e(5);
    F f(6);
    G g(7);

    cout << a.geta() << endl;
    cout << b.getb() << endl;
    cout << c.getc() << endl;
    cout << d.getd() << endl;
    cout << e.gete() << endl;
    cout << f.getf() << endl;
    cout << g.getg() << endl;

    cout << b.bgeta() << endl;
    cout << d.dgetc() << endl;
    cout << e.egeta() << endl;
    cout << f.fgetd() << endl;
    cout << g.ggetd() << endl;
    cout << g.getf() << endl;

    cout << '\\' << endl;
    cout << b.xax() << endl;
    cout << d.xcx() << endl;
    cout << e.xbx() << endl;
    cout << f.xdx() << endl;
    cout << g.xfx() << endl;
    
    return 0;
}


/*

Sa se creeze clasa derivata automobil
1.Minim 4 clase de baza
2.Minim 5 proprietati protected, 3 private
 sa se recapituleze legaturile de tip mostenire

 */


 // tip mostenire  ::
 //  1. public :       class derivata :  public clasa_de_baza
  //      public  ->  public
  //   protected  ->  protected
  //     private  ->  nu se mosteneste
  //  2. protected :       class derivata :  protected clasa_de_baza
  //      public  ->  protected
  //   protected  ->  protected
  //     private  ->  nu se mosteneste
  //  3. privat :       class derivata :  privat clasa_de_baza (se mosteneste doar o singura data)
  //      public  ->  private
  //   protected  ->  private
  //     private  ->  nu se mostenes