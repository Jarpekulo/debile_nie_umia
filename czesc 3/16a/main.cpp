#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n; 
	int wyn=0 , d=2;
	
	cout<<"podaj wartosc N=";
	cin >> n;

	do
	{
		if( n % d == 0)
		{
	 	wyn=wyn+1;
        }
		d=d+1;	
			
	} while(d<=(n/2));
	
	cout << "wyn=" << wyn << "\n";
	cout << "d=" << d;
	
	return 0;
}
