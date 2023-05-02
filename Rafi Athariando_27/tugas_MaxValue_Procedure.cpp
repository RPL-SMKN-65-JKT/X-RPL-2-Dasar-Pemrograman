#include <iostream>
using namespace std;

// deklarasi prosedur untuk mencari nilai maksimum
void findMax(int arr[], int n, int& maxVal) {
    maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " bilangan: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal;
    findMax(arr, n, maxVal);

    cout << "Nilai maksimum dalam array adalah: " << maxVal << endl;

    return 0;
}
