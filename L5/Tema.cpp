#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>

#pragma warning(disable:4996)

using namespace std;



class var
{
	int value;
	double valueD;
	char sir[256];
	int* pr = new int;
	int* V = new int[100], ** M = new int*[10]; 

public:

	var(int value) : value(value), valueD(NULL) {}


	var(const char sir[] = "\0", int value = 1, double valueD = 2.3)
	{


		strcpy(this->sir, sir);
		this->value = value;
		this->valueD = valueD;
		*this->pr = NULL;
		/*for (int i = 0; i < 100; i++) V[i] = NULL;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++) M[i][j] = NULL;*/

	}

	inline  void setVALUE1(const char*);
	inline  void setVALUE2();
	inline  void setVALUE3(int);
	inline  void setVALUE4(const char*);
	inline  void setvalV(int);
	inline  void setvalM(int,int);

	inline const int getVALUE()const { return this->value; }
	inline const int getVALUEinp()const { return *this->pr; }
	inline const int getVALUER()const { return this->value; }
	inline const double getVALUED()const { return this->valueD; }
	inline char* getSIR() { return this->sir; }
	inline int *getV() { return this->V; }
	inline int *getM() { return *this->M; }

	inline void summ(int x) { this->value += x; }

	inline bool paritate() { return this->value % 2 == 0 ? true : false; }

	inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }



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

void var::setVALUE4(const char* message)
{
	cout << message;
	cin >> *(this)->pr;
}

void var::setvalV(int value)
{
	for (int i = 0; i < value; i++) V[i] = rand() % 15;
}
void var::setvalM(int value,int value2)
{
	for (int i = 0; i < value; i++)
		for (int j=0;j<value2;j++) M[i][j] = rand() % 15;
}

int main()
{
	srand(time(0));

	var n(0), m(0);

	//var V[n.getVALUE()];
	n.setVALUE4("n=");
	m.setVALUE4("m=");

	var V,M;


	cout << "\n\n\n\n";
	//cout << V[0].getVALUE() << endl;
	
	cout << "Vector:" << endl;
	V.setvalV(n.getVALUE());
	int *L =new int;
	&L = V.getV();
	cout << V.getV();
	cout << "\n\n\n\n";

	
	cout << "Matrice:" << endl;
	

	return 0;
}








/*
Sa se creeze un vector de n elemente
Sa se creeze o matice n,m
*/