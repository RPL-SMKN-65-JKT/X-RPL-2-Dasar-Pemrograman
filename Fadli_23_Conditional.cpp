#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{

char nama_orang [32];
    printf("Masukkan Nama Anda: ")
    ;scanf("%[^\n]s", nama_orang);


    int gradeScore;

    cout << "Masukkan nilai anda:  ";
    cin >> gradeScore;

    if (gradeScore == 100)
    {
        cout << "Kamu sangat pintar,tetap bertahan!" << endl;
        cout << "Grade A" << endl;
        cout << "Dinyatakan Lulus" << endl;


    }

    if (gradeScore == 90)
    {
        cout << "Kamu hampir mencapainya,teruskan perjuanganmu!" << endl;
        cout << "Grade A" << endl;
        cout << "Dinyatakan Lulus" << endl;

    }

     if (gradeScore == 80)
    {
        cout << "Bagus,teruskan belajarnya!" << endl;
        cout << "Grade B" << endl;
        cout << "Dinyatakan Lulus" << endl;


    }

     if (gradeScore == 70)
    {
        cout << "Bagus,teruskan belajarmu!" << endl;
        cout << "Grade B" << endl;
        cout << "Dinyatakan Lulus" << endl;
    }

    if (gradeScore == 60)

    {
        cout << "Kerja bagus,selalu berusaha mendapatkan yang terbaik" << endl;
        cout << "Grade C" << endl;
        cout << "Dinyatakan Lulus" << endl;
    }

    if (gradeScore == 50)
    {
        cout << "Kerja bagus,selalu berusaha mendapatkan yang terbaik" << endl;
        cout << "Grade C" << endl;
        cout << "Dinyatakan Lulus" << endl;
    }

    if (gradeScore == 40)
    {
        cout << "Kamu hampir mencapainya,truskan belajarmu!!" << endl;
        cout << "Grade D" << endl;
        cout << "Dinyatakan Tidak Lulus" << endl;
    }

    if (gradeScore == 30)
    {
        cout << "Kamu hampir mencapainya,truskan belajarmu!!" << endl;
        cout << "Grade E" << endl;
        cout << "Dinyatakan Tidak Lulus" << endl;
    }

    if (gradeScore == 20)
    {
        cout << "Kamu hampir mencapainya,truskan belajarmu!!" << endl;
        cout << "Grade E" << endl;
        cout << "Dinyatakan Tidak Lulus" << endl;
    }

    if (gradeScore == 10)
    {
        cout << "Coba lagi di lain waktu!!" << endl;
        cout << "Grade E" << endl;
        cout << "Dinyatakan Tidak Lulus" << endl;
    }

    if (gradeScore ==     0)
    {
        cout << "Maaf,anda gagal!!" << endl;
        cout << "Grade E" << endl;
        cout << "Dinyatakan Tidak Lulus" << endl;
    }
}
