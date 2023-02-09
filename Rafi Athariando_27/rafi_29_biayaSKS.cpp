#include <iostream>
using namespace std;

int main () {
string NM,PD,MatKul;
long int NIM;
int B,jumlah,sks;
char Y,jw;
int total,ts=0,harga=100000;
system("color 078");
awal:
cout<<"|==========================================|"<<endl;
cout<<"|   made by ASTRO, anti local-local club   |"<<endl;
cout<<"|==========================================|"<<endl;

 cout <<"-------------------------------------------"<<endl;
 cout <<"Nama       : ";cin>>NM;
 cout <<"nim        : ";cin>>NIM;
 cout <<"prodi      : ";cin>>PD;
 cout <<"-------------------------------------------"<<endl;
 cout <<"input jumlah matkul : ";cin>>jumlah;
 cout <<"-------------------------------------------"<<endl;

B = 0;
while (B<jumlah) {
    cout<<"Nama MatKul          : ";cin>>MatKul;
    cout<<"SKS                  : ";cin>>sks;
    ts+=sks;
    B = B + 1;
}
total=harga*ts;
cout<<"--------------------------------------------"<<endl;
cout<<"total sks                : "<<ts<<endl;
cout<<"total tarif sks          : "<<total<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"ada yang ingin ditambah  : [Y/T] ";cin>>jw;
if (jw == 'Y')
{
    system("cls");
    goto awal;
}
else {
    cout<<"arigatou"<<endl;
}
}
