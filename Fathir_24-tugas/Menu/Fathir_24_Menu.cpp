#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    system("color a");
    string nama,alamat;
    int pilihan,tf,bahasa;
    int sisa,norek;
    int saldo_awal=50000000,tarik,tabung;
    int pin=280906;
    char y,ulang;
    int lnjt = 1 ;
    Awal :
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |            Selamat datang di bank MILIK KITA BERSAMA              | |" << endl;
    cout << "                        | |         Masukkan Pillihan Bahasa Yang Ingin Anda Gunakan          | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |  1.Indonesia                                                      | |" << endl;
    cout << "                        | |  2.English                                                        | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                              Masukkan Pilihan :";cin>>bahasa;
    system("cls");
        switch (bahasa)
        {
     default:
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                              ERROR                                | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |           Terjadi Masalah Saat Sedang Memilih Pilihan             | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |          Harap Masukkan Pilihan Yang Tersedia Di Layar            | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |             Pilih No [1]Untuk Lanjut [2]Untuk Keluar              | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                            Masukkan Pilihan :";cin>>lnjt;
    system("cls");
  	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
    exit (0);
            case 1 :
            {
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |            Selamat datang di bank MILIK KITA BERSAMA              | |" << endl;
    cout << "                        | |           -------------------------------------------             | |" << endl;
    cout << "                        | |           -------------------------------------------             | |" << endl;
    cout << "                        | |             Harap Masukkan Pin anda Dengan Hati-Hati              | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |       Jika Pin Yang Anda Masukkan Salah 1x akan Auto exit         | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |           Masukkan Pin Anda dengan Menutup tombol Pin             | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                               Masukkan Pin Anda :";cin>>pin;
                if (pin==280906)
    {
    cout<<"\t                   pin yang anda masukkan benar! \n";
    cout<<"\t\n                         tekan tombol 'y' kemudian enter : ";cin>>y;
    }
    else
    {
    system("cls");
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                              ERROR                                | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |           Terjadi Masalah Saat Sedang Memasukkan Pin              | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |              !!Harap Masukkan Pin Dengan Benar!!                  | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |            Pilih No [1]Untuk Lanjut [2]Untuk Keluar               | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                            Masukkan Pilihan :";cin>>lnjt;
    system("cls");
  	if ( lnjt == 1)
	{
    goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
    exit (0);
    }
    }
    system("cls");
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |            Selamat datang di bank MILIK KITA BERSAMA              | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |    1.Penarikan Tunai                                              | |" << endl;
    cout << "                        | |    2.Menabung                                                     | |" << endl;
    cout << "                        | |    3.Pendaftaran Nasabah                                          | |" << endl;
    cout << "                        | |    4.Cek Saldo                                                    | |" << endl;
    cout << "                        | |    5.Transfer                                                     | |" << endl;
    cout << "                        | |    6.keluar                                                       | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                              Masukkan Pilihan anda :";
    cin>>pilihan;
    switch (pilihan)
   {
    default:
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                              ERROR                                | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |           Terjadi Masalah Saat Sedang Memilih Pilihan             | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |          Harap Masukkan Pilihan Yang Tersedia Di Layar            | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |             Pilih No [1]Untuk Lanjut [2]Untuk Keluar              | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |   Untuk Layanan Costumer Service kami, Bisa Hubungi No berikut    | |" << endl;
    cout << "                        | | 6969, Jika Masalah Tidak Terselesaikan Harap Datangi kantor pusat | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                            Masukkan Pilihan :";cin>>lnjt;
  	if ( lnjt == 1)
	{
    goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);;
	}
    exit (0);
case 1 : {
    cout<< "                            Masukkan nomina :";
    cin>>tarik;
    sisa=saldo_awal-tarik;
    cout<< "                            Transaksi Sukses\n";
    cout<<"                             Saldo    :Rp."<<sisa<<endl;
    cout << "\n\n                     Ingin Melanjutkan Transaksi? [1]Ya [0]Tidak : ";
    cin  >> lnjt;

if ( lnjt == 1)
	{
    goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
        break;
       }
case 2 : {
    cout<< "                            Masukkan Nomina :";
    cin>>tabung;
    sisa=tabung+saldo_awal;
    cout<< "                            Setor Tunai Berhasil\n";
    cout<< "                            saldo    :Rp."<<sisa<<endl;
    cout << "\n\n                     Ingin Melanjutkan Transaksi? [1]Ya [0]Tidak : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
        break;
    }
    case 3 : {
    cout<< "                            Masukkan Nama :";cin>>nama;
    cout<< "                            Masukkan Norek :";cin>>norek;
    cout<< "                            Masukkan Alamat :";cin>>alamat;
    cout<< "\n                            Permintaan Anda Akan Kami Proses\n";
    cout << "\n\n                     Ingin Melanjutkan Transaksi? [1]Ya [0]Tidak : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
        break;
             }
    case 4 : {
    cout<< "                              Saldo Anda Saat Ini :Rp."<<saldo_awal;
    cout << "\n\n                     Ingin Melanjutkan Transaksi? [1]Ya [0]Tidak : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
        break;
    }
    case 5 : {
    cout<<"                             Masukkan nomina :Rp.";cin>>tf;
    sisa=saldo_awal-tf;
    cout<<"                            Sisa Saldo anda :Rp."<<sisa<<endl;
    cout << "\n\n                     Ingin Melanjutkan Transaksi? [1]Ya [0]Tidak : ";
    cin  >> lnjt;
 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Terimakasih Sudah Menggunakan Layanan Kami\n";exit(0);
	}
        break;
    }
    case 6 : {
    cout<<"\n\n                            Terimakasih Sudah Menggunakan Layanan Kami";
    break;
    }
    system("cls");
   }
    case 2 :
        {
       cout << "                        | |===================================================================| |" << endl;
       cout << "                        | |                                                                   | |" << endl;
       cout << "                        | |                       Welcome to our bank                         | |" << endl;
       cout << "                        | |           -------------------------------------------             | |" << endl;
       cout << "                        | |           -------------------------------------------             | |" << endl;
       cout << "                        | |                  Please Enter Your Pin Carefully                  | |" << endl;
       cout << "                        | |                                                                   | |" << endl;
       cout << "                        | |        If the pin you enter is wrong 1 time will auto exit        | |" << endl;
       cout << "                        | |                                                                   | |" << endl;
       cout << "                        | |                Enter your Pin by Closing Pin button               | |" << endl;
       cout << "                        | |                                                                   | |" << endl;
       cout << "                        | |   For our customer service, you can contact the following number  | |" << endl;
       cout << "                        | |      6969, If Problem Is Not Solved Please Come To Head Office    | |" << endl;
       cout << "                        | |===================================================================| |" << endl;
       cout << "                               Enter Your Pin :";cin>>pin;
                 if (pin==280906)
            {
                cout<<"\t                   the pin you entered is correct! \n";
                cout<<"\t\n                                 press [Y] to continue : ";cin>>y;
            }
            else
            {
    system("cls");
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                              ERROR                                | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |             A Problem Occurs While Entering the Pin               | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |               !!Please Enter the Pin Correctly!!                  | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |               Select No [1]To Continue [2]To Exit                 | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |  For our customer service, you can contact the following number   | |" << endl;
    cout << "                        | |     6969, If Problem Is Not Solved Please Come To Head Office     | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                            Enter Choice :";cin>>lnjt;
    system("cls");
  	if ( lnjt == 1)
	{
    goto Awal;
	}

	else
	{
    cout<< "\n                        Thank You For Using Our Service\n";exit(0);
	}
            }
       system("cls");
    cout << "                        | |===================================================================| |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |                       Welcome to our bank                         | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |    1.Cash Withdrawal                                              | |" << endl;
    cout << "                        | |    2.Saving                                                       | |" << endl;
    cout << "                        | |    3.user sign up                                                 | |" << endl;
    cout << "                        | |    4.Check                                                        | |" << endl;
    cout << "                        | |    5.Transfer                                                     | |" << endl;
    cout << "                        | |    6.Exit                                                         | |" << endl;
    cout << "                        | |                                                                   | |" << endl;
    cout << "                        | |     For our customer service, you can call our number below       | |" << endl;
    cout << "                        | |    6969, If the CS couldn't solve the problem please come to      | |" << endl;
    cout << "                        | |                      our center office                            | |" << endl;
    cout << "                        | |===================================================================| |" << endl;
    cout << "                                    enter your choice :";cin>>pilihan;
switch (pilihan)
   {
   case 1 : {
    cout<< "                            Enter Nominal :";
    cin>>tarik;
    sisa=saldo_awal-tarik;
    cout<< "                            Transaction Success\n";
    cout<<"                             Saldo    :Rp."<<sisa<<endl;
    cout << "\n                     Want to Continue Transaction? [1]Yes [0]No : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Thank you for using our service\n";exit(0);
	}
        break;
       }
    case 2 : {
    cout<< "                            Enter Nominal :";
    cin>>tabung;
    sisa=tabung+saldo_awal;
    cout<< "                            Cash Deposit Successful\n";
    cout<< "                            saldo    :Rp."<<sisa<<endl;
    cout << "\n                     Want to Continue Transaction? [1]Yes [0]No : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Thank you for using our service\n";exit(0);
	}
    break;
    }
    case 3 : {
        cout<< "                            Enter Name :";cin>>nama;
        cout<< "                            Enter Norek :";cin>>norek;
        cout<< "                            Enter Address :";cin>>alamat;
        cout<< "\n                            We will process your request\n";
    cout << "\n                     Want to Continue Transaction? [1]Yes [0]No : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Thank you for using our service\n";exit(0);
	}
        break;
             }
    case 4 : {
        cout<< "                              Your Current Balance :Rp."<<saldo_awal;
     cout << "\n                     Want to Continue Transaction? [1]Yes [0]No : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Thank you for using our service\n";exit(0);
	}
        break;
    }
    case 5 : {
        cout<<"                             Enter Nominal :Rp.";cin>>tf;
        sisa=saldo_awal-tf;
        cout<<"                            Your Current Balance :Rp."<<sisa<<endl;
     cout << "\n                     Want to Continue Transaction? [1]Yes [0]No : ";
    cin  >> lnjt;

 	if ( lnjt == 1)
	{
		goto Awal;
	}

	else
	{
    cout<< "\n                        Thank you for using our service\n";exit(0);
	}
        break;
    }
    case 6 : {
    cout<<"\n\n                            Thank you for using our service";
    break;
    }
    default:
        cout<<"                                  Pilihan tidak tersedia";
    }

    return 0;
   }
        }
        }
