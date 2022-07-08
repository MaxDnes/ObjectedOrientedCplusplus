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
    inline const int abcr(int a, int b, int c)const { return a + b - c; }
    //friend void show(const var&);
    //friend void show(const var&, const var&);
    friend ostream& operator<<(ostream&, var&);
    friend istream& operator>>(istream&, var&);
};



// combinatia este  <<OBJ 
ostream& operator<<(ostream& COUT, var& OBJ)
{
    COUT << OBJ.value;
    return COUT;
}

// combinatia este  >>OBJ 
istream& operator>>(istream& CIN, var& OBJ)
{
    CIN >> OBJ.value;
    return CIN;
}

int main()
{
    srand(time(0));

    var a,b,c;
    int n = rand() % 10;
    for (int i = 0; i < n; i++)
    {
        /*cout << "\na="; cin >> a;
        cout << "b="; cin >> b;
        cout << "c="; cin >> c;*/
        a.setVALUE2(); b.setVALUE2(); c.setVALUE2();
        cout << i+1 <<" din " << n << setw(3) << a << " + " << b << " - " << c << " = " << a.abcr(a.getVALUE(), b.getVALUE(), c.getVALUE()) << endl;
    }
    

    return 0;
}

/*
a+b-c
*/