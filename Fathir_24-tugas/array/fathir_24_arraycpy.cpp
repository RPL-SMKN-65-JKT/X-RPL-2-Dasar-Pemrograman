#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
      //pirippippip
void SalinString (char S1[], char S2[]) {
int p;
p = 0;
while (S1[p] != '\0') {
    S2[p] = S1[p];
    p=p+1;
}
//pusing banget nyari logika nya(T_T)//
S2[p] = '\0';
p = 0;
while (S2[p] != '\0') {
    S1[p] = S2[p];
    p=p+1;
}
S1[p] = '\0';
}
  int main() {
int enter = 100;
char stringA[enter];
char stringC[enter];
cout<<"input : ";
cin.getline(stringA, enter);
SalinString(stringA,stringC);
cout << "String bawaan: " << stringA << endl;
cout << "String copy: " << stringC << endl;
  return 0;
  }
