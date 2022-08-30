#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()

{
    int A,B,C;


    system ("color 083");
    cout <<"rafi athariando putra\n"<< endl ;
    cout <<"klasifikasi segitiga\n\n"<< endl ;
    printf ("=====================\n") ;
    cout <<"masukan nilai sisi A"<< endl ;
    cin  >> A ;
    cout <<"masukan nilai sisi B"<< endl;
    cin  >> B ;
    cout <<"masukan nilai sisi C"<< endl;
    cin  >> C ;

    if (A==B && A==C)
    {
        cout <<" segitiga sama sisi "<< endl ;
    }

    else if (A==B)
    {
        cout <<" segitiga sama kaki "<< endl ;
    }


    else
         cout<<"Segitiga sembarang"<<endl;
    return 0;

}
