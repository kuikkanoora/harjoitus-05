/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus5
*Tekijä: Noora Kuikka
*PVM: 01.10.2013
*Kuvaus:
*Harjoitus 5 (palautus vko 39)
*
*Kirjoita ohjelma, joka pyytää käyttäjältä kaksi kokonaislukua.
*
*Ohjelma tulostaa tekstin BINGO, mikäli luvut ovat samoja.
*
*Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
*Versio 1.0 H4719 01.10.2013
**************************************************************************************************************************************************************/
#include <iostream>
using namespace std;
void main()
{
	int num1;
	int num2;
	cout << "Please input the first integer: ";
	cin >> num1;
	cout << "Now input the second integer: ";
	cin >> num2;

	if(num1 == num2)
		cout << "BINGO!";
	else
		cout << "BONGO!";
}