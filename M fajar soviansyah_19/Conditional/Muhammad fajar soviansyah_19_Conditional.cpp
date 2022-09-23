#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Masukkan Nama Kamu: ";
  getline (cin, fullName);
 
int nilai;
  
  cout<<"Masukkan Nilainya: ";
cin>>nilai;
if (nilai<50){
cout<<"\nMaaf anda Tidak Lulus\n";
} else {
cout<<"\nSelamat Anda dinyatakan Lulus\n";
}

  return 0;
}