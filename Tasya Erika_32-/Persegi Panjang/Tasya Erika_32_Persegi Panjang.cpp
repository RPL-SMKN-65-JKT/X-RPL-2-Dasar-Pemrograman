#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char nomormenu;
    float panjang,lebar;
    float luas,keliling;
    float diagonal;

    cout<<" Tasya Erika  "<<endl;
    cout<<" Menu Persegi Panjang"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<" 1.Hitung Luas "<<endl;
    cout<<" 2.Hitung Keliling "<<endl;
    cout<<" 3.Hitung Panjang Diagonal "<<endl;
    cout<<" 4.Keluar Program "<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<" Masukkan Pilihan Anda "<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cin>>nomormenu;



    switch (toupper(nomormenu)){
        case '1':
            {


    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<" Masukkan nilai panjang : ";
    cin>>panjang;
    cout<<" Masukkan nilai lebar : ";
    cin>>lebar;
    cout <<" Luas persegi panjang : ";
    cout << (panjang * lebar);
      break;
    }
        case '2':
            {


    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<" Masukkan nilai panjang : ";
    cin>>panjang;
    cout<<" Masukkan nilai lebar : ";
    cin>>lebar;
    cout<<" Kelliling persegi panjang : ";
    cout<< (2*panjang + 2*lebar);
      break;
            }
          case '3' :
            {
             cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
             cout<<" Masukkan nilai panjang : ";
             cin>>panjang;
             cout<<" Masukkan nilai lebar : ";
             cin>>lebar;
             diagonal=sqrt((double)panjang*panjang+(double)lebar*lebar);
             cout<<"  Diagonal : "<<diagonal<<endl;
             break;
            }

          case '4' :
            {
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"keluar program\n";

            }





}

}
