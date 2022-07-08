#include <iomanip>
#include <iostream>
//#include <cstring>
#include <cstdlib>   
#include <ctime>

#pragma warning(suppress : 4996);

using namespace std;

class sir
{
    char sirul[256];
public:
    sir(char* sirul = "\0") { strcpy(sirul); }
    ~sir() {}
    inline  char* getVALUE() { return this->sirul; }
    friend ostream& operator<<(ostream&, sir&);
    friend istream& operator>>(istream&, sir&);
    int strlen(const char* sirul = "\0")
    {
        int i = 0;
        if (sirul[0] == 0) while (this->sirul[i] != 0) i++;
        else  while (sirul[i] != 0) i++;
        return i;
    }
    
    void strcpy(char* value)
    {
        int i = 0;
        while (value[i] != 0)
        {
            this->sirul[i] = value[i];
            i++;
        }
        this->sirul[i] = '\0';
    }
    

    inline int operator *(); //strlen
    inline int operator *(sir& Obj);
    inline int operator *(const char s[256]);
    inline char* operator =(sir& Obj); //strcpy
    inline char* operator =(const char s[256]);
    inline char* operator +(sir& Obj); //strcat
    inline char* operator +(const char s[256]);
    inline bool operator -(sir& Obj); //strcmp
    inline bool operator -(const char s[256]);
    inline bool operator /(char ch); //strchr
    inline bool operator ==(sir& Obj); //strstr
    inline bool operator ==(char s[256]);


};

int sir :: operator *()
{
    int i = 0;
    if (sirul[0] == 0) while (this->sirul[i] != 0) i++;
    else  while (sirul[i] != 0) i++;
    return i;
}


int sir :: operator *(sir& Obj)
{
    int i = 0;
    if (Obj.sirul[0] == 0) while (Obj.sirul[i] != 0) i++;
    else  while (Obj.sirul[i] != 0) i++;
    return i;
}

int sir :: operator *(const char s[256])
{
    int i = 0;
    if (s[0] == 0) while (s[i] != 0) i++;
    else  while (s[i] != 0) i++;
    return i;
}



char* sir ::  operator=(sir& Obj)
{
    int i = 0;
    while (Obj.sirul[i] != 0)
    {
        this->sirul[i] = Obj.sirul[i];
        i++;
    }
    this->sirul[i] = '\0';
}
char* sir :: operator=(const char s[256])
{
    int i = 0;
    while (s[i] != 0)
    {
        this->sirul[i] = s[i];
        i++;
    }
    this->sirul[i] = '\0';
}



char* sir :: operator+(sir& Obj)
{
    int n1 = strlen();
    int n2 = strlen(Obj.sirul);
    /* sau
    int n1 = *"";
    int n2 = * Obj.sirul;
    */
    if (n1 + n2 < 256)
    {
        cout << "Concatinarea sa realizat" << endl;
        for (int i = 0; i < n2; i++)
        {
            this->sirul[n1 + i] = Obj.sirul[i];
        }
        this->sirul[n1 + n2] = 0;
    }
    else cout << "Concatinarea nu este posibila" << endl;
}
char* sir :: operator+(const char s[256])
{
    int n1 = strlen();
    int n2 = strlen(s);
    /* sau
    int n1 = *"";
    int n2 = * s;
    */
    if (n1 + n2 < 256)
    {
        cout << "Concatinarea sa realizat" << endl;
        for (int i = 0; i < n2; i++)
        {
            this->sirul[n1 + i] = s[i];
        }
        this->sirul[n1 + n2] = 0;
    }
    else cout << "Concatinarea nu este posibila" << endl;
}



bool sir :: operator -(sir & Obj)
{
    int n1 = strlen();
    int n2 = strlen(Obj.sirul);
    /* sau
    int n1 = *"";
    int n2 = * Obj.sirul;
    */
    if (n1 == n2)
    {
        cout << "Comparare sa realizat" << endl;
        for (int i = 0; i < n1; i++)
            if (this->sirul[i] != Obj.sirul[i]) return 0;
        return 1;
    }
    else cout << "Compararea nu este posibila" << endl;
    return 0;
}
bool sir :: operator -(const char s[256])
{
    int n1 = strlen();
    int n2 = strlen(s);
    /* sau
    int n1 = *"";
    int n2 = * s;
    */
    if (n1 == n2)
    {
        cout << "Comparare sa realizat" << endl;
        for (int i = 0; i < n1; i++)
            if (this->sirul[i] != s[i]) return 0;
        return 1;
    }
    else cout << "Compararea nu este posibila" << endl;
    return 0;
}


bool sir :: operator /(char ch)
{
    int n1 = strlen();
    /* sau
    int n1 = *"";
    */
    for (int i = 0; i < n1; i++)
        if (this->sirul[i] == ch) return true;
    return false;
}


bool sir :: operator ==(sir& Obj)
{
    int i = 0, j = 0, n = strlen(Obj.sirul);
    while (this->sirul[i] != 0)
    {
        if (this->sirul[i] == Obj.sirul[j])
        {
            if (j == n - 1) return 1;
            j++;
        }
        else
        {
            if (j > 0) i--;
            j = 0;
        }
        i++;
    }
    return 0;
}
bool sir :: operator ==(char s[256])
{
    int i = 0, j = 0, n = strlen(s);
    while (this->sirul[i] != 0)
    {
        if (this->sirul[i] == s[j])
        {
            if (j == n - 1) return 1;
            j++;
        }
        else
        {
            if (j > 0) i--;
            j = 0;
        }
        i++;
    }
    return 0;
}

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
    sir A;
    A = "asd";
    cout << A + "asdd";
}


/*

Sa se realizeze metodele prin supraincarcare a operatorilor

*/