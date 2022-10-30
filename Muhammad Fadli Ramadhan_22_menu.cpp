#include <iostream>

using namespace std;

int main()
{

    int jumlah;
    int alat;

    cout << "==========DAFTAR PERALATAN OLAHRAGA==========" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "1. Bola Basket     Rp.150.000,00" << endl;
    cout << "2. Bola Sepak      Rp.100.000,00" << endl;
    cout << "3. Raket           Rp.100.000,00" << endl;
    cout << "4. Bola Voli       Rp.500.000,00" << endl;
    cout << "5. Stick Golf      Rp.250.000,00" << endl;
    cout << "Masukan pilihan anda piih angka dari (1-5)"<<endl;

    cout << "--------------------------------------------" << endl;
    cin>> alat;
    cout << "----------------------------------" << endl;

    switch (alat){
    case 1:
        cout << "Bola Basket = 150.000" << endl;
        break;
    case 2:
        cout << "Bola Sepak = 100.000" << endl;
        break;
    case 3:
        cout << "Raket  = 100.000" << endl;
        break;
    case 4:
        cout << "Bola Voli = 500.000" << endl;
        break;
    case 5:
        cout << "Stick Golf = 250.000" << endl;
        break;
    default:
        cout << "pilihan hanya sampai 5" << endl;

    }
    return 0;
}