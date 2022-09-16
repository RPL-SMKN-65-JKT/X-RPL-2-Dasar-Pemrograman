// c++ program to illustrate if-else-if ladder
#include <iostream>
using namespace std;


int main()
{
    int nilai;
    string nama;

    cout << "masukan nama " << endl;
    cin >>nama;
    cout << "masukan nilai: " << endl;
    cin >>nilai;


      if (nilai >= 90)
        {
        cout<< "\n\nselamat kamu mendapatkan nilai  a dan dinyataakan  lulus"<<endl;
        }
    else if (nilai >= 70)
        {
        cout<< "selamat kamu mendapatkan nilai  b dan dinyatakan  lulus"<<endl;
        }
    else if (nilai >= 50)
        {
        cout<< "mohon maaf mendapatkan nilai  c dan dinyatkan tidak lulus"<<endl;
        }
    else if (nilai >= 40)
        {
        cout<< "mohon maaf mendapatkan nilai  d dan dinyatakan tidak lulus"<<endl;
        }
    return 0;
}
