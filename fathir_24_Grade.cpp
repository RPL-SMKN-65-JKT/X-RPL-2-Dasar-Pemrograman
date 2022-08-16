#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int nilai;
string nama;
cout<<"program nilai siswa pernyataan lulus atau tidak lulus\n"<<endl;
cout<<"Masukan Nama Anda : ";
cin >> nama;
cout <<"Masukan Nilai Anda : ";
cin >> nilai;
if(nilai >= 90)
{
cout<<"\n\nSelamat anda mendapat Nilai A dan dinyatakan lulus "<<endl;
}
else if (nilai >= 70)
{
cout<<"\n\nSelamat anda mendapat Nilai B dan Dinyatakan lulus "<<endl;
}
else if (nilai >= 50)
{
cout<<"\n\nSelamat anda mendapat Nilai c dan Dinyatakan lulus\n\n"<<endl;
}
else if (nilai >= 40)
{
cout<<"\n\nmohon maaf anda mendapatkan Nilai D dan dinyatakan tidak lulus\n\n"<<endl;
}
else if (nilai <= 40)
{
cout<<"\n\nmohon maaf anda mendapatkan Nilai E dan dinyatakan tidak lulus\n\n"<<endl;
}
return 0;
}
