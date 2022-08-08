#include <iostream>
#include <string>

using namespace std;

int main (){
  string nama;
  string kelas;
  string noabsen;
  string hobi;
  
  cout<<"Masukan Data Berikut : "<<endl<<endl;
  cout<<"Nama    : Gatot Kesuma Wardana";
  getline (cin, nama); 
   
  cout<<"Kelas  : X PPLG-2";
  getline (cin, kelas); 
   
  cout<<"NoAbsen     : 13";
  getline (cin, noabsen); 
   
  cout<<"Hobi : Menggambar";
  getline (cin, hobi); 
  
  cout<<endl;
  cout<<"DATA SISWA"<<endl; 
  cout<<"------------------------------"<<endl;
  
  cout<<"Nama    : Gatot Kesuma Wardana"<<nama<<endl;
  cout<<"Kelas  : X PPLG-2"<<kelas<<endl;
  cout<<"NoAbsen     : 13"<<noabsen<<endl;
  cout<<"Hobi : Menggambar"<<hobi<<endl;

}