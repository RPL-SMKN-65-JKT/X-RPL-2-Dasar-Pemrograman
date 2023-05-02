#include <iostream>
using namespace std;

int find_max(int arr[], int n) { //huft
    int max_val = arr[0], max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }
    cout << "Nilai maksimum dari array adalah " << max_val << " pada indeks " << max_idx << endl;
}

int main(){

    int jumlah;

    cout << "Masukkan jumlah elemen: ";
    cin >> jumlah;

    int arr[jumlah];

    cout<<"Masukkan "<< jumlah <<" angka:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    find_max(arr, jumlah);

    return 0;
}
