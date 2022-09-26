#include <iostream>
#include <math.h>
using namespace std ;

int main (){
int nomermenu ;
float  panjang,lebar ;
float  keliling,luas,diagonal ;

system("color 059");
cout <<"Rafi athariando P"<<endl;
cout <<"x-rpl-2"<<endl;
cout <<"=========Menu Persegi Panjang=========\n"<<endl ;
cout <<"1.Hitung luas"<<endl ;
cout <<"2.Hitung keliling"<<endl ;
cout <<"3.Hitung Panjang diagonal"<<endl ;
cout <<"4.keluar program\n"<<endl ;
cout <<"Masukkan pilihan anda ?"<<endl ;
cin  >>nomermenu ;

switch (nomermenu) {
case 1 :{
    cout <<"menghitung luas"<<endl;
    cout <<"==================="<<endl;
    cout <<"masukkan panjang = ";cin  >>panjang;
    cout <<"masukkan lebar = ";  cin  >>lebar;
    luas = panjang*lebar ;
    cout <<"luas Persegi Panjang = "<<luas<<endl;
    break;
}


case 2 : {
    cout <<"menghitung keliling"<<endl;
    cout <<"======================="<<endl;
    cout <<"masukkan panjang = "; cin  >>panjang;
    cout <<"masukkan lebar = ";   cin  >>lebar;
    keliling = 2*panjang+2*lebar;
    cout <<"keliling persegi panjang = "<<keliling<<endl;
    break;
}


case 3 : {
    cout <<"menghitung panjang diagonal"<<endl;
    cout <<"masukkan panjang = "; cin >>panjang;
    cout <<"masukkan lebar = ";   cin >>lebar;
    diagonal = sqrt((double)panjang*panjang+(double)lebar*lebar);
             cout<<"  Diagonal = "<<diagonal<<endl;
             break;
}
}

}
