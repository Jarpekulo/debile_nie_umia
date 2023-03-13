#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	
	int imie, poczatek , koniec, iloczyn;
	
	cout<<("podaj liczbe liter w imieniu: ");
	cin >> imie;
	

	poczatek=(imie %4)+1;
	
	koniec=(imie %4)+6;
	
	iloczyn = 1;
	
	cout<<"n="<< poczatek<<"\n";
	cout<<"k="<< koniec<<"\n";
	
	while(poczatek<=koniec)
	{
		iloczyn=iloczyn * poczatek;
		
		poczatek++;
	
		
	}
	
	 cout<<"iloczyn wynosi: "<<iloczyn<<"\n";
	 cout<<"ostantnia liczba: "<<koniec + 1;
	return 0;
}
