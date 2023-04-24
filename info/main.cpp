#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float a , b , c;
	
	do{
		
	cout<<"Podaj liczby o rozniej wartosci!";	
	
	
	cout<<"\nPodaj wartosc liczby A:";
	cin>> a;
	
	cout<<"Podaj wartosc liczby B:";
	cin>> b;
	
	cout<<"Podaj wartosc liczby C:";
	cin >> c;

	}while(a==b or a==c or b==c);
	
	if(a > b and a > c)
	cout<<"Najwieksza:"<<a;
	
	if(b > a and b > c)
	cout<<"Najwieksza:"<<b;
	
	if(c > a and c > b)
	cout<<"Najwieksza:"<<c;
	
	cout<<"\n";
	
	if(a > b and a < c)
	cout<<"Srednia:"<<a;
	
	if(b > a and b < c)
	cout<<"Srednia:"<<b;
	
	if(c > a and c < b)
	cout<<"Srednia:"<<c;
	
	
	
	cout<<"\n";
	
	if(a < b and a < c);
	cout<<"Najmniejsza:"<<a;
	
	if(b < a and b < c)
	cout<<"Najmniejsza:"<<b;
	
	if(c < a and c < b)
	cout<<"Najmniejsza:"<<c;
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
