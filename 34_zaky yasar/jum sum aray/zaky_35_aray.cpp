#include <iostream>

using namespace std;

int main()
{
      int input[10], arr, i, total,hasil;

  cout << "Input jumlah element array: ";
  cin >> arr;
  cout << endl;

  cout << "Input "<< arr << " angka: ";
  cout << endl;

  total = 0;
  hasil= 0;
  for(i = 0; i < arr; i++){
    cout << "Angka ke-" << i+1 <<": ";
    cin >> input[i];
    total = total + input[i];
    hasil= hasil - input[1];
  }

  cout << endl;

  cout << "Total penjumlahan dari "<< arr <<
          " angka tersebut adalah: " << total << endl;
 cout << "Total penjumlahan dari "<< arr <<
          " angka tersebut adalah: " << hasil << endl;



    return 0;
}
