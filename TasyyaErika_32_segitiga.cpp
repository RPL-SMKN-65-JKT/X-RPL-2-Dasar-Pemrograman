#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c;
    
    printf ("KLASIFIKASI SEGITIGA TASYA ERIKA\n\n");
    cout <<"Masukan Nilai Sisi A : ";
    cin >> a;
    cout <<"Masukan Nilai Sisi B : ";
    cin >> b;
    cout <<"Masukan Nilai Sisi C : ";
    cin >> c;

    if(a==b && a==c)
    {
        cout<<"Segitiga sama sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"Segitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"Segitiga sembarang"<<endl;
    return 0;

}