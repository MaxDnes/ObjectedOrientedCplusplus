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

#include <set>
#include <map>


//#pragma warning( suppress : 4996);

using namespace std;

//STL
//conteiner vector
//iterator

//set

int main()
{
	srand(time(0));
	/*
	//vector sortat - valori unicale
	

	set <int> v;
	
	for (int i = 0; i < 10; i++) v.insert(rand() % 10);

	cout << "v set : " << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

	v.erase(9);

	int x;

	cout << "Enter x";
	cin >> x;

	if (v.find(x) != v.end()) v.erase(x);
	else cout << "No" << endl;

	//mutiset -vector sortat - valori multiple
	multiset <int> V;

	for (int i = 0; i < 10; i++) V.insert(rand() % 10);

	cout << "V multiset : " << endl;
	copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	*/


	//map - conteiner ce ne permite sa inregistram valoarea cat in locul id-ului cat si pt valoarii
	//ID - unical

	map <int,int> v;

	for (int i = 0; i < 10; i++)
	{
		v[i + rand() % 10 + 20] = rand() % 10 + 10;
		//v.insert(pair<int,int>(i + rand()%10+20,rand()%10+10));
	}


	for (map <int, int> ::iterator ITM = v.begin(); ITM != v.end(); ITM++)
	{
		cout << " v[" << ITM->first << "] = " << ITM->second << endl;
	}

	cout << "--------------------------------" << endl;
	multimap <char, int> V;

	for (int i = 'a'; i < 'd'; i++)
	{
		//V[i ] = rand() % 10 + 10;
		V.insert(pair<char,int>(i,rand()%10+10));
	}


	for (multimap <char, int> ::iterator ITMM = V.begin(); ITMM != V.end(); ITMM++)
	{
		cout << " V[" << ITMM->first << "] = " << ITMM->second << endl;
	}

	cout << "--------------------------------" << endl;


	for (int i = 'a'; i < 'd'; i++)
	{
		//V[i ] = rand() % 10 + 10;
		V.insert(pair<char, int>(i, rand() % 10 + 10));
	}


	for (multimap <char, int> ::iterator ITMM = V.begin(); ITMM != V.end(); ITMM++)
	{
		cout << " V[" << ITMM->first << "] = " << ITMM->second << endl;
	}




	return 0;
}
/*

*/