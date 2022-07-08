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

using namespace std;

template <typename T>
T suma(T v[], int n)
{
    T s;
    char x = *typeid(T).name();
    switch (x)
    {
    case 'i':  s = 0; for (int i = 0; i < n; i++) s += v[i];  break;
    case 'd':  s = 0; for (int i = 0; i < n; i++) s += v[i];  break;
    }
    return 0;
}


class exceptie : public exception
{
    int x; char ch;
public:
    exceptie(int x = NULL, char ch = '\0') : x(x), ch(ch) {}
    ~exceptie() {}
    const char* what()const throw() { return "Eroare prin OBJECT "; }
}ERR;

class exceptiea : public exception
{
public:
    const char* what()const throw() { return "Error bad a "; }
}ERRa;

class exceptieb : public exception
{
public:
    const char* what()const throw() { return "Error bad b "; }
}ERRb;

class exceptiec : public exception
{
public:
    const char* what()const throw() { return "Error bad c "; }
}ERRc;

class ABC
{
    char ch;
    int x;
public:
    ABC(char ch = '\0',int x = NULL ) : ch(ch),x(x) {}
    ~ABC() {}
    void abc()
    {
        int a, b, c, n;
        n = rand() % 25;
        for (int i = 0; i < n; i++)
        {
            a = rand() % 25;
            b = rand() % 25;
            c = rand() % 25;
            try
            {
                /*if (a == 2 || a == 5 || a == 9) throw ERRa;
                if (b == 5 || b == 9) throw ERRb;
                if (c == 2 || c == 4 || c == 5) throw ERRc;*/
                if ((a == 2 || a == 5 || a == 9) || (b == 5 || b == 9) || (c == 2 || c == 4 || c == 5)) throw ERR(a,'a');
                cout << "Iteraion " << i + 1 << '\\' << n << setw(3) << a << " + " << b << " - " << c << " = " << a + b - c << endl;
            }
            catch (exceptiea&x)
            {
                cout << x.what() << a << endl;
                system("pause");
            }
            catch (exceptieb&x)
            {
                cout << x.what() << b << endl;
                system("pause");
            }
            catch (exceptiec&x)
            {
                cout << x.what() << c << endl;
                system("pause");
            }
            catch(exceptie & x)
            {
                cout << x.what() << endl;
            }
            catch (...)
            {
                cout << "Error unknown error" << endl;
            }
        }
        
    }
};

int main()
{
    srand(time(0));

    /*try
    {
        throw ERR;
    }
    catch (exception& x)
    {
        cout << " CLASA derivata  -  Eroare :: " << x.what() << endl;
        cout << " CLASA     baza  -  Eroare :: " << x.exception::what() << endl;
    }
    catch (...)
    {
        cout << " Eroare ... " << endl;
    }*/

    ABC A;
    A.abc();

    return 0;
}

/*

Sa se calculeze a+b-c de n ori
sa se afiseze erori personalizate (tip_date)
a-> 2, 5, 9 -> Erroare a = valoarea ??
b-> 5, 9    -> Erroare b = valoarea ??
c-> 2, 4, 5 -> Erroare c = valoarea ??

*/