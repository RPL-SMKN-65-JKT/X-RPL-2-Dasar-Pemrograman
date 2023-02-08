#include <iostream>
using namespace std;

int main() {
   string nama,prodi,matakuliah;
   int i,nim,jumlahmk,sks,total,totalsks=0,tarif=100000; system ("color 076");
 //PUNYAAA ZAFAARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
 //PUNYA MUHAMAD ZAFAR SYAH
   cout<<"|===============================================|"<<endl;
   cout<<"|       PROGRAM BIAYA PEMBAYARAN SKS            |"<<endl;
   cout<<"|          By: Muhamad Zafar Syah               |"<<endl;
   cout<<"|===============================================|"<<endl;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Nama       : ";getline(cin, nama);
   cout<<" NIM        : ";cin>>nim;
   cout<<" Prodi      : ";cin>>prodi;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Input Jumlah Mata Kuliah  : " ;cin>>jumlahmk;
   cout<<"-----------------------------------------------"<<endl;
       i=0;   //JANGAN COPAS YA
         while(i<jumlahmk){//INGET DOSA YA
        cout<<" Mata Kuliah     : ";cin>>matakuliah;
        cout<<" SKS             : ";cin>>sks;
      totalsks+=sks;
       i = i + 1;//MENDING GAUSAH NGERJAIN DARI PADA CUMA COPAS
         }//HAYOLOOO COPAS DEK
   total=tarif*totalsks;//PUNYA ZAFAR
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Total SKS             : "<<totalsks<<endl;
  //LU YANG NYONTEK GAKAL DPT ILMU
   cout<<" Total Tarif SKS       : "<<total<<endl;
   cout<<"-----------------------------------------------"<<endl;
}
//JAANGAN COPAS DEK
