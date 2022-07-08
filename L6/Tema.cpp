#include <iomanip>
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

class var
{
	int value, Nota[10], age, nrnote;
	char nume[256];

public:

	var(int value = NULL,int age = NULL, double media = NULL, int Nota[0] = NULL,int nrnote = 0) : value(value),  age(age), nrnote(nrnote) {}

	var(const var& Obj) { this->value = Obj.value; }


	void setVALUE1(const char* message)
	{
		cout << message;
		cin >> this->age;
	}

	void setVALUE2()
	{
		this->value = rand() % 20;

	}

	void setVALUE3(int value)
	{
		this->value = value;

	}

	void setVALUE4(const char* message)
	{
		cout << message;
		//cin.getline(this->nume,256); skip la cin la urmatoarea iteratie
		cin >> this->nume;
	}

	void setVALUE5(int nrn)
	{
		cin >> this->Nota[nrn];
	}

	inline const int getVALUE()const { return this->value; }

	inline const int getvalnrn()const { return this->nrnote; }


	inline void summ(int x) { this->value += x; }

	inline void snrn(int x) { this->nrnote += x; }

};


int main()
{
	srand(time(0));

	var *S[100],i;
	/*int i = 0;
	int nrn = 0;*/
	i.setVALUE3(0);
	do
	{
		S[i.getVALUE()] = new var;
		system("cls");
		S[i.getVALUE()]->setVALUE4("Nume = ");
		S[i.getVALUE()]->setVALUE1("\nVarsta = ");
		do
		{
			cout << "Nota[" << S[i.getVALUE()]->getvalnrn() << "] = " << endl;
			S[i.getVALUE()]->setVALUE5(S[i.getVALUE()]->getvalnrn());
			S[i.getVALUE()]->snrn(1);
			system("pause");
			cout << "Continuare introducere? Any key - ESC" << endl;
			if (_getch() == 27) break;
		} while (_getch() != 27 || S[i.getVALUE()]->getvalnrn() < 10);
		i.summ(1);
		if (_getch() == 27) break;
	} while (_getch() != 27 || i.getVALUE() < 100);

	return 0;
}

/*
Sa se creeze clasa student
prop metode la dorinta
*/