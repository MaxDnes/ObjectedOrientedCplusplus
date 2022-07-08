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




int main()
{
    srand(time(0));

    /*ofstream ofs;
    ofs.open("File.txt");
    ofs << "Step 2022" << endl;
    ofs.close();

    char sir[256];
    ifstream ifs;
    ifs.open("File.txt");
    
    ifs >> sir;
    cout << " 1 ifs = " << sir << endl;
    ifs >> sir;
    cout << " 2 ifs = " << sir << endl;
    ifs.close();*/


    //
    
    //ofstream ofs;
    //string namefile, nume,prenume,patronimc;
    //cout << "Nume fisier" << endl;
    //cin >> namefile;
    ////namefile + ".txt";

    //ofs.open(namefile += ".txt");
    //cout << "Nume " << endl;
    //cin >> nume;

    //cout << "Prenume " << endl;
    //cin >> prenume;

    //cout << "Patronimic " << endl;
    //cin >> patronimc;

    //ofs << nume + ' ' + prenume + ' ' + patronimc;

    //ofs.close();

    //ifstream ifs;
    //ifs.open(namefile += ".txt");

    //ifs >> nume;
    //cout << " nume = " << nume << endl;
    //ifs >> prenume;
    //cout << " prenume = " << prenume << endl;
    //ifs >> patronimc;
    //cout << " patronimc = " << patronimc << endl;
    //ifs.close(); 
    

    //fstream fp;

    //fp.open("step2022x.txt", ios::out);

    //if (fp.fail()) { cout << " Error OUT " << endl; exit(0); }
    //else { cout << " OK OUT " << endl; }

    //fp << "step 2022 it";

    //fp.close();

    //int x,i=0;
    //char sir[256];

    //fp.open("step2022x.txt", ios::in);

    //if (fp.fail()) { cout << " Error IN " << endl; exit(0); }
    //else { cout << " OK IN " << endl; }

    ////while ( !fp.eof() )
    ////{
    ////    /*sir[i] = fp.get();
    ////    i++;*/
    ////    
    ////}

    //fp.getline(sir, sizeof(sir));
    //
    ////sir[sizeof(sir)+1] = '\0';

    //fp >> x;

    //fp.close();

    //cout << "sir = " << sir << endl;

    //cout << "ifs = " << sir << endl;
    
    /*try
    {
        string S;
        S.resize(-1);
    }
    catch (int)
    {
        cout << 0;
    }
    catch (exception &x)
    {
        cout << 1;
    }
    catch (...)
    {
        cout << 2 << endl;
    }*/

    int n=rand()%10+10;
    fstream fp("step_.step",ios::out);

    if (fp.fail()) { cout << "Error"; exit(0); }
    else cout << "Succes!";
    
    fp << n << endl;
    for (int i = 0; i < n; i++) fp << rand() % 10 << endl;



    fp.close();

    int v[1000],N;

    fp.open("step_.step", ios::in);

    if (fp.fail()) { cout << "Error"; exit(0); }
    else cout << "Succes!";

    fp >> N;

    for (int i = 0; i < n; i++) fp >> v[i];
    fp.close();

    for (int i = 0; i < N; i++) cout<<setw(3) << v[i];

    return 0;
}

/*

Sa se creeze 3 vectori a cate n elemente fiecare (n diferit) 
Sa se creeze 3 matrici de [n][m]
*/