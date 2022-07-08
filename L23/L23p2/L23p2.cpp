#include <iostream>
#include <iomanip>

#pragma warning( suppress : 4996);

//using namespace std;
using std::cout;
using std::endl;
using std::cin;
/*
r+b ios::in|ios::binary - ifstream
w+b ios::out|ios::binary - ofstream
a+b ios::app|ios::binary - fstream
*/


namespace step_2022_13
{
	int a = 321;
}

int main()
{
	srand(time(0));
	
	int a = 123;
	cout << a << endl;

	cout << step_2022_13::a << endl;


	using namespace step_2022_13;
	cout << a << endl;

	return 0;
}
/*

Acasa:Sa se calculeze a+b-c de n ori
In fisier sa fie a b c


*/