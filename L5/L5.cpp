#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>

#pragma warning(disable:4996)

using namespace std;

class var
{
    double valueD;
    int value,value1;
    char sir[256];
    int V[10], M[10][10];
public:
    var(int value) : value(value), valueD(NULL),value1(NULL) {}
    explicit var(double valueD)
    {
        cout << " CONSTRUCTOR supraincarcat double " << endl;
        this->valueD = valueD;
        this->value = NULL;
        (this)->sir[0] = '\0';
        this->value1 = NULL;
    }
    var(const char sir[0] = "\0", int value = 777, double valueD = 777.777,int value1 = 88)
    {
        cout << " CONSTRUCTOR supraincarcat char , int , double " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
        this->value1 = value1;
    }
    var(const var& Obj)
    {
        cout << " CONSTRUCTOR copiere " << endl;
        this->value = Obj.value;
    }
    var(const var& Obj, const var& Obj1, const var& Obj2)
    {
        cout << " CONSTRUCTOR copiere " << endl;
        this->value = Obj.value + Obj1.value - Obj2.value;
        this->sir[0] = '\0';
        this->valueD = NULL;
    }
    inline  void setVALUE1(const char*);
    inline  void setVALUE12(const char*);
    inline  void setVALUE2();
    inline  void setVALUE3(int);
    inline  void setVALV(int);
    inline  void setVALM(int, int);
    inline const int getVALUE()const { return this->value; }
    inline const double getVALUED()const { return this->valueD; }
    inline char* getSIR() { return this->sir; }
    inline const int getVALV() { return *this->V; };
    inline const int getVALM();
    inline void summ(int x) { this->value += x; }
    inline bool paritate() { return this->value % 2 == 0 ? true : false; }
    inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }
};
void var::setVALUE1(const char* message)
{
    cout << message;
    cin >> this->value;
}
void var::setVALUE12(const char* message)
{
    cout << message;
    cin >> this->value1;
}
void  var::setVALUE2()
{
    this->value = rand() % 20;
}
void  var::setVALUE3(int value)
{
    this->value = value;
}
void  var::setVALV(int value)
{
    for (int i = 0; i < value; i++) V[i] = rand() % 20;
}
void  var::setVALM(int value,int value1)
{
    for (int i = 0; i < value; i++)
        for (int j=0;j<value1;j++) M[i][j] = rand() % 20;
}

int main()
{
    srand(time(0));
    var n,m;
    
    n.setVALUE1("n=");
    m.setVALUE1("m=");

    var V, M;

    V.setVALV(n.getVALUE());
    M.setVALM(n.getVALUE(),m.getVALUE());

    cout << V.getVALV();

    return 0;
}







/*
Sa se creeze un vector de n elemente
Sa se creeze o matice n,m
*/