#include <iostream>
using namespace std;

int main(){

system ("color 70");
    cout << "=======================================================================================================================" << endl;
    cout << "=====                                                                                                             =====" << endl;
    cout << "=====                                           Total Pembayaran SKS                                              =====" << endl;
    cout << "=====                                                                                                             =====" << endl;
    cout << "=======================================================================================================================" << endl;
    int i,NIM,jumlahmakul,sks;
    string Nama,Prodi,Makul;
    cout << "Masukkan Nama          :";getline (cin,Nama);
    cout << "NIM                    :";
    cin >> NIM;
    cout << "Prodi                  :";
    cin >> Prodi;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;


    cout << "Input jumlah makul     :";
    cin >> jumlahmakul;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    for (i = 0;i<jumlahmakul;i++){
        cout << "Makul              :";
        cin >> Makul;
        cout << "sks                   :";
        cin >> sks;
        }

    int totalharga,totalsks=0,tarif=100000;

    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Total SKS          :";
    cin >> totalharga;

    totalsks = totalharga * tarif;

    cout << "Total Tarif SKS    :"<< totalsks << endl;
    cout << "                                                                                               Ahmad Fadhilah Pramono" << endl;
    return 0;
}

