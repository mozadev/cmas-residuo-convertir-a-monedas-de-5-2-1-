//ejercicio 1 de la hoja 2

/*

cesar
*/

#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
	int soles; //dato de entrada
	int monedas5, monedas2, monedas1;//datos de salida
	cout << "ingrese soles para dividir:";
	cin >> soles;
	//proceso
	monedas5 = soles / 5;
	monedas2 = (soles % 5)/2;
	monedas1 = (soles % 5) % 2;
	//salidas
	cout << "monedas de 5 hay:" << monedas5 << endl;
	cout << "monedas de 2 hay:" << monedas2 << endl;
	cout << "monedas de 1 hay:" << monedas1 << endl;



	_getch();

}