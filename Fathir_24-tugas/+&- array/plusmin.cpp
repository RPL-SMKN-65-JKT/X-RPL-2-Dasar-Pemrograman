#include <iostream>

using namespace std;

int main() {
    int arr, i, total, hasil;
system ("color a");
    cout << "Input jumlah elemen array: ";
    cin >> arr;
    cout << endl;

    int input[arr]; // Membuat array dengan ukuran sesuai input

    cout << "Input " << arr << " Indeks: ";
    cout << endl;

    total = 0;
    hasil = 0;
    for (i = 0; i < arr; i++) {
        cout << "Indeks ke-" << i << ": ";
        cin >> input[i];
        total = total + input[i];
        if (i > 0) {
            hasil = hasil - input[i];
        } else {
            hasil = input[i];
        }
    }

    cout << endl;

    cout << "Total penjumlahan dari " << arr << " Indeks tersebut adalah: " << total << endl;
    cout << "Hasil pengurangan indeks pertama dari " << arr << " Indeks tersebut adalah: " << hasil << endl;

    return 0;
}
