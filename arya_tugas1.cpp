#include <iostream>
#include <string>

using namespace std;

int main (){
  string nama;
  string kelas;
  string noabsen;
  string hobi;
  
  cout<<"Masukan Data Berikut : "<<endl<<endl;
  cout<<"Nama    : Arya Dwi Rahman";
  getline (cin, nama); 
   
  cout<<"Kelas  : X PPLG-2";
  getline (cin, kelas); 
   
  cout<<"NoAbsen     : 6";
  getline (cin, noabsen); 
   
  cout<<"Hobi : bermain bola";
  getline (cin, hobi); 
  
  cout<<endl;
  cout<<"DATA SISWA"<<endl; 
  cout<<"------------------------------"<<endl;
  
  cout<<"Nama    : Arya Dwi Rahman"<<nama<<endl;
  cout<<"Kelas  : X PPLG-2"<<kelas<<endl;
  cout<<"NoAbsen     : 6"<<noabsen<<endl;
  cout<<"Hobi : bermain bola"<<hobi<<endl;

}