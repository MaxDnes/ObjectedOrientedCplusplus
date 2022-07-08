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
#include <algorithm>
#include <deque>

#include <list>
#include <queue>
#include <stack>

//#pragma warning( suppress : 4996);

using namespace std;

//STL
//conteiner vector
//iterator

int main()
{
	
	srand(time(0));

	vector <int> v3(10, rand() % 15);

	vector <int>::iterator itv3 = v3.begin();//constructor
	// .resize -> se modifica nr de elemente

	v3.resize(15);

	for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++) *itv3 = rand() % 15;


	for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++) cout << "v3 = " << *itv3 << endl;
	
	//1.front_inserter
	vector <int> v;

	copy(v3.begin(), v3.end(), back_inserter(v));

	cout << "-----------------------" << endl;

	for (vector <int>::iterator itv = v.begin(); itv != v.end(); itv++) cout << "v3 = " << *itv << endl;

	//2.back_inserter

	deque <int> a, b,c;

	a.push_front(4);
	a.push_front(3);
	a.push_front(2);
	a.push_front(1);

	for (deque <int> ::const_iterator itv = a.begin(); itv != a.end(); itv++) cout << setw(3) << *itv << endl;

	b.push_back(5);
	b.push_back(6);
	b.push_back(7);

	c.push_back(5);
	c.push_back(6);
	c.push_back(7);

	cout << "-----------------------" << endl;


	for (deque <int> ::const_iterator itv = b.begin(); itv != b.end(); itv++) cout << setw(3) << *itv << endl;

	cout << endl;

	copy(a.end(), a.begin(), front_inserter(b));

	for (deque<int>::const_iterator itv = b.begin(); itv != b.end(); itv++) cout << setw(3) << *itv;

	//3.inserter(conteiner)

	cout << "\n-----------------------" << endl;

	copy(c.begin(), c.end(), inserter(a,a.begin() + a.size() ));

	for (deque <int> ::const_iterator itv = a.begin(); itv != a.end(); itv++) cout << setw(3) << *itv << endl;
/*
	//1. ostream_iterator

	ostream_iterator <int> OUT(cout, " - ");

	cout << "\n-----------------------" << endl;


	copy(c.begin(), c.end(), OUT);

	//2. istream_iterator CTRL

	vector <string> vs;

	cout << "\n Enter string elemente: " << endl;
	copy(istream_iterator <string>(cin),
		istream_iterator <string>(),
		back_inserter(vs));
	cout << "vs : " << endl;
	copy(vs.begin(), vs.end(), ostream_iterator<string>(cout, "\n "));
	

	list <int> LIST;

	LIST.push_back(1);
	LIST.push_back(2);
	LIST.push_back(3);
	LIST.push_front(0);

	cout << "List" << endl;

	copy(LIST.begin(), LIST.end(), ostream_iterator <int>(cout, " "));

	cout << "size" << LIST.size() << endl;

	queue <int> C;

	for (int i=0;i<10;i++) C.push(rand()%15);

	cout << C.front();

	int val;

	while (!C.empty())
	{
		val = C.front();

		cout << " C.front() " << val << endl;

		C.pop();
	}



	stack <int> s;

	for (int i = 0; i < 10; i++) s.push(i);

	cout << "s.top" << s.top();

	int val2;

	while (!s.empty())
	{
		val2 = s.top();
		cout << " s.top() " << val2 << endl;

		s.pop();
	}
*/

	return 0;
}
/*


a+b-c,n vectori si iteratori


*/