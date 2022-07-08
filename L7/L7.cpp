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
    var(const var& Obj) { cout << " XX " << endl; cout << "var adr=" << &Obj << endl;  this->value = Obj.value; }
    ~var() {}
    void  setVALUE1(const char* message)
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
    inline void summ(int x) { this->value += x; }
    inline bool paritate() { return this->value % 2 == 0 ? true : false; }
    inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }
};


class sir
{
    char sirul[256];
    public:
        sir(char sirul[] = "\0") { strcpy(this->sirul, sirul); }
        sir(sir& characterobj) {  strcpy(characterobj.sirul, this->sirul); }
        ~sir() {}
        void  setVALUE1()
        {
            cin >> this->sirul;
        }
        /*void   setVALUE3(const char *mess)
        {
            strcpy(mess,this->sirul);
        }*/
        void setvpoz(int i)
        {
            this->sirul[i] = '\0';
        }
        inline const char *getVALUE()const { return this->sirul; }
};

class medie
{
    double media;
public:
    medie(double media = NULL) : media(media) {}
    medie(const medie& Obj) { cout << " XX " << endl; cout << "var adr=" << &Obj << endl;  this->media = Obj.media; }
    ~medie() {}
    void setVALUE1(const char* message)
    {
        cout << message;
        cin >> this->media;
    }
    void setVALUE2()
    {
        cin >> this->media;
    }
    void setVALUE3(double value)
    {
        this->media = value;
    }
    void getmed(int v[], int n)
    {
        this->media = 0;
        for (int i = 0; i < n; i++) this->media += v[i];
        this->media /= n;
    }
    inline const double getVALUE()const { return this->media; }
    inline void summ(int x) { this->media += x; }
    inline bool paritate() { return int(this->media) % 2 == 0 ? true : false; }
    inline bool interval(int x, int y) { return this->media >= x && this->media < y ? true : false; }
};

class DATA
{
    int zi;
    int luna;
    int anul;
public:
    DATA(int zi = NULL,int luna = NULL,int ani = NULL) : zi(zi), luna(luna), anul(anul) {}
    DATA(const DATA& Obj) { this->luna = Obj.luna; this->anul = Obj.anul;}
    ~DATA() {}
    void setVALUE1zi(const char* message)
    {
        cout << message;
        cin >> this->zi;
    }
    void setVALUE2zi(int value)
    {
        this->zi = value;
    }
    void setVALUE1luna(const char* message)
    {
        cout << message;
        cin >> this->luna;
    }
    void setVALUE2luna(int value)
    {
        this->luna = value;
    }
    void setVALUE1anul(const char* message)
    {
        cout << message;
        cin >> this->anul;
    }
    void setVALUE2anul(int value)
    {
        this->anul = value;
    }

    void setVALDATA(const char* message)
    {
        cout << message << endl;

        cout << "Enter zi:";
        cin >> this->zi;

        cout << "Enter luna:";
        cin >> this->luna;

        cout << "Enter an:";
        cin >> this->anul;
    }

    inline const int getVALUEzi()const { return this->zi; }
    inline const int getVALUEluna()const { return this->luna; }
    inline const int getVALUEani()const { return this->anul; }
};
class stud
{
    sir nume[256];
    var ani;
    medie media;
    DATA dataa;
public:
    stud(int ani) :ani(ani), media(NULL) { this->nume[0].setvpoz(0); }
    stud(const var& ani) :ani(ani), media(NULL) { this->nume[0].setvpoz(0); }
    stud(const medie& medie) :media(medie), ani(NULL) { this->nume[0].setvpoz(0); }
    stud(const sir& nume = '\0', int ani = NULL, double medie = NULL) :ani(ani), media(medie) { this->nume[0].setvpoz(0); }
    stud(const stud& OBJ)
    {
    }
    stud(char nume[] = "\0", int zi = NULL, int ani = NULL, double medie = NULL) : zi(zi), ani(ani), medie(medie)
    {
        strcpy(nume, nume);
    }
    ~stud() {}
    void setNUME(const char* mess)
    {
        cout << mess;
        this->nume[0].setVALUE1();
    }
    void setANI(const char* mess)
    {
        this->ani.setVALUE1(mess);
    }
    void setMEDIE(const char* mess)
    {
        cout << mess;
        this->media.setVALUE2();
    }
    void setDATA(const char* mess)
    {
        cout << mess;
        this->dataa.setVALDATA(mess);
    }
    const char* getNUME()const { return this->nume[0].getVALUE(); }
    const int getANI()const { return this->ani.getVALUE(); }
    const double getMEDIE()const { return this->media.getVALUE(); }
    const int getzi()const { return this->dataa.getVALUEzi(); }
    const int getluna()const { return this->dataa.getVALUEluna(); }
    const int getanul()const { return this->dataa.getVALUEani(); }
};
int main()
{
    srand(time(0));
    //  clasa student
    //var X = 123;
    //var XXX = X;
    //cout << " XXX adr=" << &XXX << endl;
    //stud XX = XXX;
    //cout << "  XX.ani = " << XX.getANI() << endl;
    //stud YY = 123;
    //stud Y = 123.321;
    //stud Z = "asdf";
    //stud ZZ("asdfadsf", 1234);
    //stud ZZZ("asdfadsf", 1234, 123.321);
    stud S[10];
    var n = rand() % 10;
    for (int i = 0; i < n.getVALUE(); i++)
    {
        // S[i] = new stud(infoDB1, info2DB, info3Db );
        cout << "\n Student[" << i + 1 << "] din " << n.getVALUE() << endl;
        S[i].setNUME(" Enter nume = ");
        S[i].setANI(" Enter ani = ");
        S[i].setMEDIE(" Enter medie = ");
        S[i].setDATA("Enter data format zi/luna/an ");
    }
    for (int i = 0; i < n.getVALUE(); i++)
    {
        cout << "\n Student[" << i + 1 << "] din " << n.getVALUE() << endl;
        cout << "  NUME = " << S[i].getNUME() << endl;
        cout << "   ANI = " << S[i].getANI() << endl;
        cout << " MEDIE = " << S[i].getMEDIE() << endl;
        cout << " DATA  = " << S[i].getzi() << '\\' << S[i].getluna() << '\\' << S[i].getanul() << endl;
    }
    return 0;
}

/*
proprietatile OBJECT
class SIR nume
class double medie
finalizat clasa DATA
*/