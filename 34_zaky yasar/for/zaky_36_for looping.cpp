#include <iostream>

using namespace std;

int main()
{

 int bilangan,i;

 cout << "Jumlah bilangan yang diinginkan: ";
 cin >> bilangan;

 for (i=1;i<=bilangan;i++) {
   cout << (i * 2)-1 << " ";
 }

 cout << endl;
 return 0;
}
