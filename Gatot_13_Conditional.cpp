#include <iostream>
using namespace std;
int main()
{
  int nilai;
  string nama;
  cout <<"PROGRAM NILAI SISWA DAN PERNYATAAN LULUS ATAU TIDAK LULUS\n"<<endl;

  cout <<"Masukan nama anda  : \n";

  cin >>nama;

  cout <<"Masukan nilai anda  : \n";

  cin>>nilai;

  if(nilai >= 90)
  {
      cout<<"\n\nSelamat anda mendapat Nilai A dan dinyatakan LULUS "<<endl;
  }
  else if (nilai >= 70)
  {
     cout<<"\n\nSelamat anda mendapat Nilai B dan dinyatakan LULUS "<<endl;
  }
  else if (nilai >= 50)
  {
     cout<<"\n\nSelamat anda mendapat Nilai C dan dinyatakan LULUS\n\n"<<endl;
  }
  else if (nilai >= 40)
  {
      cout<<"\n\nMaaf anda mendapat Nilai D dan dinyatakan TIDAK LULUS\n\n"<<endl;
  }
  else if (nilai <= 40)
  {
      cout<<"n\nMaaf anda mendapat Nilai E dan dinyatakan TIDAK LULUS\n\n"<<endl;
  }
  return 0;
  }