#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);

using namespace std;

//class sir
//{
//    char sirul[256];
//public:
//    sir(const char* sir = "\0") { strcpy(this->sirul, sir); }
//    //sir(sir& characterobj) { strcpy(characterobj.sirul, this->sirul); }
//    sir(int times, char ch)
//    {
//        for (int i = 0; i < times; i++)
//        {
//            this->sirul[i] = ch;
//        }
//        this->sirul[times] = '\n';
//    }
//    sir(const char* s, int from, int to)
//    {
//        if (from < to)
//        {
//            char sir[256];
//            for (int i = from, j = 0; i < to; i++, j++)
//            {
//                sir[j] = s[i];
//            }
//            sir[to] = '\n';
//            strcpy(this->sirul, sir);
//        }
//        else strcpy(this->sirul, "\0");
//    }
//    ~sir() {}
//    inline  char* getVALUE() { return this->sirul; }
//    friend ostream& operator<<(ostream&, sir&);
//    friend istream& operator>>(istream&, sir&);
//};

//ostream& operator<<(ostream& COUT, sir& OBJ)
//{
//    COUT << OBJ.sirul;
//    return COUT;
//}
//istream& operator>>(istream& CIN, sir& OBJ)
//{
//    CIN >> OBJ.sirul;
//    return CIN;
//}
/*
class om
{
    string nume;
    int ani;
    bool gen;

public:
    om(string nume = "\0", int ani = NULL, bool gen = true) : nume(nume), ani(ani), gen(gen) {};
    ~om() {};

    const string getNUME() { return this->nume; }
    const int getani() { return this->ani; }
    const bool getgen() { return this->gen; }
};


class stud : public om
{
    string grupa;
    double media;

public:
    stud(string nume = "\0", int ani = NULL, bool gen = true, double media = NULL, string grupa = "\0") : om(nume, ani, gen), media(media), grupa(grupa) {};
    ~stud() {};

    const double getmedia() { return this->media; }
    const string getgrupa() { return this->grupa; }
};

class A1;
class A2;
class A;
class B;

class A1
{
    int a3;
public:
    A1(int a3 = NULL) : a3(a3) { cout << " constructor clasa A1" << endl; }
    ~A1() { cout << " destructor clasa A1" << endl; }
    void fA1() { cout << "fA1()" << endl; }
    const int getva3() { return this->a3; }
};

class A2 : public A1
{
    int a2;
public:
    A2(int a2 = NULL, int a3 = NULL) :a2(a2), A1(a3) { cout << " constructor clasa A2" << endl; }
    ~A2() { cout << " destructor clasa A2" << endl; }
    void fA2() { cout << "fA2()" << endl; }
    const int getva2() { return this->a2; }
};

class A : public A2
{
    int a;
public:
    A(int a = NULL) :a(a) { cout << " constructor clasa A" << endl; }
    A(int a, int a2, int a3) :a(a), A2(a2, a3) { cout << " constructor clasa A" << endl; }
    ~A() { cout << " destructor clasa A" << endl; }
    void fA() { cout << "fA()" << endl; }
    const int getva() { return this->a; }
};

class B : public A
{
    int b;
public:
    //B(int b = NULL, int a = NULL) :b(b), A(a) { cout << " constructor clasa B" << endl; }
    B(int b = NULL, int a = NULL, int a2 = NULL, int a3 = NULL) :b(b), A(a, a2, a3) { cout << " constructor clasa B" << endl; }
    ~B() { cout << " destructor clasa B" << endl; fA(); }
    void fB() { cout << "fB()" << endl; }
    const int getvb() { return this->b; }
};


//class punct
//{
//    char punctnume;
//public:
//    punct(char punct = '\0') : punctnume(punct) {}
//    ~punct() {};
//    const char getpct() { return this->punctnume; }
//};
//
//class linia : public punct
//{
//    char line[2];
//public:
//    linia(char* line = "\0", char punctl = '\0') : punct(punctl) { strcpy(this->line, line); }
//    ~linia() {};
//    const char* getln() { return this->line; }
//};
//
//
//class figura : public linia
//{
//    string nume;
//public:
//    figura(string nume = "\0", char* line = "\0", char punct = '\0') : linia(line, punct) { this->nume = nume; }
//    ~figura() {};
//    const string getf() { return this->nume; }
//};




class punct
{
    char punctul[256];
public:
    punct(const char*pcte="\0") 
    {
        for (int i = 0; i < strlen(pcte); i++) this->punctul[i] = pcte[i];
    }
    ~punct() {};
    const char* getpct() { return this->punctul; }
};

class linia : public punct
{
    char l[256][2];
public:
    linia(int nrln = NULL, const char* pcte = "\0")
    {
        char ln[2];
        for (int i = 0; i < nrln-1; i++)
        {
            ln[0] = pcte[i];
            ln[1] = pcte[i + 1];
            strcpy(this->l[i], ln);
        }
        ln[0] = pcte[0];
        ln[1] = pcte[nrln];
        strcpy(this->l[nrln],ln);
    }
    ~linia() {};
    const char* getln() { return *this->l; }
};


class figura : public linia
{
    string nume;
public:
    figura(string nume = "\0", int nrln=NULL, const char pcte[256] = "\0") : linia(nrln, pcte) { nume = nume; }
    ~figura() {};
    const string getf() { return this->nume; }
};
*/
class calc
{
    int x;
public:
    calc(int x) : x(x) {}
    ~calc() {}

    void gt(int x)
    {
        for (int i = 0; i < x; i++)
        {
            if (i % 3 == 2) cout << i << endl;
        }
    }

    void sr(int y)
    {
        for (int i = 1; i < y; i++)
        {
            if (18 % i == 0 && 24 % i == 0) cout << i << endl;
        }
    }
    void showprime(int range)
    {
        bool k = false;
        int j = 2;
        int i = 2;
        for (int z = 2; z <= range; z++)
        {
            for (; j < z; j++)
            {
                if (z % j == 0) {
                    k = true; break;
                }
            }
            j = 2;
            if (!k) cout << z << endl;
            k = false;
        }
    }
    
};

int main()
{
    //B x;
    //x.fA1();
    //x.fA2();
    //x.fA();
    //x.fB();
    // A2 -> A1
    //A2 x2;
    //x2.fA1();
    //x2.fA2();
    //cout << " y " << endl;
    //B y(1, 2, 3, 4);
    //cout << " w " << endl;
    //B w(1, 2);
    //cout << "param1 = " << y.getvb() <<endl;
    //cout << "param2 = " << y.getva() << endl;
    //cout << "param3 = " << y.getva2() << endl;
    //cout << "param4 = " << y.getva3() << endl;


    //figura Z("Patrat", "ab", 'A');
    //cout << "fig " << Z.getf() << endl;
    //cout << "linia " << Z.getln() << endl;
   // cout << "punctul " << Z.getpct() << endl;

    calc X(30);
    //X.gt(30);
    X.sr(24);
    X.showprime(31);

}

/*


1. B->A->A2->A1 (sa se transmita din clasa derivatra B valoare pt toate clasele din lant)
2. Sa se creeze o figura (clasa figura) care va fi formata din segment -> punct

(figura,nrlinii,nrpunct
(figura,nrlinii,puncte)
(triunghi,3,abc)
*/