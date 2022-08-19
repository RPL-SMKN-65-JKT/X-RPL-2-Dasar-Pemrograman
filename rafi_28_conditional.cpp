#include <iostream>
#include <string>
using namespace std ;
 int main() {

 string nama ;
 int nilai ;

  cout <<"masukkan nama" << endl ;
  cin  >> nama;
  cout <<"masukkan nilai"  << endl ;
  cin  >> nilai ;
  cout <<"hasil input nilai siswa" << endl;


if (nilai >90)
{
    cout <<"selamat! anda dapat nilai terbaik grade A dan dinyatakan lulus" << endl;
}
else if (nilai >80)
{
    cout <<"anda dapat grade B dan dinyatakan lulus" << endl;
}
else if (nilai >70)
{
    cout <<"anda dapat grade C  dan dinyatakan lulus" << endl;
}
else if (nilai >60)
{
    cout <<"sangat disayangkan, anda dapat grade C. TIDAK LULUS" << endl;
}
else if (nilai >50)
{
    cout <<"sangat disayangkan, anda dapat grade D.TIDAK LULUS" << endl;
}
else if (nilai <50)
{
    cout <<"ngulang lagi dah,luwh dapet grade D.TIDAK LULUS" << endl;
}


}




