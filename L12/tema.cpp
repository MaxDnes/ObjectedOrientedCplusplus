#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <ctime>

#pragma warning(suppress : 4996);

using namespace std;

class sir
{
    char sirul[256];
public:
    sir(const char sirul[] = "\0") { strcpy(this->sirul, sirul); }
    sir(sir& characterobj) { strcpy(characterobj.sirul, this->sirul); }
    ~sir() {}
    
    inline const char* getVALUE()const { return this->sirul; }
    friend ostream& operator<<(ostream&, sir&);
    friend istream& operator>>(istream&, sir&);



    inline int slen(sir &Obj) {return strlen(Obj.sirul); }
    inline int slen(const char s[256]) { return strlen(s); }

    inline char* scpy(sir& Obj, sir &Obj2) { return strcpy(Obj.sirul,Obj2.sirul); }
    inline char* scpy(sir &Obj, const char s[256]) { return strcpy(Obj.sirul,s); }
    inline char* scpy(char s[256], sir& Obj) { return strcpy(s,Obj.sirul); }
    inline char* scpy(char s[256], const char s2[256]) { return strcpy(s, s2); }

    inline char* scat(sir& Obj, sir& Obj2) { return strcat(Obj.sirul, Obj2.sirul); }
    inline char* scat(sir& Obj, const char s[256]) { return strcat(Obj.sirul, s); }
    inline char* scat(char s[256], sir& Obj) { return strcat(s, Obj.sirul); }
    inline char* scat(char s[256], const char s2[256]) { return strcat(s, s2); }

    inline int scmp(sir& Obj, sir& Obj2) { return strcmp(Obj.sirul, Obj2.sirul); }
    inline int scmp(sir& Obj, const char s[256]) { return strcmp(Obj.sirul, s); }
    inline int scmp(char s[256], sir& Obj) { return strcmp(s, Obj.sirul); }
    inline int scmp(char s[256], const char s2[256]) { return strcmp(s, s2); }

    inline bool schr(sir& Obj, sir& Obj2,int pos) { return strchr(Obj.sirul, Obj2.sirul[pos]); }
    inline bool schr(sir& Obj, const char ch) { return strchr(Obj.sirul, ch); }
    inline bool schr(const char s, sir& Obj) { return strchr(Obj.sirul, s); }
    inline bool schr(const char s[256], char ch) { return strchr(s, ch); }

    inline bool sstr(sir& Obj, sir& Obj2) { return strstr(Obj.sirul, Obj2.sirul); }
    inline bool sstr(sir& Obj, const char s[256]) { return strstr(Obj.sirul, s); }
    inline bool sstr(char s[256], sir& Obj) { return strstr(s, Obj.sirul); }
    inline bool sstr(char s[256], const char s2[256]) { return strstr(s, s2); }
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
    sir A("aa");
    char b[256];
    b[0] = 'c';
    cout << A;
    cout << A.scmp(A,A);
}
/*
clasa sir sa se supraincarce strlen strcpy strcat strcmp strchr strstr
*/