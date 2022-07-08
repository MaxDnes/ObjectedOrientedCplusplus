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
    void setVALUE1(char* message)
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
    friend ostream& operator<<(ostream&, var&);
    friend istream& operator>>(istream&, var&);


    void operator++() { this->value++; }
    void operator++(int) { this->value++; }
    void operator--() { this->value--; }
    void operator--(int) { this->value--; }
    void operator+=(int y) { this->value = y; }
    void operator+=(var& y) { this->value = y.value; }

    var& operator=(var& y)
    {
        this->value = y.value;
        return *this;
    }
    var& operator=(int y)
    {
        this->value = y;
        return *this;
    }


    var& operator+(var& y)
    {
        this->value += y.value;
        return *this;
    }
    var& operator+(int y)
    {
        this->value += y;
        return *this;
    }

    var& operator-(var& y)
    {
        this->value -= y.value;
        return *this;
    }
    var& operator-(int y)
    {
        this->value -= y;
        return *this;
    }

    var& operator*(var& y)
    {
        this->value *= y.value;
        return *this;
    }
    var& operator*(int y)
    {
        this->value *= y;
        return *this;
    }

    bool operator > (var& x)
    {
        return this->value > x.value;
    }

    bool operator >= (var& x)
    {
        return this->value >= x.value;
    }
    int operator !()
    {
        return this->value * -1;
    }
    int operator%(int x)
    {
        return this->value * this->value;
    }
    int operator[ ](int x)
    {
        return this->value;
    }
};


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



int main()
{
    srand(time(0));

    var a, b, c, d, e, R;

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
    a + b - c * d + e - b * a - b + c * a - e;
    cout << a << " + " << b << " - " << c << " * " << d << " + " << e << " - " << b << " * " << a << " - " << b << " + " << c << " * " << a << " - " << e << " = " << a;
    return 0;
}
/*

clasa sir sa se supraincarce strlen strcpy strcat strchr strstr
*/