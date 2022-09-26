#include <iostream>

using namespace std;

int main()
{
    int NomorMenu;
    int Panjang,lebar;
    int luas,keliling,diagonal;

    cout << "Menu Persegi Panjang\n";
    cout << "1. Hitung luas\n";
    cout << "2. Hitung keliling\n";
    cout << "3. Hitung panjang diagonal\n";
    cout << "4. Keluar program\n";
    cout << "<------------------------->\n";
    cout << "Masukkan pilihan anda?\n";
    cin >> NomorMenu;
    switch (NomorMenu)
{
        case 1 :
                 {
                 cout << "Masukkan Nilai Panjang : ";
                 cin >> Panjang;
                 cout << "Masukkan Nilai Lebar : ";
                 cin >> lebar;
                 luas = Panjang*lebar;
                 cout << "luas : " <<luas<<endl;
                 break;
                 }
        case 2 :
                {
                cout << "Masukkan Nilai Panjang : ";
                cin >> Panjang;
                cout << "Masukkan lebar : ";
                cin >> lebar;
                keliling = 2*Panjang+2*lebar;
                cout << "keliling : " <<keliling<<endl;
                break;
                }
        case 3 :
                {
                cout << "Masukkan Nilai Panjang : ";
                cin >> Panjang;
                cout << "MAsukkan Nilai Lebar   : ";
                cin >> lebar;
                diagonal =((double)Panjang*lebar+(double)lebar*lebar);
                cout << "diagonal : " <<diagonal<<endl;
                break;
                }
        case 4 :
                {
                cout << "keluar program";
                }



      }

    return 0;
}