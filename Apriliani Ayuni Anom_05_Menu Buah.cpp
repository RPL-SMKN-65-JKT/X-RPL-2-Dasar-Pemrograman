#include <iostream>

using namespace std;

int main()
{
    char pilihbuah;
    cout<< "         SELAMAT DATANG DI  "<<endl;
    cout<<"          TOKO BUAH APRIL   "<<endl;
    cout<<" ---------------------------------"<<endl;
    cout<<"|           JENIS BUAH            |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"|         1.Apel                  |"<<endl;
    cout<<"|         2.Jeruk                 |"<<endl;
    cout<<"|         3.Mangga                |"<<endl;
    cout<<"|         4.Anggur                |"<<endl;
    cout<<"|         5.Kurma                 |"<<endl;
    cout<<" ---------------------------------"<<endl;

    cout<<"Pilih Buah Apa Yang Ingin Anda Beli  : ";cin>>pilihbuah;

  switch (pilihbuah){
  case '1' :
    {
        cout<<"----------------------------------"<<endl;
        cout<<"| 1.Apel 5 Kg      | Rp. 175.000 |"<<endl;
        cout<<"| 2.Apel 1 Kg      | Rp.  35.000 |"<<endl;
        cout<<"| 3.Apel 500 gram  | Rp.  17.500 |"<<endl;
        cout<<"----------------------------------"<<endl;
int hrg,tot,duit=300000;
char pilihgram;
        cout<<"--------------------------"<<endl;
        cout<<" Pilih Beli Berapa Kilogram : ";cin>>pilihgram;
        cout<<"__________________________"<<endl;

  switch (pilihgram){
  case '1' :
      {
        hrg=175000;
        tot=duit-hrg;
        cout<<" Anda Membeli Apel 5kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu  : " <<duit<<endl;
        cout<<" Harga Apel 5kg    : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu  : " <<tot<<endl;
  break;
      }

  case '2' :
    {
        hrg=35000;
        tot=duit-hrg;
        cout<<" Anda Membeli Apel 1kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu  : " <<duit<<endl;
        cout<<" Harga Apel 1kg    : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu  : " <<tot<<endl;
  break;
    }
  case '3' :
    {
        hrg=17500;
        tot=duit-hrg;
        cout<<" Anda Membeli Apel 500gram "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu    :   " <<duit<<endl;
        cout<<" Harga Apel 500gram  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu    : " <<tot<<endl;
    }
  }
  break;
    }
  case '2' :
    {
        cout<<"----------------------------------"<<endl;
        cout<<"| 1.Jeruk 5 Kg     | Rp  125.000 |"<<endl;
        cout<<"| 2.Jeruk 1 Kg     | Rp.  25.000 |"<<endl;
        cout<<"| 3.Jeruk 500 gram | Rp.  12.500 |"<<endl;
        cout<<"----------------------------------"<<endl;
int hrg,tot,duit=300000;
char pilihgram;
        cout<<"--------------------------"<<endl;
        cout<<" Pilih Beli Berapa Kilogram : ";cin>>pilihgram;
        cout<<"__________________________"<<endl;

  switch (pilihgram){
  case '1' :
      {
        hrg=125000;
        tot=duit-hrg;
        cout<<" Anda Membeli Jeruk 5 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu    :   " <<duit<<endl;
        cout<<" Harga Jeruk 5 Kg    : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu    : " <<tot<<endl;
  break;
      }

  case '2' :
    {
        hrg=25000;
        tot=duit-hrg;
        cout<<" Anda Membeli Jeruk 1 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu  : " <<duit<<endl;
        cout<<" Harga Jeruk 1 Kg  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu  : " <<tot<<endl;
  break;
    }
  case '3' :
    {
        hrg=12500;
        tot=duit-hrg;
        cout<<" Anda Membeli Jeruk 500 gram "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu      : " <<duit<<endl;
        cout<<" Harga Jeruk 500 gram  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu      : " <<tot<<endl;
    }
  }
break;
}
  case '3' :
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"| 1.Mangga 5 Kg     | Rp  150.000 |"<<endl;
        cout<<"| 2.Mangga 1 Kg     | Rp.  30.000 |"<<endl;
        cout<<"| 3.Mangga 500 gram | Rp.  15.000 |"<<endl;
        cout<<"-----------------------------------"<<endl;
int hrg,tot,duit=300000;
char pilihgram;
        cout<<"--------------------------"<<endl;
        cout<<" Pilih Beli Berapa Kilogram : ";cin>>pilihgram;
        cout<<"__________________________"<<endl;

  switch (pilihgram){
  case '1' :
      {
        hrg=150000;
        tot=duit-hrg;
        cout<<" Anda Membeli Mangga 5 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   :   " <<duit<<endl;
        cout<<" Harga Mangga 5 Kg  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
      }

  case '2' :
    {
        hrg=30000;
        tot=duit-hrg;
        cout<<" Anda Membeli Mangga 1 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   : " <<duit<<endl;
        cout<<" Harga Mangga 1 Kg  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
    }
  case '3' :
    {
        hrg=15000;
        tot=duit-hrg;
        cout<<" Anda Membeli Mangga 500 gram "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu      : " <<duit<<endl;
        cout<<" Harga Jeruk 500 gram  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu      : " <<tot<<endl;
    }
  }
break;
  }
  case '4' :
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"| 1.Anggur 5 Kg     | Rp  170.000 |"<<endl;
        cout<<"| 2.Anggur 1 Kg     | Rp.  34.000 |"<<endl;
        cout<<"| 3.Anggur 500 gram | Rp.  17.000 |"<<endl;
        cout<<"-----------------------------------"<<endl;
int hrg,tot,duit=300000;
char pilihgram;
        cout<<"--------------------------"<<endl;
        cout<<" Pilih Beli Berapa Kilogram : ";cin>>pilihgram;
        cout<<"__________________________"<<endl;

  switch (pilihgram){
  case '1' :
      {
        hrg=170000;
        tot=duit-hrg;
        cout<<" Anda Membeli Anggur 5 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   :   " <<duit<<endl;
        cout<<" Harga Anggur 5 Kg  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
      }

  case '2' :
    {
        hrg=34000;
        tot=duit-hrg;
        cout<<" Anda Membeli Anggur 1 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   : " <<duit<<endl;
        cout<<" Harga Anggur 1 Kg  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
    }
  case '3' :
    {
        hrg=17000;
        tot=duit-hrg;
        cout<<" Anda Membeli Anggur 500 gram "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu       : " <<duit<<endl;
        cout<<" Harga Anggur 500 gram  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu       : " <<tot<<endl;
    }
  }
break;
    }
  case '5' :
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"| 1.Kurma 5 Kg     | Rp  140.000 |"<<endl;
        cout<<"| 2.Kurma 1 Kg     | Rp.  28.000 |"<<endl;
        cout<<"| 3.Kurma 500 gram | Rp.  14.000 |"<<endl;
        cout<<"-----------------------------------"<<endl;
int hrg,tot,duit=300000;
char pilihgram;
        cout<<"--------------------------"<<endl;
        cout<<" Pilih Beli Berapa Kilogram : ";cin>>pilihgram;
        cout<<"__________________________"<<endl;

  switch (pilihgram){
  case '1' :
      {
        hrg=140000;
        tot=duit-hrg;
        cout<<" Anda Membeli Kurma 5 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   :   " <<duit<<endl;
        cout<<" Harga Kurma 5 Kg   : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
      }

  case '2' :
    {
        hrg=28000;
        tot=duit-hrg;
        cout<<" Anda Membeli Kurma 1 Kg "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu   : " <<duit<<endl;
        cout<<" Harga Kurma 1 Kg   : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu   : " <<tot<<endl;
  break;
    }
  case '3' :
    {
        hrg=14000;
        tot=duit-hrg;
        cout<<" Anda Membeli Kurma 500 gram "<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Uang Tabungan Mu      : " <<duit<<endl;
        cout<<" Harga Kurma 500 gram  : " <<hrg<<endl;
        cout<<"-----------------------"<<endl;
        cout<<" Sisa Tabungan Mu      : " <<tot<<endl;
    }
  }
break;
}
  break;
  }
}
