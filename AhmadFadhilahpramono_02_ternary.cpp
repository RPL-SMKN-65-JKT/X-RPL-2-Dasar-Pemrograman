#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Menghitung Luas Segitiga  ##" << endl;
  cout << "============================================" << endl;
  cout << endl;

  float a, t, luas;

  cout << "Input alas segitiga: ";
  cin >> a;
  cout << "Input tinggi segitiga: ";
  cin >> t;
  cout << endl;

  luas = 0.5 * a * t;

  cout << "Luas segitiga = "<< luas << endl;

  return 0;
}
