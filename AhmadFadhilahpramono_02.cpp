#include <iostream>
using namespace std;

int main(){

    char grade;

    cout << "Inputkan rumus (A-C):  ";
    cin >> grade;

    switch (toupper(grade)){
    case 'A':
        cout << "P x L" << endl;
        break;
    case 'B':
        cout << "2 x P+L" << endl;
        break;
    case 'C':
        cout << "d^2=p^2 + l^2" << endl;
        break;
    default:
        cout << "Tidak ada!" << endl;
    }

    return 0;
}

