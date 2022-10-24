#include <iostream>
using namespace std;

int main () {

system("color a");
printf("\tSELAMAT DATANG DI RESTO PADANG\n");
printf("\               AA GATOT\n\n");

int menu;
int minuman;

cout <<  "===========================================================" << endl;
cout << "|       MENU PAKET RESTO PADANG            | HARGA        |\n";
cout << "|------------------------------------------|--------------|\n";
cout << "|1. Nasi + Ayam Bakar + Sambal + Lalapan   | Rp. 20.000   |\n";
cout << "|2. Nasi + Ikan Lele + Sambal + Lalapan    | Rp. 17.000   |\n";
cout << "|3. Nasi + Telur Bulat + Sambal + Lalapan  | Rp. 15.000   |\n";
cout << "|4. Nasi + Telur Dadar + Sambal + Perkedel | Rp. 21.000   |\n";
cout << "|5. Nasi + Ikan Nila + Sambal + Tempe      | Rp. 24.000   |\n";
cout << "|6. Nasi + Kikil + Tempe + Jengkol         | Rp. 30.000   |\n";
cout << "|------------------------------------------|--------------|\n";
cout << "PILIH MENU PAKET : ";cin>>menu;
cout << "--------------------------------------------"<<endl;
    switch (menu) {
case 1:
     cout << "Nasi + Ayam Bakar + Sambal + Lalapan = 20.000" << endl;
     break;
case 2:
     cout << "Nasi + Ikan Lele + Sambal + Lalapan = 17.000" << endl;
     break;
case 3:
     cout << "Nasi + Telur Bulat + Sambal + Lalapan =  15.000" << endl;
     break;
case 4:
     cout << "Nasi + Telur Dadar + Sambal + Perkedel =  21.000" << endl;
     break;
case 5:
     cout << "Nasi + Ikan Nila + Sambal + Tempe = 24.000" << endl;
     break;
case 6:
    cout << "Nasi + Kikil + Tempe + Jengkol = 30.000" << endl;
    break;
default:
    cout << "Menu Makanan Hanya Sampai 6";
    break;
    }

cout << "--------------------------------------------"<<endl;
cout <<  "=======================================================" << endl;
cout << "|       LIST MINUMAN RESTO            | HARGA         |\n";
cout << "|-------------------------------------|---------------|\n";
cout << "|1. ES TEH MANIS                      | Rp.  6.000    |\n";
cout << "|2. TEH HANGAT MANIS                  | Rp.  5.000    |\n";
cout << "|3. LEMON TEA                         | Rp. 11.000    |\n";
cout << "|4. JUS ALPUKAT                       | Rp. 10.000    |\n";
cout << "|5. TEH TELUR                         | Rp. 20.000    |\n";
cout << "|6. AQUA                              | Rp.  8.000    |\n";
cout << "|7. Teh Kotak                         | Rp. 10.000    |\n";
cout << "|-------------------------------------|---------------|\n";
cout << "Pilih Menu Minuman  : ";cin>>minuman;
cout <<"---------------------------------"<<endl;

switch (minuman) {
case 1:
    cout << "ES TEH MANIS = 6.000" << endl;
    cout <<"---------------------------------"<<endl;
    break;
case 2:
    cout << "TEH HANGAT MANIS = 5.000" << endl;
    cout <<"---------------------------------"<<endl;
    break;
case 3:
    cout << "LEMON TEA = 11.000" << endl;
    cout <<"---------------------------------"<<endl;
    break;
case 4:
    cout << "JUS ALPUKAT = 10.000" << endl;
    cout <<"---------------------------------"<<endl;
    break;
case 5:
    cout << "TEH TELUR = 20.000" << endl;
    cout <<"---------------------------------"<<endl;
    break;
case 6:
    cout <<"---------------------------------"<<endl;
    cout << "AQUA = 8.000" << endl;
    break;
case 7:
    cout <<"---------------------------------"<<endl;
    cout << "Teh Kotak  = 10.000" << endl;
    break;
}

return 0; }
