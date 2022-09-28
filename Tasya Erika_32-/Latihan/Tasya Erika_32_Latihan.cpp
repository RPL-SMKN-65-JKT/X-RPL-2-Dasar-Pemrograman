#include<iostream>
using namespace std;
int main(){
int i = 10;
if (i ==10)
{
    if (i < 15)
        cout<<"i is smaller than 15\n";
    if (i < 12)
        cout<<"i is smaller than 12 too\n";
    else
        cout<<"i is greater than 15";
}
return 0;

}


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
