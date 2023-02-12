#include <iostream>

using namespace std;
//zaky punya//
int main()
{
    string nama,matkul,prodi;
    int nim,sks,tsks=0,tarif=100000,jmk,a,total;

    cout<<"masukan nama  :"; cin>>nama;
    cout<<"masukan nim   :"; cin>>nim;
    cout<<"masukan prodi :"; cin>>prodi;
    cout<<"----------------------------"<<endl;
    cout<<"masukan jumlah matkul :";cin>>jmk;
    for (a=0;a<jmk;a++){
        cout<<"masukan matkul :";cin>>matkul;
        cout<<"masukan sks :"; cin>>sks;
        tsks+=sks;
    }
    total=tsks*tarif;
    cout<<"total sks :";cout<<tsks<<endl;
    cout<<"total tarif sks :";cout<<total<<endl;

    return 0;
}
