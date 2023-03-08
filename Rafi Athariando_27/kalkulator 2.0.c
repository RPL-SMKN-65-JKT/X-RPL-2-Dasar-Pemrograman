#include <stdio.h>
#include <stdlib.h>

int main () {
	float hasil1,hasil2,hasil3,hasil4;
	float A,B;
	int nomormenu;

	printf ("program kalkulator\n");
	printf ("==================\n");
	printf ("masukkan angka pertama  :");
	scanf  ("%f",&A);
	printf ("masukkan angka kedua    :");
	scanf  ("%f",&B);
	printf ("==========================\n");
	printf ("1.perkalian\n");
	printf ("2.penjumlahan\n");
	printf ("3.pengurangan\n");
	printf ("4.pembagian\n");
	printf ("pilihan anda  :");
	scanf ("%d" ,&nomormenu);

	if (nomormenu == 1)
	{
		hasil1 = A*B;
		printf ("hasil perkalian :%f\n",hasil1);
	}

	else if (nomormenu == 2)
	{
		hasil2 = A+B;
		printf ("hasil penjumlahan  :%f\n",hasil2);
	}

	else if (nomormenu == 3)
	{
		hasil3 = A-B;
		printf ("hasil pengurangan  :%f\n",hasil3);
	}

	else if (nomormenu == 4)
	{
		hasil4 = A / B;
		printf ("hasil pembagian  :%f\n",hasil4);
	}



}

