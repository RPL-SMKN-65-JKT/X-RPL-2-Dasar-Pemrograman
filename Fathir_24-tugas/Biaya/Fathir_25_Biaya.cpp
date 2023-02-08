#include <iostream>
using namespace std;

int main() {
   string nma,prod,matkul;
   int i,Nim,jmlhmk,sks,ttl,ttlsks=0,tarif=100000;
   char jw,y;
   system ("color 002");
   //punya bngtir
   //mending tanya sama orgnya kl g ngerti
   //drpda pke karya orang
   Awal :
   cout<<"|===============================================|"<<endl;
   cout<<"|              BIAYA PEMBAYARAN SKS             |"<<endl;
   cout<<"|               created by: TirTir              |"<<endl;
   cout<<"|===============================================|"<<endl;
   cout<<" Nama       : ";getline(cin, nma);
   cout<<" NIM        : ";cin>>Nim;
   cout<<" Prodi      : ";cin>>prod;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Input Jumlah Mata Kuliah  : " ;cin>>jmlhmk;
   cout<<"-----------------------------------------------"<<endl;
       i=0;
         while(i<jmlhmk){
        cout<<" Mata Kuliah     : ";cin>>matkul;
        cout<<" SKS             : ";cin>>sks;
      ttlsks+=sks;
       i = i + 1;
         }
   ttl=tarif*ttlsks;
   cout<<"-----------------------------------------------"<<endl;
   cout<<" Total SKS             : "<<ttlsks<<endl;
   cout<<" Total Tarif SKS       : "<<ttl<<endl;
   cout<<"Ingin melanjutkan pembayaran? [y/t] :";cin>>jw;
   cout<<"-----------------------------------------------"<<endl;

   if ( jw == 'y' )
   {
    system("cls");
       goto Awal;
   }

   else
   {
    cout<<"Terimakasih sudah melakukan pembayaran :')\n";
   }
}
