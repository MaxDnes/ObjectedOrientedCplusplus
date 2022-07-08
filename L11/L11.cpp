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


int a(char s[256])
{
	return strlen(s);
}
int main()
{
    srand(time(0));

    //var a, b, c, d, e, R;

    //cout << " Enter a=";
    //cin >> a;
    //cout << " Enter b=";
    //cin >> b;
    //cout << " Enter c=";
    //cin >> c;
    //cout << " Enter d=";
    //cin >> d;
    //cout << " Enter e=";
    //cin >> e;
    //a + b - c * d + e - b * a - b + c * a - e;
    //cout << a << " + " << b << " - " << c << " * " << d << " + " << e << " - " << b << " * " << a << " - " << b << " + " << c << " * " << a << " - " << e << " = " << a;
    char a[256];
    char b[256];
    a[0] = 'd';
    a[1] = '\0';
    
    b[0] = 'e';
    b[1] = '\0';
	cout<<strcpy(a,b);
	return 0;
}
/*
a+b-c
metode
*/
