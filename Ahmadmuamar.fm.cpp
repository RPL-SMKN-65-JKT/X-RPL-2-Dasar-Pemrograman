#include<iostream>
using namespace std;
   
   int main() {
      
       int angka, jumlah, max, min;
     
       cout << "2. Mencari nilai terbesar dan terkecil. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
    
       for (int i = 1; i <= jumlah; i++) {
     
       cout << "Masukkan Angka       : "; cin >> angka;
   
       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
    
       getch();
  
}
