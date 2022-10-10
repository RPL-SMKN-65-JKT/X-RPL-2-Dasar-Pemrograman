#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int pil,jum;
    system ("color b");
    string user,pass;
    cout<<"MASUKAN USERNAME:";
    cin>>user;
    cout<<"MASUKAN PASSWORD:";
    cin>>pass;

    if(user == "SMK65" && pass== "JAKTIM")
    {
    cout<<"\n\n SELAMAT ANDA TELAH TELAH LOGIN DI MASKAPAI AIR DOWN\n"<<endl;
    }
    else
    {
    cout<<"GAGAL MASUK PASSWORD ATAU USERNAME ANDA SALAH";
    }
    getch;
    system("cls");


    cout<<"========DAFTAR HARGA CLASS MASKAPAI AIR DOWN========"<<endl;
    cout<<"TUJUAN BANDARA SOEKARNO HARTA - NGURAH RAI BALI"<<endl;
    cout<<"1.CLASS PASTI TURU"<<endl;
    cout<<"2.CLASS NYAMAN BANGET"<<endl;
    cout<<"3.CLASS PALING BERKELAS"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"MASUKAN CLASS YANG ANDA MAU ";cin>>pil;
    cout<<"----------------------------------------------------"<<endl;

    switch(pil) {
    case 1:{
    cout<<"HARGA SATU CLASS PASTI TURU SEBESAR Rp.250.000/org"<<endl;
    cout<<"MASUKAN JUMLAH KURSI YANG ANDA MAU:";
    cin>>jum;
    cout<<"TOTAL YANG ANDA BAYAR SEBESAR RP"<<jum*250000<<endl;
    cout<<"---TERIMAKASIH SUDAH MEMBELI DI MASKAPAI AIR DOWN---";
    break;
    }

    case 2:{
    cout<<"HARGA SATU CLASS NYAMAN BANGET SEBESAR RP.400.000/org"<<endl;
    cout<<"MASUKAN JUMLAH KUSI YANG ANDA MAU:";
    cin>>jum;
    cout<<"TOTAL YANG ANDA BAYARKAN SEBESAR RP"<<jum*400000<<endl;
    cout<<"---TERIMAKASIH SUDAH MEMBELI DI MASKAPAI AIR DOWN---";
    break;
    }

    case 3:{
    cout<<"HARGA SATU CLASS PALING BERKELAS ADALAH RP.600.000/org"<<endl;
    cout<<"MASUKAN JUMLAH KURSI YANG ANDA MAU: ";
    cin>>jum;
    cout<<"TOTAL YANG ANDA BAYARKAN SEBESAR RP"<<jum*600000<<endl;
    cout<<"---TERIMAKASIH SUDAH MEMBELI DI MASKAPAI AIR DOWN---";
    break;
    }
    }
return 0;
}
