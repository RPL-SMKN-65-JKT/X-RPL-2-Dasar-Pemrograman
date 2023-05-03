#include <iostream>
using namespace std;
//PUNYA ZAFAR
//MANG EAK
void find_max(int arr[], int n) {
}
int main(){
    system ("color 076");
    int n;
    cout<<"|==================================================|"<<endl;
    cout<<"| PROGRAM MENCARI NILAI MAKS MENGGUNAKAN PROCEDURE |"<<endl;
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

    find_max(arr, n);
    int max_val = arr[0], max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }
    cout<<"=========================================================="<<endl;
    cout << " Nilai maksimum ditemukan pada indeks ke[" <<max_idx <<"] " "Dengan nilai = " << max_val << endl;
    cout<<"=========================================================="<<endl;
}

