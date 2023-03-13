#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	
	int pn,pm,n, m, r;
	
	
	cout<<"Podaj pierwsza liczbe n= ";
	cin >> n;
	cout<<"Podaj pierwsza liczbe mniejsza lub rowna pierwszej m=";
	cin >> m;
	
	pm=m;
	pn=n;
	while(m>0)
	{
	r=n %m;
	n=m;
	m=r;
	}
	
	
	
	
	
	
	cout<<"NWD("<<pn<<","<<pm<<")"<<"="<<n;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
