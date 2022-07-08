#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>
#include <string>

#pragma warning(suppress : 4996);

using namespace std;

class sir
{
    char sirul[256];
public:
    sir(const char* sir = "\0") { strcpy(this->sirul, sir); }
    //sir(sir& characterobj) { strcpy(characterobj.sirul, this->sirul); }
    sir(int times, char ch)
    {
        for (int i = 0; i < times; i++)
        {
            this->sirul[i] = ch;
        }
        this->sirul[times] = '\n';
    }
    sir(char* s, int from, int to)
    {
        if (from < to)
        {
            char sir[256];
            for (int i = from,j=0; i < to; i++,j++)
            {
                sir[j] = s[i];
            }
            sir[to] = '\n';
            strcpy(this->sirul, sirul);
        }
    }
    ~sir() {}
    inline  char* getVALUE() { return this->sirul; }
    friend ostream& operator<<(ostream&, sir&);
    friend istream& operator>>(istream&, sir&);
};

ostream& operator<<(ostream& COUT, sir& OBJ)
{
    COUT << OBJ.sirul;
    return COUT;
}
istream& operator>>(istream& CIN, sir& OBJ)
{
    CIN >> OBJ.sirul;
    return CIN;
}

int main()
{
    sir A(20, '*');
    cout << A;
}

/*
string s4(20,'*' );
string s5("string itSTEP 2022", 7,9);
*/