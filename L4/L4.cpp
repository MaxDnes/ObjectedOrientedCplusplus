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
    int value;
    char sir[256];


public:

    var() { cout << " CONSTRUCTOR implicit " << endl; this->value = NULL; this->valueD = NULL; (this)->sir[0] = '\0'; }

    explicit var(int value)
    {
        cout << " CONSTRUCTOR supraincarcat int " << endl;
        this->value = value;
        this->valueD = NULL;
        (this)->sir[0] = '\0';
    }

    explicit var(double valueD)
    {
        cout << " CONSTRUCTOR supraincarcat double " << endl;
        this->valueD = valueD;
        this->value = NULL;
        (this)->sir[0] = '\0';
    }

    explicit var(const char sir[])
    {
        cout << " CONSTRUCTOR supraincarcat char[] " << endl;
        strcpy(this->sir, sir);
        this->value = NULL;
        this->valueD = NULL;
    }



    explicit var(int value,double valueD)
    {
        cout << " CONSTRUCTOR supraincarcat int,double " << endl;
        this->value = value;
        this->valueD = valueD;
        (this)->sir[0] = '\0';
    }

    explicit var(int value, const char sir[])
    {
        cout << " CONSTRUCTOR supraincarcat int,char[] " << endl;
        this->valueD = NULL;
        this->value = value;
        strcpy(this->sir, sir);
    }



    explicit var(double valueD,int value)
    {
        cout << " CONSTRUCTOR supraincarcat double,int " << endl;
        this->valueD = valueD;
        this->value = NULL;
        strcpy(this->sir, sir);
    }

    explicit var(double valueD, const char sir[])
    {
        cout << " CONSTRUCTOR supraincarcat double,char[] " << endl;
        this->valueD = valueD;
        this->value = NULL;
        strcpy(this->sir, sir);
    }
    

    explicit var(const char sir[], int value)
    {
        cout << " CONSTRUCTOR supraincarcat char[],int " << endl;
        strcpy(this->sir, sir);
        this->value = NULL;
        this->valueD = valueD;
    }
    explicit var(const char sir[], double valeuD)
    {
        cout << " CONSTRUCTOR supraincarcat char[],double " << endl;
        strcpy(this->sir, sir);
        this->value = NULL;
        this->valueD = valueD;
    }



    explicit var(int value, double valeuD, const char sir[])
    {
        cout << " CONSTRUCTOR supraincarcat int,double,char[] " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }

    explicit var(int value, const char sir[], double valueD)
    {
        cout << " CONSTRUCTOR supraincarcat int,char[],double " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }

    explicit var(double valueD, int value, const char sir[])
    {
        cout << " CONSTRUCTOR supraincarcat double,int,char[] " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }

    explicit var(double valueD, const char sir[], int value)
    {
        cout << " CONSTRUCTOR supraincarcat double,char[],int " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }

    explicit var(const char sir[], int value, double valueD)
    {
        cout << " CONSTRUCTOR supraincarcat char[],int,double " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }

    explicit var(const char sir[], double valueD, int value)
    {
        cout << " CONSTRUCTOR supraincarcat char[],double,int " << endl;
        strcpy(this->sir, sir);
        this->value = value;
        this->valueD = valueD;
    }




    var(var& Obj) { cout << " CONSTRUCTOR copiere " << endl; this->value = Obj.value; }


    void setVALUE1(const char*);
    void setVALUE2();
    void setVALUE3(int);

    const int getVALUE()const { return this->value; }
    const double getVALUED()const { return this->valueD; }
    char* getSIR() { return this->sir;}

    void summ(int x) { this->value += x; }

    bool paritate() { return this->value % 2 == 0 ? true : false; }

    bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }


};


void var::setVALUE1(const char* message)
{
    cout << message;
    cin >> this->value;
}

void  var::setVALUE2()
{
    this->value = rand() % 20;

}

void  var::setVALUE3(int value)
{
    this->value = value;

}



int main()
{
    srand(time(0));

    var X(777), Y, Z(X);
    var  B = Z, W0(123), W1(10.10), W2("asdf");//, Q1(123,10.777), Q2(777.777,"asdfadsf",1,"asdccc",4.4) ; 

    cout << " int W0=" << W0.getVALUE() << endl;
    cout << " double W0=" << W0.getVALUED() << endl;
    cout << " char W0=" << W0.getSIR() << endl;

    cout << " int W1=" << W1.getVALUE() << endl;
    cout << " double W1=" << W1.getVALUED() << endl;
    cout << " char W1=" << W1.getSIR() << endl;

    cout << " int W2=" << W2.getVALUE() << endl;
    cout << " double W2=" << W2.getVALUED() << endl;
    cout << " char W2=" << W2.getSIR() << endl;


    cout << " int X=" << X.getVALUE() << endl;
    cout << " char Y=" << Y.getSIR() << endl;

    cout << " Y=" << Y.getVALUE() << endl;
    cout << " Z=" << Z.getVALUE() << endl;

    cout << " B=" << B.getVALUE() << endl;






    return 0;
}


/*

Sa se realizeze toate combinatiile de constructori
*/