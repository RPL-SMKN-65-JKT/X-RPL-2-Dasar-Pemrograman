#include <iostream>

using namespace std;

int main() {

    char pilihmenu;

    cout << "-----------------------------------------------------------------------------------------" <<endl;
    cout << "                                        WELCOME TO                                     " <<endl;
    cout << "                                     RUMAH SOTO AULIA                                  " <<endl;
    cout << "-----------------------------------------------------------------------------------------" <<endl;
    cout << "============|| DAFTAR MENU                                          HARGA  ||============" <<endl;
    cout << "-----------------------------------------------------------------------------------------" <<endl;
    cout << "              1. Soto Lamongan                                   Rp. 15.000" <<endl;
    cout << "              2. Soto Betawi                                     Rp. 17.000" <<endl;
    cout << "              3. Soto Ayam                                       Rp. 14.000" <<endl;
    cout << "              4. Soto Madura                                     Rp. 16.000" <<endl;
    cout << "              5. Soto Mie Bogor                                  Rp. 14.000" <<endl;
    cout << "-----------------------------------------------------------------------------------------" <<endl;
    cout << "PILIH NOMOR MENU YANG AKAN ANDA ORDER : ";
    cin >> pilihmenu;


int harga,bayar,sisa;
    switch (pilihmenu){
    case '1':
        harga=15000;
        bayar=50000;
        sisa=bayar-harga;
        cout << "                                             "<<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        cout <<"       ANDA MEMESAN MENU SOTO LAMONGAN"<<endl;
        cout <<"                                             "<<endl;
        cout <<"       BERAPA PORSI YANG AKAN ANDA ORDER?" ;
        cin >> pilihmenu;
        cout <<"=================================================" <<endl;
        cout <<"       ANDA MEMESAN 1 PORSI" <<endl;
        cout << "                                                  " <<endl;
        cout <<"       MASUKKAN JUMLAH UANG ANDA : ";
        cin >> bayar;
        cout <<"       SISA UANG ANDA ADALAH RP. " <<sisa<<endl;
        cout <<"                                                  " <<endl;
        cout <<"==================================================" <<endl;
        cout << "                                                  " <<endl;
        cout << " TERIMA KASIH TELAH MEMESAN DI RUMAH SOTO KAMI!";
        cout << "                                                  " <<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        break;
    }
int hrg,byr,ssa;
    switch (pilihmenu){
    case '2':
        harga=17000;
        bayar=50000;
        sisa=bayar-harga;
        cout << "                                             "<<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        cout <<"       ANDA MEMESAN MENU SOTO BETAWI"<<endl;
        cout <<"                                             "<<endl;
        cout <<"       BERAPA PORSI YANG AKAN ANDA ORDER?" ;
        cin >> pilihmenu;
        cout <<"=================================================" <<endl;
        cout <<"       ANDA MEMESAN 1 PORSI" <<endl;
        cout << "                                                  " <<endl;
        cout <<"       MASUKKAN JUMLAH UANG ANDA : ";
        cin >> bayar;
        cout <<"       SISA UANG ANDA ADALAH RP. " <<sisa<<endl;
        cout <<"                                                  " <<endl;
        cout <<"==================================================" <<endl;
        cout << "                                                  " <<endl;
        cout << " TERIMA KASIH TELAH MEMESAN DI RUMAH SOTO KAMI!";
        cout << "                                                  " <<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        break;
        }

int hrga,bayr,sisaa;
    switch (pilihmenu){
        case '3':
        harga=14000;
        bayar=50000;
        sisa=bayar-harga;
        cout << "                                             "<<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        cout <<"       ANDA MEMESAN MENU SOTO AYAM"<<endl;
        cout <<"                                             "<<endl;
        cout <<"       BERAPA PORSI YANG AKAN ANDA ORDER?" ;
        cin >> pilihmenu;
        cout <<"=================================================" <<endl;
        cout <<"       ANDA MEMESAN 1 PORSI" <<endl;
        cout << "                                                  " <<endl;
        cout <<"       MASUKKAN JUMLAH UANG ANDA : ";
        cin >> bayar;
        cout <<"       SISA UANG ANDA ADALAH RP. " <<sisa<<endl;
        cout <<"                                                  " <<endl;
        cout <<"==================================================" <<endl;
        cout << "                                                  " <<endl;
        cout << " TERIMA KASIH TELAH MEMESAN DI RUMAH SOTO KAMI!";
        cout << "                                                  " <<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        break;
        }
int hrgga,jum,byar;
    switch (pilihmenu){
        case '4':
        harga=16000;
        bayar=50000;
        sisa=bayar-harga;
        cout << "                                             "<<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        cout <<"       ANDA MEMESAN MENU SOTO MADURA"<<endl;
        cout <<"                                             "<<endl;
        cout <<"       BERAPA PORSI YANG AKAN ANDA ORDER?" ;
        cin >> pilihmenu;
        cout <<"=================================================" <<endl;
        cout <<"       ANDA MEMESAN 1 PORSI" <<endl;
        cout << "                                                  " <<endl;
        cout <<"       MASUKKAN JUMLAH UANG ANDA : ";
        cin >> bayar;
        cout <<"       SISA UANG ANDA ADALAH RP. " <<sisa<<endl;
        cout <<"                                                  " <<endl;
        cout <<"==================================================" <<endl;
        cout << "                                                  " <<endl;
        cout << " TERIMA KASIH TELAH MEMESAN DI RUMAH SOTO KAMI!";
        cout << "                                                  " <<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        break;
        }

int har,por,jmlh;
    switch(pilihmenu){
        case '5':
        harga=14000;
        bayar=50000;
        sisa=bayar-harga;
        cout << "                                             "<<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        cout <<"       ANDA MEMESAN MENU SOTO MIE BOGOR"<<endl;
        cout <<"                                             "<<endl;
        cout <<"       BERAPA PORSI YANG AKAN ANDA ORDER?" ;
        cin >> pilihmenu;
        cout <<"=================================================" <<endl;
        cout <<"       ANDA MEMESAN 1 PORSI" <<endl;
        cout << "                                                  " <<endl;
        cout <<"       MASUKKAN JUMLAH UANG ANDA : ";
        cin >> bayar;
        cout <<"       SISA UANG ANDA ADALAH RP. " <<sisa<<endl;
        cout <<"                                                  " <<endl;
        cout <<"==================================================" <<endl;
        cout << "                                                  " <<endl;
        cout << " TERIMA KASIH TELAH MEMESAN DI RUMAH SOTO KAMI!";
        cout << "                                                  " <<endl;
        cout << "                                                  " <<endl;
        cout <<"<<================================================>>"<<endl;
        break;
        }
        return 0;


}
