#include <iostream>

using namespace std;

int main ()
{
    char nomenuBarang;
    int harga;
    int pilihan, pilihan_gabungan ;

    cout << "DAFTAR MENU" << endl;
    cout << "BARANG:" << endl;
    cout << "1. minyak goreng  Rp20000" << endl;
    cout << "2. beras          Rp15000" << endl;
    cout << "3. gula pasir     Rp13000" << endl;
    cout << "4. tepung terigu  Rp10000" << endl;
    cout << "5. mie instan     Rp3000"  << endl;
    cout << "6. telur          Rp29000" << endl;
    cout << "7. detergen       Rp23000" << endl;
    cout << "8. pilihan gabungan" << endl;

    cout << "silahkan inputkan nomor menu barang" << endl;
    cin >> nomenuBarang;

    if (pilihan ==1) {
        cout << "minyak goreng saja" << endl;


    }
    else if (pilihan ==2) {
        cout << "beras saja" << endl;
    }

    else if (pilihan ==3) {
        cout << "gula pasir saja" << endl;
    }

    else if (pilihan ==4) {
        cout << "tepung terigu saja" << endl;
    }

    else if (pilihan ==5) {
        cout << "mie instan saja" << endl;
    }

    else if (pilihan ==6) {
        cout << "telur saja" << endl;
    }

    else if (pilihan ==7) {
        cout << "detergen saja" << endl;
    }

    else if (pilihan ==8) {
    cout << "#gabungkan angka pilihan jika ingin memilih lebih dari satu" << endl;
    cout << "contoh masukkan angka 1 dan 2,2 dan 3,3 dan 4,5 dan 6,234567" << endl;

    cout << "silahkan tabahkan menu" << endl;
    cin >> pilihan_gabungan;
    }

    switch (nomenuBarang){
    case '1':
       cout << "anda memesan minyak goreng saja" << endl;
       harga = 20000;
       break;
     case '2':
        cout << "anda memesan beras saja" << endl;
        harga = 15000;
        break;
    case '3':
        cout << "anda memesan gula pasir saja" << endl;
        harga = 13000;
        break;
    case '4':
        cout << "anda memesan tepung terigu saja" << endl;
        harga = 10000;
        break;
    case '5':
        cout << "anda memesan mie instan saja" << endl;
        harga = 3000;
        break;
    case '6':
        cout << "anda memesan telur saja" << endl;
        harga = 29000;
        break;
    case '7':
        cout << "anda memesan detergen saja" << endl;
        harga = 23000;
        break;
    default:
        cout << "tidak ada dimenu" << endl;
    }
    cout << "========================" << endl;
    cout << "total harga yang harus anda bayar adalah: Rp" << harga << endl;


    return 0;

    }






