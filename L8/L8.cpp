#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>
using namespace std;
/*
   class nume_class1
   {
     tip_date proprietate1;
     tip_date proprietate2;
     tip_date proprietate3;
     ....
     tip_date proprietateN;
     tip_date metoda1();
      tip_date metoda2();
      .....
       tip_date metodaN();
};
 class nume_class2
   {
     tip_date proprietate1;
     tip_date proprietate2;
     tip_date proprietate3;
     ....
     tip_date proprietateN;
     tip_date metoda1();
      tip_date metoda2();
      .....
       tip_date metodaN();
};
Incapsulare
clasa
zonele de acces
1.    public :
2.    private :
   3.    protected :
     seter
     geter
     ::
     this
     inline
     constructori
     Optimizarea param cu val. implicita
     destructor -
*/
class var
{
    int value;
public:
    var(int value = NULL) : value(value) {}
    var(const var& Obj) { cout << " XX " << endl; cout << "var adr=" << &Obj << endl;  this->value = Obj.value; }
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
    inline void summ(int x) { this->value += x; }
    inline bool paritate() { return this->value % 2 == 0 ? true : false; }
    inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }
};
class DATA
{
    int zi;
    int luna;
    int ani;
public:
};
class stud
{
    char nume[256];
    var ani;
    double medie;
    DATA dataa;
public:
    stud(int ani) :ani(ani), medie(NULL) { this->nume[0] = '\0'; }
    stud(const var& ani) :ani(ani), medie(NULL) { this->nume[0] = '\0'; }
    stud(double medie) :medie(medie), ani(NULL) { this->nume[0] = '\0'; }
    stud(char nume[] = "\0", int ani = NULL, double medie = NULL) :ani(ani), medie(medie)
    {
        strcpy(this->nume, nume);
    }
    stud(const stud& OBJ)
    {
    }
    ~stud() {}
    void setNUME(char* mess)
    {
        cout << mess;
        cin >> this->nume;
    }
    void setANI(char* mess)
    {
        this->ani.setVALUE1(mess);
    }
    void setMEDIE(char* mess)
    {
        cout << mess;
        cin >> this->medie;
    }
    const char* getNUME()const { return this->nume; }
    const int getANI()const { return this->ani.getVALUE(); }
    const double getMEDIE()const { return this->medie; }
};
int main()
{
    srand(time(0));
    //  clasa student
    var X = 123;
    var XXX = X;
    cout << " XXX adr=" << &XXX << endl;
    stud XX = XXX;
    cout << "  XX.ani = " << XX.getANI() << endl;
    stud YY = 123;
    stud Y = 123.321;
    stud Z = "asdf";
    stud ZZ("asdfadsf", 1234);
    stud ZZZ("asdfadsf", 1234, 123.321);
    stud S[10];
    var n = rand() % 10;
    for (int i = 0; i < n.getVALUE(); i++)
    {
        // S[i] = new stud(infoDB1, info2DB, info3Db );
        cout << "\n Student[" << i + 1 << "] din " << n.getVALUE() << endl;
        S[i].setNUME(" Enter nume = ");
        S[i].setANI(" Enter ani = ");
        S[i].setMEDIE(" Enter medie = ");
    }
    for (int i = 0; i < n.getVALUE(); i++)
    {
        cout << "\n Student[" << i + 1 << "] din " << n.getVALUE() << endl;
        cout << "  NUME = " << S[i].getNUME() << endl;
        cout << "   ANI = " << S[i].getANI() << endl;
        cout << " MEDIE = " << S[i].getMEDIE() << endl;
    }
    return 0;
}
 /// Sa se calculeze a+b-c