
#include <iostream>
#include <math.h>
#include <string>
using namespace std ;

int main (){
int kamarhotel ;
int kamarhotel2 ;
int jum ;
int akhir ;
int tot ;
int sb1=399000;
int db1=590000;
int sb2=899000;
int db2=1200000;
int sb3=699000;
int db3=899000;

system("color 059");
cout <<"Rafi athariando P"<<endl;
cout <<"x-rpl-2"<<endl;

cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                      villa ngawi                        |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;

cout <<"|=========================================================|"<<endl;
cout <<"|                     Reservasi Villa                     |"<<endl;
cout <<"|=========================================================|"<<endl;
cout <<"|               Selamat datang di villa ngawi             |"<<endl;
cout <<"|         selamat datang dan selamat beristirahat         |"<<endl;
cout <<"|                                                         |"<<endl;
cout <<"|              Daftar kamar di Hotel Melati               |"<<endl;
cout <<"|            1.Kamar Reguler                              |"<<endl;
cout <<"|            2.Kamar suit                                 |"<<endl;
cout <<"|            3.Kamar VIP                                  |"<<endl;
cout <<"|                                                         |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                  pilih kamar :";cin>>kamarhotel;
cout <<"|=========================================================|"<<endl;
system("cls");


switch (kamarhotel) {
    case 1 :

cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|            daftar harga kamar/kasur (tipe reguler)      |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                 1.singlebed : 399.000                   |"<<endl;
cout <<"|                 2.doublebed : 590.000                   |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"                 Maasukkan Pilihan Anda :";cin>>kamarhotel;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                       jumlah kamar :";cin>>kamarhotel2;

switch (kamarhotel) {
case  1 :
{
    tot=kamarhotel2*sb1;
cout<<"                     Harga kamar  = "<<tot<<endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
case 2 :
{
    tot=kamarhotel2*db1;
cout<<"                        Harga kamar ="<<tot<<endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
}
exit(0);
break;
}


switch (kamarhotel) {
    case 2 :
        {
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|          daftar harga kamar/kasur (tipe suit class)     |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                 1.singlebed : 899.000                   |"<<endl;
cout <<"|                 2.doublebed : 1.200.000                 |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                 Maasukkan Pilihan Anda :";cin>>kamarhotel;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                   Jumlah Kamar :";cin>>kamarhotel2;
        }

switch (kamarhotel) {
case  1 :
{
    tot=kamarhotel2*sb2;
cout<<"                     Harga kamar  : "<<tot<<endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
case 2 :
{
    tot=kamarhotel2*db2;
cout<<"                        Harga kamar : "<<tot<< endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
break;
}
}

switch (kamarhotel) {
case 3 :
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|         daftar harga kamar/kasur (tipe VIP class)       |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                 1.singlebed : 699.000                   |"<<endl;
cout <<"|                 2.doublebed : 899.000                   |"<<endl;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                 Maasukkan Pilihan Anda :";cin>>kamarhotel;
cout <<"|---------------------------------------------------------|"<<endl;
cout <<"|                        Jumlah Kamar :";cin>>kamarhotel2;


switch (kamarhotel) {
case  1 :
{
    tot=kamarhotel2*sb3;
cout<<"                     Harga kamar  = " <<tot<<endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
case 2 :
{
    tot=kamarhotel2*db3;
cout<<"                        Harga kamar = " <<tot<<endl;
cout<<"----------------------------------------------------------|"<<endl;
cout<<"             Terimakasih dan selamat beristirahat          "<<endl;
    break;
}
cout <<" terimakasih, selamat beristirahat dengan tenang "<<endl;
}
break;
}

}

