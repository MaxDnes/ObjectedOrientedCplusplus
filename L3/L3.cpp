#include <iomanip>
#include <iostream>
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
*/
class var
{
    int value;
public:
    void setVALUE1(const char*);
    void setVALUE2();
    void setVALUE3(int);
    const int getVALUE()const { return value; }

    void summ(int x) { value += x; }
    void Cp(int R) { if (R % 2 == 0) value++;}
    void Ci(int R) { if (R % 2 != 0) value++; }
    bool paritate() { return value % 2 == 0 ? true : false; }
    bool interval(int x, int y) { return value >= x && value < y ? true : false; }
};
void var::setVALUE1(const char *message)
{
    cout << message;
    cin >> value;
}
void  var::setVALUE2()
{
    value = rand() % 30;
}
void  var::setVALUE3(int VALUE)
{
    value = VALUE;
}
int main()
{
    srand(time(0));
    //  a+b-c, n 
    var a, b, c, n, R[100],s,Cp,Ci,sa,SRim;
    Cp.setVALUE3(0);
    Ci.setVALUE3(0);
    s.setVALUE3(0);
    sa.setVALUE3(0);
    SRim.setVALUE3(0);
    n.setVALUE1("Enter n=");
    for (int i = 0; i < n.getVALUE(); i++)
    {
        a.setVALUE2();
        b.setVALUE2();
        c.setVALUE2();
        R[i].setVALUE3(a.getVALUE() + b.getVALUE() - c.getVALUE());
        s.summ(R[i].getVALUE());
        if (R[i].getVALUE() % 2 == 0) Cp.setVALUE3( Cp.getVALUE() + 1 );
        if (a.paritate() && a.interval(10,20)) sa.summ(a.getVALUE());
        if (!(R[i].paritate())) SRim.summ(R[i].getVALUE());
        cout << " a=" << a.getVALUE() << " b=" << b.getVALUE() << " c=" << c.getVALUE() << " R[" << i << "]=" << R[i].getVALUE() << endl;
    }
    Ci.setVALUE3( (n.getVALUE() - Cp.getVALUE()));
    cout << Cp.getVALUE();
    cout << Ci.getVALUE();
    cout << sa.getVALUE();
    return 0;
}


/*

1,suma R
2.contor R par impar
3.Sa se calculeze suma pt a pare care intra in intervalul 10..20
4.Suma raspunsurilor impare




Sa se creeze o ecuatie cu minim 5 necunoscute +,-,*;
1. Sa se calculeze suma raspunsurilor iteratiilor impare

2.1 Sa se contorizeze de cate ori a primeste valoare para intra si intervalele 10..20   30..40  60...80
2.2 Sa se contorizeze de cate ori b primeste valoare impara intra si intervalele 1..20   31..99
2.2 Sa se contorizeze de cate ori c primeste valoare impara intra si intervalele -10..0   3..45  50..101

3.Sa se gaseasca raspunsul maximal impar si rapsunul maximal par

4.Sa se gaseasca raspunsul maximal par si rapsunul maximal impar

*/