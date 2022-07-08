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
r+b ios::in |ios::binary - ifstream
w+b ios::out|ios::binary - ofstream
a+b ios::app|ios::binary - fstream
*/

class vals
{
protected:
	int a, b, c, R;
public:
	vals(int a = NULL, int b = NULL, int c = NULL, int R = NULL) : a(a), b(b), c(c), R(R) {}
	~vals() {}

	void setcalcabc()
	{
		this->a = rand() % 15;
		this->b = rand() % 15;
		this->c = rand() % 15;
		this->R = this->a + this->b - this->c;
	}

	const int geta() const { return this->a; }
	const int getb() const { return this->b; }
	const int getc() const { return this->c; }
	const int getR() const { return this->R; }
};



class abc : public vals
{	
public:
	abc() { vals(); }
	~abc() {}

	
	void save(int n = NULL)
	{
		if (n == NULL) n = rand() % 15 + 1;

		vals* A = new vals[n];
		for (int i = 0; i < n; i++)
		{
			A[i].setcalcabc();
			cout << " a = " << A[i].geta() << " b = " << A[i].getb() << " c = " << A[i].getc() << "\t\t R = " << A[i].getR() << endl;
		}

		fstream fb("step_binary.step", ios::out | ios::binary);

		if (fb.fail()) { cout << " Error W FILE " << endl; exit(0); }


		// fwrite(S,sizeofS, NR , fp )

		fb.write(reinterpret_cast<char*>(A), sizeof(vals) * n); //reinterpret_cast< >() conversia memoriei

		

		fb.close();
		
	}

	void load()
	{
		fstream fb("step_binary.step", ios::in | ios::binary);

		if (fb.fail()) { cout << " Error R FILE " << endl; exit(0); }


		fb.seekg(fb.beg, fb.end); // Metoda selecteaza blocurile de memorie  de la inceput ... la sfarsit (= ctrl+a)

		int NLEN = fb.tellg(); // Intoarce lungimea informatiei selectate de mai sus

		fb.seekg(fb.beg, fb.beg); //Resetarea la 0


		int n = NLEN / sizeof(abc); //Aflam nr (blocurilor) de obiecte


		//cout << " n = " << n << endl;

		vals* B = new vals[n];

		fb.read(reinterpret_cast<char*>(B), NLEN);


		fb.close();

		cout << endl;

		for (int i = 0; i < n; i++)
		{
			cout << " B[" << i << "]  = "
				 << " a = " << B[i].geta() 
				 << "\t b = " << B[i].getb() 
				<< "\t c = " << B[i].getc() 
				<< "\t R = " << B[i].getR() << endl;
		}
	}

};

int main()
{
	srand(time(0));


	//int lgth;
	//lgth = rand() % 15;

	//cout << "abcsize = " << sizeof(abc) << endl;
	//cout << "lgth = " << lgth << endl;

	//int size = 0;
	//abc* A = new abc[lgth];
	//for (int i = 0; i < lgth; i++)
	//{
	//	A[i].setcalcabc();
	//	cout << " a = " << A[i].geta() << " b = " << A[i].getb() << " c = " << A[i].getc() << "\t\t R = " << A[i].getR() << endl;
	//	size += sizeof(A[i]);
	//}

	//cout << "size = " << size << endl;

	//fstream fb("step_binary.step", ios::out | ios::binary);

	//if (fb.fail()) { cout << " Error W FILE " << endl; exit(0); }
	//else { cout << " OK W FILE " << endl; }


	//// fwrite(S,sizeofS, NR , fp )

	//fb.write(reinterpret_cast<char*>(A), size); //reinterpret_cast< >() conversia memoriei

	//fb.close();



	////ifstream ifb("step_binar_1.step", ios::binary);
	//fb.open("step_binary.step", ios::in | ios::binary);

	//if (fb.fail()) { cout << " Error R FILE " << endl; exit(0); }
	//else { cout << " OK R FILE " << endl; }


	//fb.seekg(fb.beg, fb.end); // Metoda selecteaza blocurile de memorie  de la inceput ... la sfarsit (= ctrl+a)

	//int NLEN = fb.tellg(); // Intoarce lungimea informatiei selectate de mai sus

	//fb.seekg(fb.beg, fb.beg); //Resetarea la 0
	//
	//cout << "NLEN = " << NLEN << endl;
	//cout << "abc = " << sizeof(abc) << endl;
	//int n = NLEN / sizeof(abc); //Aflam nr de obiecte


	//cout << " n = " << n << endl;

	//abc* B = new abc[n];

	//// int n = fread(S,sizeofS, 50 , fp )

	//fb.read(reinterpret_cast<char*>(B), NLEN);


	//fb.close();
	////fb.close();

	//cout << endl;

	//for (int i = 0; i < n; i++)
	//{
	//	cout << " B[" << i << "]  = "
	//		<< " a = " << B[i].geta() << "\t b = " << B[i].getb() << "\t c = " << B[i].getc() << "\t R = " << B[i].getR() << endl;
	//}
	abc L;
	L.save(7);
	L.load();

	fstream fb("step_binary.step", ios::out | ios::binary);


	return 0;
}
/*

Acasa:Sa se calculeze a+b-c de n ori
In fisier sa fie a b c inclusiv


*/
