#include <iostream>
using namespace std;

int findMax(int arr[], int a) {
    int max = arr[0];
    for (int i = 1; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int a;


    cout << " Masukkan banyak Elemen: ";
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++) {
        cout << " Isi elemen " << i <<" = ";
        cin >> arr[i];
    }

    int max = findMax(arr, a);
    cout << " Nilai maksimumnya adalah : " <<  max << endl;
}
