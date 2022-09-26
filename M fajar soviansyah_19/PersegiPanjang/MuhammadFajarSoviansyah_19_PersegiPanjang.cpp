#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int nomormenu;
    float panjang,lebar;
    float luas,keliling,diagonal;
    cout<< "<----persegi panjang---->\n";
    cout << "1.Hitung luas\n";
    cout << "2.hitung keliling\n";
    cout << "3.Hitung panjang diagonal\n";
    cout << "4.keluar program\n";
    cout << "<----------------------->\n";
    cout << "\nmasukkan pilihan anda?\n";
    cin >> nomormenu;
    switch (nomormenu)
{
    case 1 :
           {
           cout<<"Panjang : ";
           cin>>panjang;
           cout<<"Lebar   : ";
           cin>>lebar;
           luas=panjang*lebar;
           cout<<"Luas    : "<<luas<<endl;
           break;
           }
    case 2 :
           {
            cout<<"panjang : ";
            cin>>panjang;
            cout<<"lebar : ";
            cin>>lebar;
            keliling=2*panjang+2*lebar;
            cout<<"keliling : "<<keliling<<endl;
            break;
           }
    case 3 :
            {
             cout<<"  Panjang  : ";
             cin>>panjang;
             cout<<"  Lebar    : ";
             cin>>lebar;
             diagonal=sqrt((double)panjang*panjang+(double)lebar*lebar);
             cout<<"  Diagonal : "<<diagonal<<endl;
             break;
            }
    case 4 :
            {
                cout<<"\nkeluar program\n";
            }

      }
    return 0;

}
