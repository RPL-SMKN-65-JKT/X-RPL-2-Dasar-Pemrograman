#include <iostream>
#include <cstring>
using namespace std;
//MUHAMAD ZAFAR SYAH
void SalinString(char S1[], char S2[], int n) {
    for (int i = 0; i < n; i++) {
        S1[i] = S2[i];
    }//PUNYA ZAFAR
    S1[n] = '\0';
}

int main() {//DILARANG COPAS
    char stringAwal[100] = "NAMA SAYA ZAFARR";
    char stringSalinan[100];//COPAS NILAI 0
    SalinString(stringSalinan, stringAwal, strlen(stringAwal));
    cout << "String awal: " << stringAwal << endl;
    cout << "String hasil salinan: " << stringSalinan << endl;
    return 0;
}
