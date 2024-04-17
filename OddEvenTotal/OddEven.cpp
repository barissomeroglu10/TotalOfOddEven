/*
In this code, we get a number from user and than calculate total for odd and even from 0 or 1 to number.

Developer: Barış Someroğlu
Date: 16.04.2024 - 02:40 pm
*/


#include <iostream>

using namespace std;

// Prototype for functions
void Yazdir1(int);
void Yazdir2(int);
int Tek_Toplam(int);
int Cift_Toplam(int);

// Defination for globale variable
int Sayi, TekToplam = 0, CiftToplam = 0;

int main()
{
	
	cout << "Sayi Giriniz = ";
	cin >> Sayi;

	// Call the function
	Yazdir1(Sayi);
	Yazdir2(Sayi);

	return 0;
}

// Defenation for function
void Yazdir1(int Sayi)
{
	cout << "Tek Toplam = " << Tek_Toplam(Sayi) << endl;
}

// Defenation for function
void Yazdir2(int Sayi)
{
	cout << "Cift Toplam = " << Cift_Toplam(Sayi) << endl;
}

// Defenation for function
int Tek_Toplam(int Sayi)
{
	if (Sayi % 2 == 0)
	{
		for (int i = 1; i < Sayi; i++)
		{
			TekToplam += i;
		}
	}

	else
	{
		for (int i = 1; i <= Sayi; i++)
		{
			TekToplam += i;
		}
	}

	return TekToplam;
}

// Defenation for function
int Cift_Toplam(int Sayi)
{
	if (Sayi % 2 == 0)
	{
		for (int i = 0; i <= Sayi; i++)
		{
			CiftToplam += i;
		}
	}

	else
	{
		for (int i = 0; i < Sayi; i++)
		{
			CiftToplam += i;
		}
	}

	return CiftToplam;
}
