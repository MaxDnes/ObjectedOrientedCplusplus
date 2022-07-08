#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>

using namespace std;

class abc
{
	int a,b,c,R,n;
	bool isabc = false, calculated = false;
	public:
	
	void setVALa();
	void setVALb();
	void setVALc();
    void setVALn();
    void setVALR();
	
	const int getVALa() const;
	const int getVALb() const;
	const int getVALc() const;
    const int getVALR() const;

	void MainMenu();
	void showabc();
	void calculateR();
	void showR();
};

void abc::setVALa()
{
	a = rand() % 15;
}
void abc::setVALb()
{
	b = rand() % 15;
}
void abc::setVALc()
{
	c = rand() % 15;
}

void abc::setVALc()
{
    c = rand() % 15;
}

void abc::setVALR()
{
    R = getVALa() + getVALb() - getVALc();
}

const int abc::getVALa() const { return a; };
const int abc::getVALb() const { return b; };
const int abc::getVALc() const { return c; };
const int abc::getVALR() const { return R; };

void abc ::MainMenu()
{
    system("cls");
    cout << "1.Get a,b,c and n " << endl;
    cout << "2.Show a,b,c " << endl;
    cout << "3.Calculate a+b-c" << endl;
    cout << "4.Show a+b-c" << endl;
    switch (_getch())
    {
    case 49:
		setVALa();
		setVALb();
		setVALc();
        break;
    case 50:
        showabc();
        break;
    case 51:
        calculateR();
        break;
    case 52:
        //showR();
        break;
    default:
		MainMenu();
    }
}

void abc::showabc()
{
	system("cls");
	if (isabc)
	{
		cout << "a=" << abc::getVALa() << endl;
		cout << "b=" << abc::getVALb() << endl;
		cout << "c=" << abc::getVALc() << endl;
	}
	else cout << "a,b,c not defined!" << endl;
	system("pause");
}

void abc :: calculateR()
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

void abc :: showR()
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

int main()
{
	srand(time(0));

	abc X,y;

	while (1)
	{
		X.MainMenu();
	}

	return 0;
}

/*
Sa se calculeze a+b-c de n ori

*/