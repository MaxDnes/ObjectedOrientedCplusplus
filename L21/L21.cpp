#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>
#include <exception>
#include <stdexcept>
#include <typeinfo>

#pragma warning(suppress : 4996);



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

class ABC
{
public:int x = 1;
	  int y = 777;
	  ABC(int a = NULL) : x(1) {}
	  ~ABC() {}
	  virtual void f() { cout << "A" << endl; }
};


void f()
{
    int x;
    char sir[256];
    cout << " Enter x = ";
    cin >> x;
    if (x == 123) throw 1;
    else if (x == 321) throw 2.2;
    else if (x == 333) throw true;
    else if (x == 444) throw "step";
    else if (x == 555) throw sir;
    cout << " x = " << x << endl;
}
class xxx
{
public:
    xxx() { throw 1; }
};

template <typename T>
T suma(T v[], int n)
{
    T s;
    char x = *typeid(T).name();
    switch(x)
    {
    case 'i': s = 0; for (int i = 0; i < n; i++) s += v[i]; break;
    case 'd': s = 0; for (int i = 0; i < n; i++) s += v[i]; break;
    default:
        break;
    }
    return 0;
}

class exceptie : public exception
{
public:
    const char* what() const throw() { return "erroare prin OBJ"; };
}ERR;

int main()
{
    srand(time(0));
    /**/
   /* bool k = true;

    try
    {
        string S;
        S.resize(-1);
    }
    catch (exception& x)
    {
        cout << " Eroare  = " << x.what() << endl;
    }*/
    int x;
    cout << typeid(x).name() << endl;
    char y;
    cout << typeid(y).name() << endl;
    double w;
    cout << typeid(w).name() << endl;
    int vi[5] = {1,2,3,4,5};
    cout << suma(vi, 5) << endl;
    
    ABC* pp = new ABC;
    cout << "Tip date Object = " << typeid(*pp).name() << endl;


    /*try
    {
        ABC* ppp = 0;
        cout << "Tip date object" << typeid(*ppp).name() << endl;
    }
    catch (exception&x)
    {
        cout << "Error " << x.what() << endl;
    }*/
    try
    {
        throw ERR;
    }
    catch (exception& x)
    {
        cout << "Error " << x.what() << endl;
        cout << "Error " << x.exception::what() << endl;
    }
    catch (...)
    {
        cout << "Clasa derivata error" << endl;
    }

}

/*

Sa se calculeze a+b-c de n ori
sa se afiseze erori personalizate (tip_date)
a-> 2, 5, 9 -> Erroare a = valoarea ??
b-> 5, 9    -> Erroare b = valoarea ?? 
c-> 2, 4, 5 -> Erroare c = valoarea ??

*/