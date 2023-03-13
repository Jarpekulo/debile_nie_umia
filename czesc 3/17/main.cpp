#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int licz;
	
	
	cout <<"Bede sprawdzal czy liczba nalezy do przedzialu <-5,6) \n Podaj liczbe do sprawdzania:";
	cin >> licz;
	
	if(licz >=-5 && licz < 6 )
	{
		cout<< "liczba nalezy do przedzialu <-5,6)";
	}
	else
	{
		cout<< "liczba nie nalezy do przedzialu <-5,6)";
	};
	
	
	
	
	
	
	
	
	
	return 0;
}
