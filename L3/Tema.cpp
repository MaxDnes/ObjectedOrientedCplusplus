#include <iomanip>
#include <iostream>
#include <cstdlib>   
#include <ctime>

using namespace std;

class var
{
    int value,v[];
public:
    void setVALUE1(const char*);
    void setVALUE2();
    void setVALUE3(int);
    const int getVALUE()const { return this->value; }
    void summ(int x) { this->value += x; }
    bool paritate() { return this->value % 2 == 0 ? true : false; }
    bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }
    int VMap(int V[], int n);
    int VMai(int V[], int n);
    int VMip(int V[], int n);
    int VMii(int V[], int n);
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

int var::VMap(int V[], int n)
{
    int Maxp = INT_MIN;
    for (int i = 0; i < n; i++) if (V[n] > V[i] && V[n] % 2 == 0) Maxp = V[n];
    return Maxp;
}
int var::VMai(int V[], int n)
{
    int Maxi = INT_MIN;
    for (int i = 0; i < n; i++) if (V[n] > V[i] && V[n] % 2 != 0) Maxo = V[n];
    return Maxi;
}

int var::VMap(int V[], int n)
{
    int Minp = INT_MAX;
    for (int i = 0; i < n; i++) if (V[n] < V[i] && V[n] % 2 == 0) Minp = V[n];
    return Minp;
}
int var::VMai(int V[], int n)
{
    int Mini = INT_MAX;
    for (int i = 0; i < n; i++) if (V[n] < V[i] && V[n] % 2 != 0) Mini = V[n];
    return Mini;
}

int main()
{
    srand(time(0));

    var a, b, c, d, e, n, R[100];
    var Ca,Cb,Cc, Srim;
    var Rmaxi, Rmaxp, Rmini, Rminp;
    Ca.setVALUE3(0);
    Cb.setVALUE3(0);
    Cc.setVALUE3(0);
    Rmaxi.setVALUE3(INT_MIN);
    Rmaxp.setVALUE3(INT_MIN);
    Rmini.setVALUE3(INT_MAX);
    Rminp.setVALUE3(INT_MAX);
    Srim.setVALUE3(0);
    n.setVALUE1("Enter n=");
    for (int i = 0; i < n.getVALUE(); i++)
    {
        a.setVALUE2();
        b.setVALUE2();
        c.setVALUE2();
        d.setVALUE2();
        e.setVALUE2();
        R[i].setVALUE3(a.getVALUE() + b.getVALUE() - c.getVALUE() + d.getVALUE() * e.getVALUE());

        if (i % 2 != 0) Srim.summ(R[i].getVALUE());


        if (a.paritate() && (a.interval(10, 20) || a.interval(30, 40) || a.interval(60, 80))) Ca.summ(1);
        if ( !(b.paritate()) && (b.interval(1, 20) || b.interval(31, 49) )) Cb.summ(1);
        if (c.paritate() && (c.interval(-10, 0) || c.interval(3, 45) || c.interval(50, 101))) Cc.summ(1);
        

        if (R[i].paritate())
        {
            if (R[i].getVALUE() > Rmaxp.getVALUE()) Rmaxp.setVALUE3(R[i].getVALUE());
            else if (R[i].getVALUE() < Rminp.getVALUE()) Rminp.setVALUE3(R[i].getVALUE());
        }
        else
        {
            if (R[i].getVALUE() > Rmaxi.getVALUE()) Rmaxi.setVALUE3(R[i].getVALUE());
            else if (R[i].getVALUE() < Rmini.getVALUE()) Rmini.setVALUE3(R[i].getVALUE());
        }

        cout << " a=" << a.getVALUE() << " b=" << b.getVALUE() << " c=" << c.getVALUE() << " d=" << d.getVALUE() << " e=" << e.getVALUE() << " \nR[" << i << "]=" << R[i].getVALUE() << endl;
    }
    cout << "Suma raspunsurilor iteratiilor impare " << Srim.getVALUE() <<endl;
    cout << "a primeste valoare para intra si intervalele 10..20   30..40  60...80 de " << Ca.getVALUE() << " ori." << endl;
    cout << "b primeste valoare impara intra si intervalele 1..20   31..99 \tde " << Cb.getVALUE() << " ori." << endl;
    cout << "c primeste valoare para intra si intervalele - 10..0   3..45  50..101 de " << Cc.getVALUE() << " ori." << endl;
    cout << "Raspunsul maximal impar " << Rmaxi.getVALUE() << " \nRaspunsul maximal par " << Rmaxp.getVALUE() <<endl;
    cout << "Raspunsul minimal impar " << Rmini.getVALUE() << " \nRaspunsul minimal par " << Rminp.getVALUE() << endl;
    return 0;
}

/*
Sa se creeze o ecuatie cu minim 5 necunoscute + , -, *;
1. Sa se calculeze suma raspunsurilor iteratiilor impare

2.1 Sa se contorizeze de cate ori a primeste valoare para intra si intervalele 10..20   30..40  60...80
2.2 Sa se contorizeze de cate ori b primeste valoare impara intra si intervalele 1..20   31..99
2.2 Sa se contorizeze de cate ori c primeste valoare para intra si intervalele - 10..0   3..45  50..101

3.Sa se gaseasca raspunsul maximal impar si rapsunul maximal par

4.Sa se gaseasca raspunsul minimal par si rapsunul minimal impar
*/

