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

#include <vector>
#include <iterator>

//#pragma warning( suppress : 4996);

using namespace std;

//STL
//conteiner vector
//iterator

int main()
{
	srand(time(0));
	vector <int> v1;

	vector <int> abc(100);

	*(abc.begin()) = rand() % 15;


	abc.resize(4 * *(abc.cbegin()) + 1);

	

	cout << "n=" << *(abc.cbegin()) << '\n' << endl;

	int* i = new int; *i = 1;
	for (vector <int>::iterator itabc = abc.begin() + 1; itabc != abc.end(); itabc += 4, *i+=1)
	{
		cout << "i." << *i << endl;
		*itabc = rand() % 15;
		*(itabc + 1) = rand() % 15;
		*(itabc + 2) = rand() % 15;
		*(itabc + 3) = *itabc + *(itabc + 1) - *(itabc + 2);
		cout << "a = " << *itabc << setw(3) << "	b = " << *(itabc + 1) << setw(3) << "	c = " << *(itabc + 2) << endl;
		cout << *itabc << " + " << *(itabc + 1) << " - " << *(itabc + 2) << " = " << *(itabc + 3) << endl;
	}


	//---------------------------------------------------------------------------------------------------------------------------------------------
	vector <int> abc2(100);

	*(abc2.begin()) = rand() % 15;


	abc2.resize(3 * *(abc2.cbegin()) + 1);

	cout << "\n\nn=" << *(abc2.cbegin()) << '\n' << endl;

	*i = 1;
	for (vector <int>::iterator itabc2 = abc2.begin() + 1; itabc2 != abc2.end(); itabc2 += 3, *i += 1)
	{
		cout << "i." << *i << endl;
		*itabc2 = rand() % 15;
		*(itabc2 + 1) = rand() % 15;
		*(itabc2 + 2) = rand() % 15;
		cout << "a = " << *itabc2 << setw(3) << "	b = " << *(itabc2 + 1) << setw(3) << "	c = " << *(itabc2 + 2) << endl;
		cout << *itabc2 << " + " << *(itabc2 + 1) << " - " << *(itabc2 + 2) << " = " << *itabc2 + *(itabc2 + 1) - *(itabc2 + 2) << endl;
	}

	return 0;
}
/*

a+b-c,n vectori si iteratori

*/
