//Celeste Going
//Lab 4A
/*This program converts the units of temperature from
Fahrenheit to Celsius in 5 degree increments, from 25-125,
and prints the results.*/

#include <iostream>

using namespace std;

int main()

{
	cout << "     Fahrenheit \t Celsius" << endl;
	cout << endl;
	for (double F = 25; F <= 125; F += 5)

	{
		double C = 5.0 / 9.0 * (F - 32.0);
		cout << "\t" << F << "\t\t" << C << endl;
	}

	cout << endl;
	system("PAUSE");
	return 0;
}