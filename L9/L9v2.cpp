#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>  
#include <ctime>

#pragma warning(suppress : 4996);

using namespace std;

class var
{
    int value;
public:
    var(int value = NULL) : value(value) {}
    var(const var& Obj) { this->value = Obj.value; }
    ~var() {}
    void setVALUE1(const char* message)
    {
        cout << message;
        cin >> this->value;
    }
    void setVALUE2()
    {
        this->value = rand() % 20;
    }
    void setVALUE3(int value)
    {
        this->value = value;
    }
    inline const int getVALUE()const { return this->value; }
    inline void summ(int x) { this->value += x; }
    inline bool paritate() { return this->value % 2 == 0 ? true : false; }
    inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }
    friend ostream& operator<<(ostream&, var&);
    friend istream& operator>>(istream&, var&);
};

class abc
{
    var a, b, c,R;
    public:
    abc(var a = NULL, var b = NULL, var c = NULL, var R=NULL) : a(a), b(b), c(c),R(R) {}
    ~abc() {}
    inline void seta() { this->a.setVALUE2(); }
    inline void setb() { this->b.setVALUE2(); }
    inline void setc() { this->c.setVALUE2(); }
    inline const int calcabc (int a, int b, int c)const { return a + b - c; }
    inline void setR(int a,int b, int c) { this->R.setVALUE3(calcabc(a,b,c)); }
    inline const int getVALUEa()const { return this->a.getVALUE(); }
    inline const int getVALUEb()const { return this->b.getVALUE(); }
    inline const int getVALUEc()const { return this->c.getVALUE(); }
    inline const int getVALUER()const { return this->R.getVALUE(); }
};

// combinatia este  <<OBJ 
ostream& operator<<(ostream& COUT, abc& OBJ)
{
    COUT << OBJ.;
    return COUT;
}

// combinatia este  >>OBJ 
istream& operator>>(istream& CIN, abc& OBJ)
{
    CIN >> OBJ.value;
    return CIN;
}

int main()
{
    srand(time(0));

    abc R;
    int n = rand() % 10;
    for (int i = 0; i < n; i++)
    {
        cout << "\na="; cin >> R.a;
        cout << "b="; cin >> b;
        cout << "c="; cin >> c;*/
        a.setVALUE2(); b.setVALUE2(); c.setVALUE2();
        cout << "n=" << n << setw(3) << a << " + " << b << " - " << c << " = " << a.abcr(a.getVALUE(), b.getVALUE(), c.getVALUE()) << endl;
    }


    return 0;
}

/*
a+b-c
*/