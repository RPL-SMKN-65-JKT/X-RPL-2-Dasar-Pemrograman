#include <iostream>

using namespace std;

int main()
{
    int jawaban;
    cout<< "berapakah hasil  3+4?" <<endl;
    cout<< "jawaban> ";
    cin>>jawaban;

    string hasil = (jawaban == 7) ? "benar" : "salah";

    cout<< "jawaban anda: " <<hasil << endl;
    return 0;
}
