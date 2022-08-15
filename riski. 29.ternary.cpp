#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int jawaban;
    
    cout << "berapakah hasil 3+4?" << endl;
    cout << "jawab= ";
    cin >> jawaban;
    
    string hasil = (jawaban == 7 ) ? "Benar" : "Salah";
    
    cout << "jawaban anda: " << hasil << endl;
    
    return 0;

}