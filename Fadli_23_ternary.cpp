#include <iostream>

using namespace std;

int main()
{
    int jawaban ;

    cout << "berapakah hasil 3+4?" << endl;
    cout << "jawab= ";
    cin >> jawaban;

    string hasil = (jawaban == 7) ? "Benar" : "Salah";

    cout << "jawaban anda: " << hasil << endl ;

    return 0;
}
