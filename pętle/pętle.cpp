// pętle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*for (int i = 5; i <= 7; i++)
	{
     cout << i << endl;
	}	*/
	/*for (int i = 2; i == 10; i = i + 2)
	{
		cout << i << endl;
	}
	*/



	/*for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}
	*/
 /*double fahr, celsius, start;//zmienne typu int 
	double krok, limit ;
		cout << "Podaj limit petl i o ile mamy dodawac :  ";
		cin >> limit >> krok;


	start = 0; //przypisz 0 do start 
	 //przypisz 200 do limit 
	 //przypisz 20 do krok 

	fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
	while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
		celsius = 5.0 * (fahr - 32) / 9.0; //oblicz stopnie C i przypisz wynik do celsius 
		cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
		fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
	} */
/*	int z;
 double x;
for (z = 0; z < 10; z++)
{
	cout << "Podaj liczbe ";
		cin >> x;
		if (x > 0)
		{
			cout << x << endl;
		} */
	for (int x = 0; x < 101; x++)
	{
		if (x % 2 == 0)
			cout << x << endl;
	}
	}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
