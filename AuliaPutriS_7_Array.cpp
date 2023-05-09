#include <iostream>
using namespace std;

int main(){
 int jml_index, maks, minim = 1000, nilai;
 cout << "Banyak Data= ";
 cin >> jml_index;
 for(int a = 1;a <= jml_index;a++){
    cout << "Masukkan Data ke-" <<a<<"=";
    cin >> nilai;
    if(nilai>maks){
        maks = nilai;
    }
    if(nilai < minim){
       minim = nilai;
    }
 }
    cout << "Nilai Maksimal = " << maks << endl;
    cout << "Nilai Minimal = "<< minim << endl;



}
