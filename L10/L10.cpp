#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>

using namespace std;

class var
{
    int value;
public:
    var(int value = NULL) : value(value) {}
    var(const var& Obj) { this->value = Obj.value; }
    ~var() {}
    void  setVALUE1(char* message)
    {
        cout << message;
        cin >> this->value;
    }
    void   setVALUE2()
    {
        this->value = rand() % 20;
    }
    void   setVALUE3(int value)
    {
        this->value = value;
    }
    inline const int getVALUE()const { return this->value; }
    friend ostream& operator<<(ostream&, var&);
    friend istream& operator>>(istream&, var&);
    //friend int abc(var&a,var&b,var&c);
    friend var& abc(var&, var&, var&);
    //friend int operator+(var& ,var& );
    friend var& operator+(var&, int);
    friend var& operator+(int, var&);
    friend var& operator+ (var&, var&);
    friend var& operator- (var&, int);
    friend var& operator- (int, var&);
    friend var& operator- (var&, var&);
    friend var& operator* (var&, int);
    friend var& operator* (int, var&);
    friend var& operator*(var&, var&);
};

var& abc(var& a, var& b, var& c)
{
    return a + b - c;
}

//tip_date_return operator OPERATORUL(parametrii necesari ai combinatiei) {   }
ostream& operator<<(ostream& COUT, var& OBJ)
{
    COUT << OBJ.value;
    return COUT;
}

istream& operator>>(istream& CIN, var& OBJ)
{
    CIN >> OBJ.value;
    return CIN;
}


var& operator+(var& x, int y)
{
    var* X = new var(x.value + y);
    return *X;
}
var& operator+(int y, var& x)
{
    var* X = new var(x.value * y);
    return *X;
}
var& operator+(var& x, var& y)
{
    var* X = new var(x.value * y.value);
    return *X;
}

var& operator-(var& x, int y)
{
    var* X = new var(x.value - y);
    return *X;
}
var& operator-(int y, var& x)
{
    var* X = new var(y-x.value);
    return *X;
}
var& operator-(var& x, var& y)
{
    var* X = new var(x.value - y.value);
    return *X;
}

var& operator*(var& x, int y)
{
    var* X = new var(x.value * y);
    return *X;
}
var& operator*(int y, var& x)
{
    var* X = new var(x.value * y);
    return *X;
}
var& operator*(var& x, var& y)
{
    var X(x.value * y.value);
    return X;
}

int main()
{
    srand(time(0));

    var a, b, c, d, e;

    cout << " Enter a=";
    cin >> a;
    cout << " Enter b=";
    cin >> b;
    cout << " Enter c=";
    cin >> c;
    cout << " Enter d=";
    cin >> d;
    cout << " Enter e=";
    cin >> e;

    var R(a + b - c * d + e - b * a - b + c * a - e);
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;


    cout << a << " + " << b << " - " << c << " * " << d << " + " << e << " - " << b << " * " << a << " - " << b << " + " << c << " * " << a << " - " << e << " = ";


    var R1(c * d), R2(b * a), R3(c * a);
    cout << a + b - R1 + e - R2 - b + R3 - e << endl;

    return 0;
}

/*
Sa se creeze o ecuatie din 5 necunoscute (obiecte) cu utilizarea uramtoarelor
operatii matemcaticce 3+ 4- 3*

a+b-c*d+e-b*a-b+c*a-e

*/