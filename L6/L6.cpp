#include <iomanip>
#include <iostream>

#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;


class var
{
	int value;


public:

	var(int value = NULL) : value(value) {}

	var(const var& Obj) { this->value = Obj.value; }

	void setVALUE1(char* message)
	{
		cout << message;
		cin >> this->value;
	}

	void setVALUE2()
	{
		this->value = rand() % 20;

	}

	void setVALUE3(int value)
	{
		this->value = value;

	}

	inline const int getVALUE()const { return this->value; }


	inline void summ(int x) { this->value += x; }

	inline bool paritate() { return this->value % 2 == 0 ? true : false; }

	inline bool interval(int x, int y) { return this->value >= x && this->value < y ? true : false; }



};


int main()
{
	srand(time(0));

	// 1 vector , n

	var n=7, v[10];

	cout << " sizeof()= " << sizeof(v) << endl;



	var* p[100];

	p[0] = new var;

	cout << " p[0]=" << p[0]->getVALUE() << endl;

	p[1] = new var(rand() % 10);

	cout << " p[1]=" << p[1]->getVALUE() << endl;

	p[2] = new var(*p[1]);

	cout << " p[2]=" << p[2]->getVALUE() << endl;

	for (int i = 0; i < n.getVALUE(); i++) cout << setw(3) << p[i];

	return 0;
}

/*

Sa se creeze clasa student
prop metode la dorinta
*/