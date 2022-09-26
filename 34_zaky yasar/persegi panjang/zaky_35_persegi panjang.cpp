#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int nomermenu;
    float panjang,lebar;
    float luas,keliling,diagonal;

cout << "menu persegi panjang\n";
cout << "1.hitung luas\n";
cout << "2.hitung keliling\n";
cout << "3.hitung panjang diagonal\n";
cout << "4.keluar program\n";
cout << "masukan pilihan anda\n";
cin  >>nomermenu;
switch (nomermenu)
  case 1:
{
  cout<<"masukan  panjang:";
  cin>>panjang;
  cout<<"masukan lebar:";
  cin>>lebar;
  luas=panjang*lebar;
  cout<<"luas:"<<luas<<endl;
  break;

  case 2:

    cout<<"masukan panjang:";
    cin>>panjang;
    cout<<"masukan lebar:";
    cin>>lebar;
    keliling=2*panjang+2*lebar;
    cout<<"keliling"<<keliling<<endl;
    break;

  case 3:

    cout<<"masukan panjang:";
    cin>>panjang;
    cout<<"masukan lebar:";
    cin>>lebar;
    diagonal=sqrt((double)panjang*panjang+(double)lebar*lebar);
    cout<<"diagonal"<<diagonal<<endl;
    break;
}


    return 0;
}
