#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float a , b ;
	float odp;
	cout<<"Program wykonujacy dzielenie podaj liczbe A:";
	cin>>a;
	
	cout<<"liczba b:";
	cin>>b;
	
	odp = a/b;
	
	if(b=0)
	{
		cout<<"Blad! Dzielenie przez 0";
		
	}
	else
	{
		printf("wynik dzielenia to %.3f" , odp);
		
	}
	
	
	
	
	return 0;
}
