#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>
#include <exception>
#include <stdexcept>
#include <typeinfo>
#include <fstream>

#pragma warning( suppress : 4996);

using namespace std;

/*
r+b ios::in|ios::binary - ifstream
w+b ios::out|ios::binary - ofstream
a+b ios::app|ios::binary - fstream
*/



class var
{
	int value;

public:
	var(int value = NULL) : value(value) {}
	~var() {}

	void set(char* message)
	{
		cout << message;
		cin >> this->value;
	}

	void set()
	{
		this->value = rand() % 100;
	}
	inline const int get()const { return this->value; }

};

class DOUBLE
{
	double value;

public:
	DOUBLE(double value = NULL) : value(value) {}
	~DOUBLE() {}

	void setDOUBLE(char* message)
	{
		cout << message;
		cin >> this->value;
	}

	void setDOUBLE()
	{
		this->value = rand() % 10 * 1.15;
	}
	inline const double getDOUBLE()const { return this->value; }

};
class INT : public DOUBLE
{
	int value;

public:
	INT(int value = NULL) : value(value) {}
	~INT() {}

	void setINT(char* message)
	{
		cout << message;
		cin >> this->value;
	}

	void setINT()
	{
		this->value = rand() % 100;
	}
	inline const int getINT()const { return this->value; }

};


int main()
{
	srand(time(0));

	int size=0;
	INT* A = new INT[10];

	for (int i = 0; i < 10; i++)
	{
		A[i].setINT();
		A[i].setDOUBLE();

		size += sizeof(A[i]);

		cout << " A[" << i << "] int = "
			<< A[i].getINT()
			<< " double = " << A[i].getDOUBLE()
			<< " size = " << size << endl;
	}

	ofstream ofb("step_binar_1.step", ios::binary);
	fstream fb("step_binar_2.step", ios::out | ios::binary);

	if (ofb.fail()) { cout << " Error W FILE " << endl; exit(0); }
	else { cout << " OK W FILE " << endl; }


	// fwrite(S,sizeofS, NR , fp )

	ofb.write(reinterpret_cast<char*>(A), size); //reinterpret_cast< >() conversia memoriei

	ofb.close();
	fb.close();


	ifstream ifb("step_binar_1.step", ios::binary);
	fb.open("step_binar_2.step", ios::in | ios::binary);

	if (ifb.fail()) { cout << " Error R FILE " << endl; exit(0); }
	else { cout << " OK R FILE " << endl; }


	ifb.seekg(ifb.beg, ifb.end); // Metoda selecteaza blocurile de memorie  de la inceput ... la sfarsit (= ctrl+a)

	int NLEN = ifb.tellg(); // Intoarce lungimea informatiei selectate de mai sus

	ifb.seekg(ifb.beg, ifb.beg); //Resetarea la 0

	int n = NLEN / sizeof(INT); //Aflam nr de obiecte


	cout << " n = " << n << endl;

	INT* B = new INT[n];

	// int n = fread(S,sizeofS, 50 , fp )

	ifb.read(reinterpret_cast<char*>(B), NLEN);


	ifb.close();
	fb.close();

	cout << endl;

	for (int i = 0; i < n; i++)
	{

		cout << " B[" << i << "] int = "
			<< B[i].getINT()
			<< " double = " << B[i].getDOUBLE() << endl;
	}



	return 0;
}
/*

Acasa:Sa se calculeze a+b-c de n ori
In fisier sa fie a b c inclusiv


*/