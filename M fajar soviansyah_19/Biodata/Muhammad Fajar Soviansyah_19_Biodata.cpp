#include <iostream>
#include <string>

using namespace std;

int main (){
  string nama;
  string kelas;
  string noabsen;
  string hobi;
  
  cout<<"Masukan Data Berikut : "<<endl<<endl;
  cout<<"Nama    : Muhammad Fajar Soviansyah";
  getline (cin, nama); 
   
  cout<<"Kelas  : X PPLG-2";
  getline (cin, kelas); 
   
  cout<<"NoAbsen     : 19";
  getline (cin, noabsen); 
   
  cout<<"Hobi : Nonton Anime";
  getline (cin, hobi); 
  
  cout<<endl;
  cout<<"DATA SISWA"<<endl; 
  cout<<"------------------------------"<<endl;
  
  cout<<"Nama    : Muhammad Fajar Soviansyah"<<nama<<endl;
  cout<<"Kelas  : X PPLG-2"<<kelas<<endl;
  cout<<"NoAbsen     : 19"<<noabsen<<endl;
  cout<<"Hobi : Nonton Anime"<<hobi<<endl;

} 