#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c;

    cout << "===klasifikasi segitiga===\n\n" << endl;
    cout <<"Masukan Nilai Sisi A: ";
    cin >> a;
    cout <<"Masukan Nilai Sisi B: ";
    cin >> b;
    cout <<"Masukan Nilai Sisi C: ";
    cin >> c;

    if(a==b && a==c)
    {
        cout<<"\nSegitiga sama sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"\nSegitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"\nSegitiga sembarang"<<endl;
    return 0;

}
