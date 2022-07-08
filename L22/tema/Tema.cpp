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

#pragma warning(suppress : 4996);

using namespace std;


class vector
{
    int n, v[100];
    fstream fp;
public:
    vector(int n = NULL) { for (int i = 0; i < 100; i++) v[i] = NULL; }
    ~vector() {}
    void clear()
    {
        fp.open("step_.step", ios::out);
        if (fp.fail()) { cout << "Error"; exit(0); }
        fp.close();
    }
    int write()
    {
        n = rand() % 10 + 10;
        fstream fp("step_.step", ios::app);

        if ( fp.fail()) { cout << "Error"; exit(0); }

        fp << n << endl;
        for (int i = 0; i < n; i++) fp << rand() % 10 << endl;

        fp.close();

        return n + 1;
    }
    void read(int l)
    {
        fp.open("step_.step", ios::in);

        if ( fp.fail()) { cout << "Error"; exit(0); }

        for (int i = 0; i < l; i++) fp >> v[i];

        fp >> n;

        for (int i = 0; i < n; i++) fp >> v[i];
        fp.close();

        cout << "n = " << n << endl;
        for (int i = 0; i < n; i++) cout << setw(3) << v[i];
    }
    
};



class matrice
{
    int n, m, M[100][15];
    fstream fp;
public:
    matrice(int n = NULL,int m = NULL) 
    { for (int i = 0; i < 100; i++)
        for (int j=0;j<15;j++) M[i][j] = NULL; 
    }
    ~matrice() {}
    void clear()
    {
        fp.open("step_.step", ios::out);
        if (fp.fail()) { cout << "Error"; exit(0); }
        fp.close();
    }
    int write()
    {
        n = rand() % 10 + 10;
        m = rand() % 10+1;
        fstream fp("step_.step", ios::app);

        if (fp.fail()) { cout << "Error"; exit(0); }

        fp << n << endl;
        fp << m << endl;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) fp << rand() % 10 << endl;

        fp.close();

        return (n * m) + 2;
    }
    void read(int l)
    {
        fp.open("step_.step", ios::in);

        if (fp.fail()) { cout << "Error"; exit(0); }
        
        int decoy[1000]; 
        

        for (int i = 0; i < l; i++)  fp >> decoy[i];
        //Posibila metoda de ciclare a info prin un singur vector mai mic?
        /*else 
        {
            for (int i = 0; i < (l / 1000); i++)
                for (int j = 0; j < 1000; j++) fp >> decoy[i];
            for (int i = 0; i < l - (l / 1000); i++) fp >> decoy[i];
        }*/
        
        
        fp >> n;
        fp >> m;

        for (int i = 0; i < n; i++)
            for (int j = 0;j < m;j++) fp >> M[i][j];
        fp.close();
        cout << "n = " << n << endl;
        cout << "m = " << m << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << setw(3) << M[i][j];
            }
            cout << endl;
        }
    }

};



int main()
{
    srand(time(0));


    vector A, B, C;
    int l1, l2, l3;
    l1 = A.write();
    l2 = B.write();
    l3 = C.write();

    cout << "Vectori :" << endl;
    cout << "A:" << endl;
    A.read(0);
    cout << "\n\n" << endl;
    cout << "B:" << endl;
    B.read(l1); //Citim de la punctul de oprire a primei inregistrari
    cout << "\n\n" << endl;
    cout << "C:" << endl;
    C.read(l1+l2);
    

    int lm1, lm2, lm3;
    matrice D, E, F;
    
    lm1 = D.write();
    lm2 = E.write();
    lm3 = F.write();
    cout << "\n\nszx  \n" << l1 + l2 + l3  << endl;
    cout << "\nMatrici :" << endl;
    cout << "D:" << endl;
    D.read(l1+l2+l3); //Gasim locul unde s-a oprit cursorul
    cout << "\n\n" << endl;
    cout << "E:" << endl;
    E.read(l1 + l2 + l3 + lm1);
    cout << "\n\n" << endl;
    cout << "F:" << endl;
    F.read(l1 + l2 + l3 + lm1 + lm2);

    system("pause");
    
    A.clear(); //De ajuns de apelat clear la un singur obiect pentru a sterge toata info din file
    
    return 0;
}

/*

Sa se creeze 3 vectori a cate n elemente fiecare (n diferit)
Sa se creeze 3 matrici de [n][m]

*/