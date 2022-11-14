#include<iostream>

using namespace std;

int main ()
{
  int kode,harga,jumlah,total,bayar,kembali;
 char mad;
 do
 {
 cout<<"  --------------------------------------------------------" <<endl;
 cout<<"                        KOPI JIWA "<<endl;
 cout<<"  --------------------------------------------------------" <<endl;
 cout<<""<<endl;
 cout<<"            MENU DAN HARGA MENUMAN " <<endl;
 cout<<"    1. ES KOPI SUSU      Rp. 18.000" <<endl;
 cout<<"    2. ES KOPI POKAT     Rp. 28.000" <<endl;
 cout<<"    3. ES COCO PRESSO    Rp. 18.000" <<endl;
 cout<<"    4. ES KOPI COKLAT    Rp. 20.000" <<endl;
 cout<<"    5. ES KOPI HITAM     Rp. 15.000" <<endl;
 cout<<"    6. ICE AMERICANO     Rp. 15.000" <<endl;
 cout<<"    7. SOY CAFFEE LATTE  Rp. 25.000" <<endl;
 cout<<"    8. ICE LATTE         Rp. 18.000" <<endl;
 cout<<"_________________________________________________________________" <<endl;

 cout<<'\n'<<"  ???  Masukan No Menu Pilihan ???   : ";
 cin>>kode;
 switch (kode)
 {  
 case 1:
  cout<<'\n'<<" ES KOPI SUSU "<<endl;
  harga= 18000;
  cout<<" Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;

 case 2:
  cout<<'\n'<<" ES KOPI POKAT "<<endl;
   harga= 28000;
  cout<<" Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"   Masih ada Yang ingin di pesan    : ";
  cin>>mad;
  break;

 case 3:
  cout<<'\n'<<" ES COCO PRESSO    "<<endl;
   harga= 18000;
  cout<<" Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;
 
 case 4:
  cout<<'\n'<<"  ES KOPI COKLAT   "<<endl;
   harga= 20000;
  cout<<" Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;
  
 
 case 5:
  cout<<'\n'<<"  ES KOPI HITAM   "<<endl;
   harga= 15000;
  cout<<" Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;
 
 case 6:
  cout<<'\n'<<" ICE AMERICANO "<<endl;
  harga= 15000;
  cout<<" Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;
  
 case 7:
  cout<<'\n'<<" SOY CAFFEE LATTE "<<endl;
  harga= 25000;
  cout<<" Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<" Total Harga  : Rp. "<<total<<endl;
  cout<<" Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<" Kembali   : Rp. "<<kembali<<endl;
  cout<<"  Masih ada Yang ingin di pesan  : ";
  cin>>mad;
  break;
  
 case 8:
   cout<<'\n'<<" ICE LATTE " <<endl;
   harga= 18000;
   cout<<" Jumlah Pesanan : ";
   cin>>jumlah;
    total=harga*jumlah;
   cout<<" Total Harga  : Rp. "<<total<<endl;
   cout<<" Uang yang Dibayar : Rp. ";
   cin>>bayar;
    kembali=bayar-total;
   cout<<" kembali   : Rp. "<<kembali<<endl;
   cout<<"  Masih ada Yang ingin di pesan  : ";
   cin>>mad;
   break; 
 cout<<" ====================Kode Yang Anda Tuliskan Salah ";
 }
 }
 while (mad/='Y');
 while (mad/='N');
 cout<<" ==================== SUKSES ==================== "<< endl;
 return 0;
}
