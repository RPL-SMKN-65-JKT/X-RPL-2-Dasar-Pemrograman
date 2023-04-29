#include <iostream>
#include <conio.h>
//#include <stdlib.h>

using namespace std;
main(){

    string nama,matkul1,matkul2,matkul3,prodi;
    float mkt1, mkt2, tsks,tp;
    int pd,sks1, sks2, sks3;
    long int nim;

    cout<<"=========================================\n";
    cout<<"Nama             : ";cin>>nama;
    cout<<"NIM              : ";cin>>nim;
    cout<<"Mata Kuliah 1    : ";cin>>matkul1;
    cout<<"SKS 1            : ";cin>>sks1;
    cout<<"Mata Kuliah 2    : ";cin>>matkul2;
    cout<<"SKS 2            : ";cin>>sks2;
    cout<<"==========================================\n";

    cout<<"Prodi anda"<<endl;
    cout<<" 1 Hubungan Internasional"<<endl;
    cout<<" 2 Ilmu Komunikasi"<<endl;
    cout<<"Pilih <1/2> : ";cin>>pd;

    switch(pd){
        case 1:{
            mkt1=120000;
            prodi="Hubungan Internasional";
            cout<<"Prodi anda Hubungan Internasional"<<endl;
            tsks=sks1+sks2;
            tp=tsks*mkt1;cout<<endl;break;
        }
        case 2:{
            mkt2=130000;
            prodi="Ilmu Komunikasi";
            cout<<"Prodi anda Ilmu Komunikasi"<<endl;
            tsks=sks1+sks2;
            tp=tsks*mkt2;cout<<endl;break;
        }
        default: cout<<"data yang anda input salah"<<endl;
    }

     cout<<"-------------Pembayaran SKS---------------\n";
     cout<<"Nama              : "<<nama<<endl;
     cout<<"NIM               : "<<nim<<endl;
     cout<<"Prodi             : "<<prodi<<endl;
     cout<<"Total SKS         : "<<tsks<<endl;
     cout<<"Total Pembayaran  : Rp. "<<tp<<endl;
     cout<<"-------------------------------------------\n";
}




