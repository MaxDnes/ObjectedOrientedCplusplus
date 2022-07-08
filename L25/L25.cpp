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

	vector <int> v2(10);

	vector <int> v3(10, rand() % 15);

	vector <int>::iterator itv3 = v3.begin();//constructor
	// .resize -> se modifica nr de elemente

	v3.resize(15);

	for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++) *itv3 = rand() % 15;


	for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++) cout << "v3 = " << *itv3 << endl;
	
	cout << "-----------------------" << endl;

	for (vector <int>::reverse_iterator itv3 = v3.rbegin(); itv3 != v3.rend(); itv3++) cout << "v3 = " << *itv3 << endl;

	cout << "-----------------------" << endl;

	for (vector <int>::const_iterator itv3 = v3.cbegin(); itv3 != v3.cend(); itv3++) cout << "v3 = " << *itv3 << endl;


	cout << "size " << v3.size() << endl;
	cout << "capacity " << v3.capacity() << endl;
	cout << "max_size " << v3.max_size() << endl;

	/*for (int i = 0; i < 10; i++) v1.push_back(rand() % 10);

	cout << "size " << v1.size() << endl;
	cout << "capacity " << v1.capacity() << endl;
	cout << "max_size " << v1.max_size() << endl;

	for (int i = 0; i < v1.size(); i++) cout<<"v["<<i<<"] = " << v1[i] << endl;

	for (int i = 0; i < 6; i++) v1.pop_back();

	// 1 2 3 4 
	
	// .begin() - [0] -> geter intoarce adresa primului element
	// .en() - [n] 
	
	// r -> rever
	// .rbegin() -
	// .rend()

	//Iteratorii constanti ne permit numai sa afisam
	//c->constant
	// .cbegin - 
	// .cend

	// .front() - 1 element
	// .back() - ultimul element

	v1.insert( v1.begin() , 777);

	for (int i = 0; i < v1.size(); i++) cout << "v[" << i << "] = " << v1[i] << endl;

	cout <<v1.front() << " - " << v1.back() <<endl;*/
	
	
	return 0;
}
/*


vector <int> v1;

		vector <int> v2(10);

		vector <char> v3(10, 'x');

		for (int i = 0; i < 10; i++) cout << "v3[" << i << "] = " << v3[i] << endl;

		cout << "size " << v3.size() << endl;
		cout << "capacity " << v3.capacity() << endl;
		cout << "max_size " << v3.max_size() << endl;

		return 0;



a+b-c,n vectori si iteratori
*/
