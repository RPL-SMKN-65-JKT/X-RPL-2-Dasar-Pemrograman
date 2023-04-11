#include <iostream>
#include <cstring>
using namespace std;



void SalinString (char S1[], char S2[]) {
int i;
i = 0;
while (S1[i] != '\0') {
    S2[i] = S1[i];
    i++;
}

S2[i] = '\0';
i = 0;
while (S2[i] != '\0') {
    S1[i] = S2[i];
    i++;
}
S1[i] = '\0';
}

int main () {
    const int inputan = 100;
    char S1[inputan];
    char S2[inputan];
    cout <<"enter an string :";
    cin.getline(S1, inputan);

    SalinString(S1,S2);

    cout <<"S1 :"<< S1 << endl;
    cout <<"S2 :"<< S2 << endl;
    return 0;
}
