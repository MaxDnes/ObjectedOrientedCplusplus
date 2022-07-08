#include <iostream>
/*#include <iomanip>
#include <cstring>
#include <cstdlib>   
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);
*/
using namespace std;


class culoareauto 
{
protected:
	string culoare;
public:
	culoareauto(string culoare = "\0") : culoare(culoare) {}
	~culoareauto() {}
	const string getculoare() { return this->culoare; }
};

class infoauto : virtual public culoareauto
{
	int anfabricare;
	bool volan; //0-> stanga  1->dreapta
	string cutie_de_viteze;
	string tip_tractiune;
public:
	infoauto(int anfabricare = NULL, bool volan = false, string cutie_de_viteze = "\0", string tip_tractiune = "\0") : anfabricare(anfabricare), volan(volan), cutie_de_viteze(cutie_de_viteze), tip_tractiune(tip_tractiune) {}
	~infoauto() {}
	const int getanfabricare() { return this->anfabricare; }
	const bool getvolan() { return this->volan; }
	const string getcutie_de_viteze() { return this->cutie_de_viteze; }
	const string gettip_tractiune() { return this->tip_tractiune; }
};


class tip_capacitate : virtual public infoauto
{
protected:
	string tipul;
	int capacitatebac;
	int nr_locuri;
public:
	tip_capacitate(string tipul = "\0", int capacitatebac = NULL, int nr_locuri = NULL) : tipul(tipul), capacitatebac(capacitatebac), nr_locuri(nr_locuri) {}
	~tip_capacitate() {}
	const string getipul() { return this->tipul; }
	const int getcapacitatebac() { return this->capacitatebac; }
	const int getnrlocuri() { return this->nr_locuri; }

};

class marca : public  tip_capacitate
{
protected:
	string producator;
public:
	marca(string producator = "\0") : producator(producator) {}
	~marca() {}
	const string getproducator() { return this->producator; }
};

class automobil : public marca
{
protected:
	string nume;
public:
	automobil(string nume = "\0",string culoare="\0", string producator = "\0", string tipul = "\0", int capacitatebac = NULL, int nr_locuri = NULL, int anfabricare = NULL, bool volan = false, string cutie_de_viteze = "\0", string tip_tractiune = "\0") : nume(nume), infoauto(anfabricare, volan, cutie_de_viteze, tip_tractiune), culoareauto(culoare)
	{
		this->producator = producator;
		this->tipul = tipul;
		this->capacitatebac = capacitatebac;
		this->nr_locuri = nr_locuri;
	}
	~automobil() {}
	const string getnume() { return this->nume; }
};

int main()
{

	automobil B("Corrola","alb","Toyota","Sedan",1231,4,2005,false,"mecanica","din spate");

	cout << B.getnume()<<endl;
	cout << B.getculoare() << endl;
	cout << B.getproducator() << endl;
	cout << B.getipul() << endl;
	cout << B.getcapacitatebac() << endl;
	cout << B.getnrlocuri() << endl;
	cout << B.getanfabricare() << endl;
	cout << B.getvolan() << endl;
	cout << B.getcutie_de_viteze() << endl;
	cout << B.gettip_tractiune() << endl;

	return 0;
}


/*

Sa se creeze clasa derivata automobil
1.Minim 4 clase de baza
2.Minim 5 proprietati protected, 3 private

*/