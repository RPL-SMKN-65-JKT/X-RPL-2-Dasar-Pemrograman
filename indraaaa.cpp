#include <iostream>
using namespace std;

int main() {
    
    int nilai; //definisikan nilai
    string nama; //definisikan string nama
    cout << "Masukkan Nama :" << endl; 
    cin >> nama; //input nama
    cout << "Masukkan Nilai :" << endl;
    cin >> nilai; //input nilai
    
    if(nilai >= 90){ //jika nilai lebih atau sama dengan 90
        cout << nama << " Mendapat Nilai A dan dinyatakan lulus";
    } else if(nilai >= 70){ //jika nilai lebih atau sama dengan 70
        cout << nama << " Mendapat Nilai B dan dinyatakan lulus";
    } else if(nilai >= 50){ //jika nilai lebih atau sama dengan 50
        cout << nama << " Mendapat Nilai C dan dinyatakan lulus";
    } else if(nilai >= 40){ //jika nilai lebih atau sama dengan 40
        cout << nama << " Mendapat Nilai D dan dinyatakan lulus";
    } else if(nilai < 40){ //jika nilai dibawah 40
        cout << nama << " Mendapat Nilai E dan dinyatakan lulus";
    } else { //jika inputan tidak sesuai
        cout << " Nilai yang dimasukkan tidak sesuai harus bilangan bulat";
    }

    return 0;
}