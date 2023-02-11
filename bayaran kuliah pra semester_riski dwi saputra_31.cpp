#include <iostream>
#include <conio.h>
//#include <stdlib.h>

using namespace std;

main(){
    string nama,mk1,mk2,mk3,prodi;
    float mkt1, mkt2,tsks,tp;
    int pd,sks1, sks2, sks3;
    long int nim;

    cout<<"-------------------------------------------\n";
    cout<<"Nama             : ";cin>>nama;
    cout<<"NIM              : ";cin>>nim;
    cout<<"Mata Kuliah 1    : ";cin>>mk1;
    cout<<"SKS 1            : ";cin>>sks1;
    cout<<"Mata Kuliah 2    : ";cin>>mk2;
    cout<<"SKS 2            : ";cin>>sks2;
    cout<<"Mata Kuliah 3    : ";cin>>mk3;
    cout<<"SKS 3            : ";cin>>sks3;
    cout<<"-------------------------------------------\n";

    cout<<"Prodi anda"<<endl;
    cout<<" 1 T.Elektro"<<endl;
    cout<<" 2 S.Komputer"<<endl;
    cout<<"Pilih <1/2> : ";cin>>pd;

    switch(pd){
        case 1:{
            mkt1=100000;
            prodi="T.Elektro";
            cout<<"Prodi anda T.Elektro"<<endl;
            tsks=sks1+sks2+sks3;
            tp=tsks*mkt1;cout<<endl;break;
        }
        case 2:{
            mkt2=110000;
            prodi="S.Komputer";
            cout<<"Prodi anda S.Komputer"<<endl;
            tsks=sks1+sks2+sks3;
            tp=tsks*mkt2; cout<<endl;break;
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
