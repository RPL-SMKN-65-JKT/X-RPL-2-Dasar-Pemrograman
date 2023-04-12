#include <iostream>
//MASA SIH BRO HARI GINI MAU COPAS TRUS UBAH VARIABEL TIPE DATANYA
using namespace std;
//PUNYA ZAFAR
//MODAL UBAH VARIABEL MAH JUGA KETAHUAN KALI
int main(){//APALAGI CUMA UBAH COUTNYA DOANG
   system ("color 076");
   int ARnilai [10];
    cout<<"|=================================================|"<<endl;
    cout<<"|    PROGRAM PERTAMBAHAN DAN PENGURANGAN ARRAY    |"<<endl;
    cout<<"|                  BY: ZAFARRR                    |"<<endl;
    cout<<"|                   X-PPLG 2                      |"<<endl;
    cout<<"|=================================================|"<<endl;

   for (int i=0; i<10;i++){
    cout<<" Isi Indeks ke ["<<i<<"] = ";
    cin>>ARnilai[i];
   }//BANG UDAH BANG
   int sum = 0;
   for(int i=0; i<10; i++){
      sum += ARnilai[i];
   }
   int sub = ARnilai[0];
   for(int i=1; i<10; i++) {
      sub -= ARnilai[i];
   }//MASA SIH BRO HARI GINI MAU COPAS TRUS UBAH VARIABEL TIPE DATANYA
cout<<"================================================="<<endl;
 cout<<" Penjumlahan isi indeks array :" << sum << endl;
 cout<<" Pengurangan isi indeks array :" << sub << endl;
cout<<"================================================="<<endl;
return 0;
}

