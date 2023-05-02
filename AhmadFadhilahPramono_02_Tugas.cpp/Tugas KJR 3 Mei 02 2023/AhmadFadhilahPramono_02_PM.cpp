#include <iostream>
using namespace std;

int main() {

    int lebar,k,l,j;

    cout << "Masukkan Lebar :";
    cin >> lebar;

    l = 2 * lebar;

    cout << "Luas nya yaitu :" << l;
    cout << "" << endl;

    cout << "Masukkan Lebar :";
    cin >> lebar;

    k = 2 * ( 2 + lebar);

    cout << "Keliling nya yaitu :" << k << endl;

    j = l + k;

    cout << "Luas Gabungannya ialah :" << j << endl;


    return 0;
}
