#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    system ("color a");
    int pilihmerek;
       string a,b,c;
       string email;
string nama;
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;

    cout<<"\n\n\n           ||---------------------------"<<endl;
    cout<<"           || HARAP ISI DATA BERIKUT  "<<endl;
    cout<<"           ||-------------------------------"<<endl;
    cout<<"           || Nama Pembeli  : ";getline(cin, nama);
    cout<<"           || Alamat Email  : ";cin>>email;
    cout<<"           || Nomor Telepon : ";cin>>a,b,c;
     system ("cls");
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;
    cout<<"                                          ___________________  "<<endl;
    cout<<"                                         | SELAMAT DATANG DI | "<<endl;
    cout<<"                                        | ZAFAR PHONECELL LOL |"<<endl;
     cout<<"                                   -------------------------------- "<<endl;
     cout<<"                                   |        List Phone            |"<<endl;
     cout<<"                                   |------------------------------|"<<endl;
     cout<<"                                   |        1. IPHONE             |"<<endl;
     cout<<"                                   |        2. XIAOMI             |"<<endl;
     cout<<"                                   |         3. VIVO              |"<<endl;
     cout<<"                                   |         4. OPPO              |"<<endl;
     cout<<"                                   |        5. REALME             |"<<endl;
     cout<<"                                   |______________________________|"<<endl;
    cout<<"                                   ________________________________"<<endl;
    cout<<"                               Masukkan Pilihan Brand HP anda : ";cin>>pilihmerek;
    cout<<"                                   -----------------------------"<<endl;
    cout<<"                                   -----------------------------"<<endl;
  system ("cls");

    switch (pilihmerek){
        case 1:
            {
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;

                                cout<<"      __________________________________________________"<<endl;
                                cout<<"     |        List IPhone           |      Harga       |"<<endl;
                                cout<<"     |-------------------------------------------------|"<<endl;
                                cout<<"     |   1. IPhone 12               |  Rp. 11.999.000  |"<<endl;
                                cout<<"     |   2. IPhone 12 Pro           |  Rp. 15.799.000  |"<<endl;
                                cout<<"     |   3. IPhone 12 Pro Max       |  Rp. 20.499.000  |"<<endl;
                                cout<<"     |   4. IPhone 13               |  Rp. 15.199.000  |"<<endl;
                                cout<<"     |   5. IPhone 13 Pro           |  Rp. 18.699.000  |"<<endl;
                                cout<<"     |   6. IPhone 13 Pro Max       |  Rp  35.650.000  |"<<endl;
                                cout<<"     |______________________________|__________________|"<<endl;
       int hrg,modal=40000000,tot;
       int model;
       cout<<"-------------------------"<<endl;
       cout<<"Masukan Pilihan Model HP : ";cin>>model;
       cout<<"-------------------------"<<endl;
       system ("cls");
       switch (model){
       case 1:
          {

                cout<<"DETAIL PESANAN"<<endl;
                hrg= 1199000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<" Harga Iphone 12    :"<<hrg<<endl;
                cout<<" Uang Kamu          :"<<modal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<" Sisa Uangmu Adalah :"<<tot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<" AMPUN SULTAN T_T T_T T_T"<<endl;
         break;
          }
       case 2:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrg= 15799000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Iphone 12 Pro    :"<<hrg<<endl;
                cout<<"    Uang Kamu              :"<<modal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah     :"<<tot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN T_T T_T T_T"<<endl;
        break;
        }
       case 3:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrg= 20499000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Iphone 12 Pro Max  :"<<hrg<<endl;
                cout<<"    Uang Kamu                :"<<modal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah       :"<<tot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN T_T T_T T_T"<<endl;
        break;
        }
       case 4:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrg= 15199000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Iphone 13    :"<<hrg<<endl;
                cout<<"    Uang Kamu          :"<<modal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah :"<<tot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN INDIA T_T T_T T_T"<<endl;

        break;
        }
       case 5:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrg= 18699000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Iphone 13 Pro   :"<<hrg<<endl;
                cout<<"    Uang Kamu             :"<<modal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah    :"<<tot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN INDIA T_T T_T T_T"<<endl;
        break;
        }
       case 6:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrg= 35650000;
                tot=modal-hrg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Harga Iphone 13 Pro Max   :"<<hrg<<endl;
                cout<<"    Uang Kamu                 :"<<modal<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah        :"<<tot  <<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    AMPUN SULTAN INDIA ,SULTAN PARAH T_T T_T T_T"<<endl;
        }
       }
      break;
          }
        case 2:
            {
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;
                                cout<<" __________________________________________________"<<endl;
                                cout<<"|        List Xiaomi           |      Harga       |"<<endl;
                                cout<<"|-------------------------------------------------|"<<endl;
                                cout<<"|   1. Redmi 10 5G             |  Rp. 2.425.000   |"<<endl;
                                cout<<"|   2. Xiaomi 12 Lite 5G       |  Rp. 5.799.000   |"<<endl;
                                cout<<"|   3. Redmi 10C               |  Rp. 1.499.000   |"<<endl;
                                cout<<"|   4. Xiaomi 12 Pro           |  Rp. 12.199.000  |"<<endl;
                                cout<<"|   5. Xiaomi 12               |  Rp. 10.699.000  |"<<endl;
                                cout<<"|   6. Redmi note 11           |  Rp. 2.699.000   |"<<endl;
                                cout<<"|______________________________|__________________|"<<endl;

       int hrgg,modaal=40000000,toot;
       int model;

       cout<<"-------------------------"<<endl;
       cout<<"Masukan Pilihan Model HP: ";cin>>model;
       cout<<"-------------------------"<<endl;
       system ("cls");

   switch (model){
       case 1:
          {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 2425000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Redmi 10 5G   :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"   ANJAY HP BARU NOT BAD "<<endl;

         break;
          }
       case 2:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 5799000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Xiaomi 12 Lite 5G    :"<<hrgg<<endl;
                cout<<"    Uang Kamu                  :"<<modaal<<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah         :"<<toot  <<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    AMPUN SULTAN XIAOMAI T_T T_T T_T"<<endl;
        break;
        }
       case 3:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 1499000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Redmi 10C     :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    HP ENTRY LEVEL YANG LUMAYAN "<<endl;
        break;
        }
       case 4:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 12199000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Xiaomi 12 Pro :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN ,GIP ALOK BANG  T_T T_T T_T"<<endl;

        break;
        }
       case 5:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 10699000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Xiaomi 12     :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah   :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    OOMAGAAHH T_T T_T T_T"<<endl;
        break;
        }
       case 6:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 2699000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Harga Redmi note 11       :"<<hrgg<<endl;
                cout<<"    Uang Kamu                 :"<<modaal<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah        :"<<toot  <<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    LOW PRICE BUT HIGH QUALITY "<<endl;

          break;
            }
   }
            }
            break;

        case 3:
        {
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;
                                cout<<" __________________________________________________"<<endl;
                                cout<<"|        List Vivo             |      Harga       |"<<endl;
                                cout<<"|-------------------------------------------------|"<<endl;
                                cout<<"|   1. Vivo V25 Pro            |  Rp. 10.425.000  |"<<endl;
                                cout<<"|   2. VIvo V23 5G             |  Rp. 19.799.000  |"<<endl;
                                cout<<"|   3. Vivo Y21 A              |  Rp. 6.499.000   |"<<endl;
                                cout<<"|   4. Vivo Y20 SE             |  Rp. 4.199.000   |"<<endl;
                                cout<<"|   5. Vivo V15                |  Rp. 2.699.000   |"<<endl;
                                cout<<"|   6. Vivo Y19                |  Rp. 3.199.000   |"<<endl;
                                cout<<"|______________________________|__________________|"<<endl;


       int hrgg,modaal=40000000,toot;
       int model;

       cout<<"-------------------------"<<endl;
       cout<<"Masukan Pilihan Model HP : ";cin>>model;
       cout<<"-------------------------"<<endl;
       system ("cls");
   switch (model){
       case 1:
          {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 10425000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Vivo V25 Pro  :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"   ANJAY HP BARU SULTAN  "<<endl;

         break;
          }
       case 2:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 19799000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Harga Vivo V23 5G              :"<<hrgg<<endl;
                cout<<"    Uang Kamu                      :"<<modaal<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah             :"<<toot  <<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    AMPUN SULTAN VIVO T_T T_T T_T   "<<endl;
        break;
        }
       case 3:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 6499000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Vivo Y21 A    :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    HP ENTRY LEVEL YANG LUMAYAN "<<endl;
        break;
        }
       case 4:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 4199000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Vivo Y20 SE   :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    AMPUN SULTAN ,GIP ALOK BANG  T_T T_T T_T"<<endl;

        break;
        }
       case 5:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 2699000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Vivo V15      :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    OOMAGAAHH T_T T_T T_T"<<endl;
        break;
        }
       case 6:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 3199000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Harga Vivo Y19            :"<<hrgg<<endl;
                cout<<"    Uang Kamu                 :"<<modaal<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah        :"<<toot  <<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    LOW PRICE BUT HIGH QUALITY "<<endl;

          break;
            }
   }
        break;
            }
        case 4:
            {
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;
                                cout<<" __________________________________________________"<<endl;
                                cout<<"|        List Oppo             |      Harga       |"<<endl;
                                cout<<"|-------------------------------------------------|"<<endl;
                                cout<<"|   1. OPPO FIND X5 PRO 5G     |  Rp. 14.999.000  |"<<endl;
                                cout<<"|   2. OPPO FIND X3 PRO 5G     |  Rp. 19.799.000  |"<<endl;
                                cout<<"|   3. OPPO RENO 8             |  Rp  4.999.000   |"<<endl;
                                cout<<"|   4. OPPO RENO 7 Z 5G        |  Rp. 4.199.000   |"<<endl;
                                cout<<"|   5. OPPO Reno 6             |  Rp  4.799.000   |"<<endl;
                                cout<<"|   6. OPPO Reno 5             |  Rp  4.499.000   |"<<endl;
                                cout<<"|______________________________|__________________|"<<endl;

       int hrgg,modaal=40000000,toot;
       int model;
       cout<<"-------------------------"<<endl;
       cout<<"Masukan Pilihan Model HP: ";cin>>model;
       cout<<"-------------------------"<<endl;
       system ("cls");
   switch (model){
       case 1:
          {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 14999000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    Harga OPPO FIND X5 PRO 5G  :"<<hrgg<<endl;
                cout<<"    Uang Kamu                  :"<<modaal<<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah         :"<<toot  <<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"   ANJAY HP BARU SULTAN         "<<endl;
         break;
          }
       case 2:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 19799000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Harga OPPO FIND X3 PRO 5G      :"<<hrgg<<endl;
                cout<<"    Uang Kamu                      :"<<modaal<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah             :"<<toot  <<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    AMPUN SULTAN OPPO T_T T_T T_T   "<<endl;
        break;
        }
       case 3:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 4999000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga OPPO RENO 8   :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    HP ENTRY LEVEL YANG LUMAYAN "<<endl;
        break;
        }
       case 4:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 4199000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    Harga OPPO RENO 7 Z 5G  :"<<hrgg<<endl;
                cout<<"    Uang Kamu               :"<<modaal<<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah      :"<<toot  <<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    AMPUN SULTAN ,GIP ALOK BANG  T_T T_T T_T"<<endl;
        break;
        }
       case 5:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 4799000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga OPPO Reno 6    :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    OOMAGAAHH T_T T_T T_T"<<endl;
        break;
        }
       case 6:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 4499000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Harga OPPO Reno 5          :"<<hrgg<<endl;
                cout<<"    Uang Kamu                 :"<<modaal<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah        :"<<toot  <<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    LOW PRICE BUT HIGH QUALITY "<<endl;

          break;
        }
   }
      break;
            }

        case 5:
            {
    cout<<"|-----------------------------|"<<endl;
    cout<<"| Uang Mu : Rp. 40.000.000    |"<<endl;
    cout<<"|-----------------------------|"<<endl;
                                cout<<" __________________________________________________"<<endl;
                                cout<<"|        List Realme           |      Harga       |"<<endl;
                                cout<<"|-------------------------------------------------|"<<endl;
                                cout<<"|   1. Realme Narzo 20 Pro     |  Rp 3.399.000    |"<<endl;
                                cout<<"|   2. Realme Narzo 30A        |  Rp 1.899.000    |"<<endl;
                                cout<<"|   3. Realme Narzo 50A        |  Rp 1.998.000    |"<<endl;
                                cout<<"|   4. Realme GT Neo 3T        |  Rp 5.299.000    |"<<endl;
                                cout<<"|   5. Realme C21Y             |  Rp 1.599.000    |"<<endl;
                                cout<<"|   6. Realme C35              |  Rp 2.289.000    |"<<endl;
                                cout<<"|______________________________|__________________|"<<endl;
       int hrgg,modaal=40000000,toot;
       int model;
       cout<<"-------------------------"<<endl;
       cout<<"Masukan Pilihan Model HP : ";cin>>model;
       cout<<"-------------------------"<<endl;
       system ("cls");
   switch (model){
       case 1:
          {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 3399000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    Harga Realme Narzo 20 Pro  :"<<hrgg<<endl;
                cout<<"    Uang Kamu                  :"<<modaal<<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah         :"<<toot  <<endl;
                cout<<"--------------------------------"<<endl;
                cout<<"   ANJAY HP BARU SULTAN         "<<endl;
         break;
          }
       case 2:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 1899000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Harga Realme Narzo 30A         :"<<hrgg<<endl;
                cout<<"    Uang Kamu                      :"<<modaal<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah             :"<<toot  <<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"     T_T T_T T_T   "<<endl;
        break;
        }
       case 3:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 1998000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"------------------------------"<<endl;
                cout<<"    Harga Realme Narzo 50A   :"<<hrgg<<endl;
                cout<<"    Uang Kamu                :"<<modaal<<endl;
                cout<<"------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah       :"<<toot  <<endl;
                cout<<"------------------------------"<<endl;
                cout<<"    HP ENTRY LEVEL YANG LUMAYAN "<<endl;
        break;
        }
       case 4:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 5299000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    Harga Realme GT Neo 3T  :"<<hrgg<<endl;
                cout<<"    Uang Kamu               :"<<modaal<<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah      :"<<toot  <<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"    AMPUN SULTAN ,GIP ALOK BANG  T_T T_T T_T"<<endl;
        break;
        }
       case 5:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 1599000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Harga Realme C21Y   :"<<hrgg<<endl;
                cout<<"    Uang Kamu           :"<<modaal<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah  :"<<toot  <<endl;
                cout<<"-------------------------"<<endl;
                cout<<"    OOMAGAAHH T_T T_T T_T"<<endl;
        break;
        }
       case 6:
        {
                cout<<"DETAIL PESANAN"<<endl;
                hrgg= 2289000;
                toot=modaal-hrgg;
                cout<<"-----------------------------------"<<endl;
                cout<<" Nama Pembeli       : "<<nama<< endl;
                cout<<" Alamat Email       : "<<email<<endl;
                cout<<" Nomor Telepon      : "<<a<<b<<c<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Harga Realme C35          :"<<hrgg<<endl;
                cout<<"    Uang Kamu                 :"<<modaal<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    Sisa Uangmu Adalah        :"<<toot  <<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"    LOW PRICE BUT HIGH QUALITY "<<endl;
          break;
        }
   }
      break;
            }
            default:
    cout << "\n\nJANGAN NGADI NGADI T_T T_T T_T";
    break;
    }
}
