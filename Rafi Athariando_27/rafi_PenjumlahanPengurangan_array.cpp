#include <iostream>

using namespace std;

int main () {
int n;

cout <<"=============================="<<endl;
cout <<"====program made bye kokoh===="<<endl;
cout <<"=============================="<<endl;
cout <<"input the quantity :";cin>>n;
cout <<"=============================="<<endl;
//gw saranin lu jangan copas ya, i've spend a hour at this program...so pls//
int arr[n];
cout <<"fill the index :\n";
for (int i=0; i<n; i++) {
    cout <<"indeks-" << i << ":";
    cin >> arr[i];
}
int sum = 0, sub = 0;

for (int i = 0; i<n; i++) {
    sum += arr[i];
    sub -= arr[i];
}
cout <<"=============================="<<endl;
cout <<"result for + :" <<sum<<endl;
cout <<"result for - :" <<sub<<endl;
return 0;
}
