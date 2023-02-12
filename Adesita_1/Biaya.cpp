#include <iostream>
#include <conio.h>
 using namespace std;

int main() {
   string nama,prodi,matakuliah;
   int i,jumlahmk,sks,total,totalsks=0,tarif=100000;
   long int nim;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Nama       : ";cin>>nama;
   cout<<" NIM        : ";cin>>nim;
   cout<<" Prodi      : ";cin>>prodi;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Input Jumlah Mata Kuliah  : " ;cin>>jumlahmk;
   cout<<"-----------------------------------------------"<<endl;

    i=0;
    do {
        cout<<" Mata Kuliah     : ";cin>>matakuliah;
        cout<<" SKS             : ";cin>>sks;
        totalsks=totalsks+sks;
              i = i + 1;
        }
        while(i<jumlahmk);

  {

   total=tarif*totalsks;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Total SKS             : "<<totalsks<<endl;
   cout<<" Total Tarif SKS       : "<<total<<endl;
   cout<<"-----------------------------------------------"<<endl;
}
}
