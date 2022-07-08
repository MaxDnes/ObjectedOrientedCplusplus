#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>

using namespace std;

class mess
{
    public:
    int a, b, c, R;
    bool isabc=false,calculated=false;

    int getval(int val, int range)
    {
        val = rand() % range;
        return val;
    }
    void getvalabc()
    {
        isabc = true;
        calculated = false;
        a = getval(a, 15);
        b = getval(b, 15);
        c = getval(c, 15);
        system("cls");
        cout << "a,b,c succesfully defined!" << endl;
        system("pause");
    }

    void showabc()
    {
        system("cls");
        if (isabc)
        {
            cout << "a=" << a << endl;
            cout << "b=" << b << endl;
            cout << "c=" << c << endl;
        }
        else cout << "a,b,c not defined!" << endl;
        system("pause");
    }

    void calculateR()
    {
        system("cls");
        if (isabc)
        {
            if (!calculated)
            {
                R = a + b - c;
                cout << "The result was succesfuly calculated!" << endl;
                calculated = true;
            }
            else  cout << "The result was already calculated!" << endl;

        }
        else
        {
            cout << "a,b,c weren't defined!" << endl;
        }
        system("pause");
    }

    void showR()
    {
        system("cls");
        if (isabc)
        {
            if (!calculated)
            {
                cout << "The result wasn't calculated!" << endl;
            }
            else  cout << "The result is: " << R << endl;

        }
        else
        {
            cout << "a,b,c weren't defined!" << endl;
        }
        system("pause");
    }

    void mainmenu()
    {
        system("cls");
        cout << "1.Get a,b,c " << endl;
        cout << "2.Show a,b,c " << endl;
        cout << "3.Calculate a+b-c" << endl;
        cout << "4.Show a+b-c" << endl;
        switch (_getch())
        {
        case 49: 
            getvalabc();
            break;
        case 50:
            showabc();
            break;
        case 51:
            calculateR();
            break;
        case 52:
            showR();
            break;
        default:
            mainmenu();
        }
    }

    
};

int main()
{
    srand(time(0));

    mess A;
    
    while (1)
    {
        A.mainmenu();
    }

    return 0;
}
/*
Sa se creeze un program  care va realiza afisarea unui mesaj

a+b-c POO
*/