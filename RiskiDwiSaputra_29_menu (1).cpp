#include <iostream>

using namespace std;

int main()

{
    char nomenuPaket, nomenuBilling;
    int harga1, harga2;
    
    cout << "SELAMAT DATANG DI KIKI NET" << endl;
    cout << "DAFTAR MENU" << endl;
    cout << "PAKET:" << endl;
    cout << "1. PAKET PAGI Rp15000" << endl;
    cout << "2. PAKET MALAM Rp20000" << endl;
    cout << "BILLING:" << endl;
    cout << "1. 1 Jam Rp4000" << endl;
    cout << "2. 2 Jam Rp7000" << endl;
    
    cout << "silahkan inputkan nomor menu Paket" << endl;
    cin >> nomenuPaket;
    
    switch (nomenuPaket) {
    case '1':
        cout << "Anda memesan Paket Pagi" << endl;
        harga1 = 15000;
        break;
    case '2':
        cout << "Anda memesan Paket Malam" << endl;
        harga1 = 20000;
        break;
    default:
        cout << "tidak ada dimenu" << endl;
    }
     
    cout << "silahkan inputkan nomor menu Billing" << endl;
    cin >> nomenuBilling;
    
    switch (nomenuBilling){
    case '1':
        cout << "Anda memesan 1 Jam" << endl;
        harga2 = 4000;
        break;
    case '2':
        cout << "Anda memesan 2 Jam" << endl;
        harga2 = 7000;
        break;
    default:
        cout << "tidak ada dimenu" << endl;
    }
    
    cout << "========================" << endl;
    cout << "total harga yang harus anda bayar adalah: Rp" << harga1+harga2 << endl;
    return 0;
 }
    