#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
int juice;
int hrg,uang=20000,sisa;
system("color a");
printf("\tSELAMAT DATANG DI     \n");
printf("\           YUJEN JUICE\n\n");

string nama;
    cout<<"|----------------------------------|"<<endl;
    cout<<"| Uang Jajan Mu : Rp. 20.000       |"<<endl;
    cout<<"|----------------------------------|"<<endl;
    cout<<"| Nama Pembeli  : ";
    getline(cin, nama);
system ("cls");
printf("\tSELAMAT DATANG DI     \n");
printf("\           YUJEN JUICE\n\n");
cout <<  " ==========================================================" << endl;
cout << "|       MENU JUICE SEGAR                    | HARGA        |\n";
cout << "|-------------------------------------------|--------------|\n";
cout << "|1. Juice Alpukat                           | Rp. 12.000   |\n";
cout << "|2. Juice Apel                              | Rp. 12.000   |\n";
cout << "|3. Juice Mangga                            | Rp. 12.000   |\n";
cout << "|4. Juice Strawberry                        | Rp. 13.000   |\n";
cout << "|5. Juice Semangka                          | Rp. 12.000   |\n";
cout << "|6. Juice Anggur                            | Rp. 15.000   |\n";
cout << "|7. Juice Pear                              | Rp. 12.000   |\n";
cout << "|8. Juice Pisang                            | Rp. 13.000   |\n";
cout << "|9. Juice Nanas                             | Rp. 12.000   |\n";
cout << "|10.Juice Melon                             | Rp. 12.000   |\n";
cout << "|-------------------------------------------|--------------|\n";
cout << "  PILIH MENU JUICE : ";cin>>juice;
cout << "======================================"<<endl;
    switch (juice) {
case 1:
     hrg=12000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Alpukat "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 2:
     hrg=12000;
     sisa=uang-hrg;
    cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Apel "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 3:
     hrg=12000;
     sisa=uang-hrg;
    cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Mangga "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 4:
     hrg=13000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Strawberry "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 5:
     hrg=12000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Semangka "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 6:
     hrg=15000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Anggur "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
    break;
case 7:
     hrg=12000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Pear "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 8:
     hrg=13000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Pisang "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 9:
     hrg=12000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Nanas "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
case 10:
     hrg=12000;
     sisa=uang-hrg;
     cout<<"      YUJEN JUICE     "<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Nama Pembeli       : "<<nama<< endl;
     cout<<"  Pilihan Juice      : Juice Melon "<<endl;
     cout<<"  Harga Juice        : "<<hrg<<endl;
     cout<<"  Uang Jajan         : "<<uang<<endl;
     cout<<"-----------------------------------"<<endl;
     cout<<"  Sisa Uang Jajan Mu : "<<sisa<<endl;
     break;
default:
    cout << "BELI DI TOKO LAIN AJA YAWW T_T T_T T_T";
    break;
    }
return 0; }
