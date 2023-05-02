#include <iostream>

using namespace std;

int main() {
  int maksimum, jumlah, i = 1, save;

  cout << "Masukkan jumlah elemen: ";
  cin >> jumlah;

  int array[jumlah];

  cout << "Masukkan " << jumlah << " angka\n";
  for (i = 0; i < jumlah; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
  }

  maksimum = array[0];

  for(i = 0; i < jumlah; i++) {
    if (array[i] > maksimum)  {
      maksimum = array[i];
      save = i+1;
    }
  }

  cout << "Nilai maksimum adalah " << maksimum << " berada di elemen ke " << save << endl;
}
