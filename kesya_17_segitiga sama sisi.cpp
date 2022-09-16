/*
*Menggunakan strcat(tujuan, sumber)
*untuk menggabungkan dua string
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c;

    cout <<"Berikan sisi A : ";
    cin >> a;

    cout <<"Berikan sisi B : ";
    cin >> b;

    cout <<"Berikan sisi C : ";
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


    system("pause");
    return 0;

}