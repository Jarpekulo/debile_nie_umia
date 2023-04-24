#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	char input;
	
	cout<<"podaj pierwsza litere kraju z ktorym graniczy Polska:";
	cin>>input;	
	switch (input) {
	case 'R':
	case 'r':
	cout<<"Rosja";
	break;
	case 'L':
	case 'l':
	cout<<"Litwa";
	break;
	case 'B':
	case 'b':
	cout<<"Bialorus";
	break;
	case 'U':
	case 'u':
	cout<<"Ukraina";
	break;
	case 'S':
	case 's':
	cout<<"Slowacja";
	break;
	case 'C':
	case 'c':
	cout<<"Czechy";
	break;
	case 'N':
	case 'n':
	cout<<"Niemcy";
	break;
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
