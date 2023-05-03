#include <iostream>
using namespace std;
//mmang eak
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
       system ("color 076");
    cout<<"|==================================================|"<<endl;
    cout<<"| PROGRAM MENCARI NILAI MAKS MENGGUNAKAN FUNCTION  |"<<endl;
    cout<<"|                   BY: ZAFARRR                    |"<<endl;
    cout<<"|                    X-PPLG 2                      |"<<endl;
    cout<<"|==================================================|"<<endl;
    cout << " Masukkan Panjang Elemen: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << " Isi Indeks ke [" << i <<"] = ";
        cin >> arr[i];
    }

    // Mencari nilai maksimum dalam array
    int max = findMax(arr, n);
    cout<<"=========================================================="<<endl;
    cout << " Nilai maksimumnya adalah : " << max << endl;
    cout<<"=========================================================="<<endl;
}
