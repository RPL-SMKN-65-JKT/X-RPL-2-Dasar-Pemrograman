#include <iostream>
using namespace std;

void find_max(int arr[], int a) {
}
int main(){
    int a;
    cout << " Masukkan banyak  Elemen: ";
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++) {
        cout << " Isi elemen  " << i <<" = ";
        cin >> arr[i];
    }

    find_max(arr, a);
    int max_nilai = arr[0], max_elemen = 0;
    for (int i = 1; i < a; i++) {
        if (arr[i] > max_nilai) {
            max_nilai = arr[i];
            max_elemen = i;
        }
    }
    cout << " Nilai maksimum ditemukan pada elemen ke" <<max_elemen <<" " "Dengan nilai = " << max_nilai << endl;

}
