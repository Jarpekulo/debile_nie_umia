#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}


void setcolor(WORD color)
{ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color| 
FOREGROUND_INTENSITY);
}


int main(int argc, char** argv) {


setcolor(8);

gotoxy(2,15);
cout<<("XXXX");

gotoxy(13,15);
cout<<("XXXX");

gotoxy(2,14);
cout<<("X");

gotoxy(2,13);
cout<<("X");

gotoxy(2,12);
cout<<("XXXX");
	
gotoxy(5,13);
cout<<("X");	
	
gotoxy(5,14);
cout<<("X");	
	
setcolor(15);	
	
gotoxy(6,14);
cout<<("XXXXXXX");	
	
setcolor(8);

gotoxy(13,14);
cout<<("X");	
	
gotoxy(13,13);
cout<<("X");
	
gotoxy(13,12);
cout<<("XXXX");	
	
gotoxy(16,13);
cout<<("X");	

gotoxy(16,14);
cout<<("X");	
	
setcolor(15);

gotoxy(3,13);
cout<<("X");	
	
gotoxy(4,14);
cout<<("X");	
	
gotoxy(14,13);
cout<<("X");	
	
gotoxy(15,14);
cout<<("X");

setcolor(8);

gotoxy(6,13);
cout<<("XXX");

gotoxy(6,12);
cout<<("XXXX");

gotoxy(6,11);
cout<<("XXXXXXXX");

gotoxy(3,11);
cout<<("XX");

gotoxy(3,10);
cout<<("X");

gotoxy(3,9);
cout<<("X");

gotoxy(1,9);
cout<<("XX");	

gotoxy(12,10);
cout<<("X");

gotoxy(12,9);
cout<<("X");
	
setcolor(15);	

gotoxy(12,8);
cout<<("XX");
	
gotoxy(11,7);
cout<<("XX");	
	
setcolor(8);
	
gotoxy(10,6);
cout<<("XX");	

gotoxy(14,8);
cout<<("X");

gotoxy(14,9);
cout<<("X");	
	
setcolor(12);

gotoxy(5,11);
cout<<("X");

gotoxy(4,10);
cout<<("X");
	
gotoxy(6,10);
cout<<("XXXX");	
	
gotoxy(4,9);
cout<<("X");	
	
gotoxy(1,8);
cout<<("XXX");

gotoxy(9,9);
cout<<("XXX");

setcolor(14);

gotoxy(7,9);
cout<<("XX");	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
cout<<endl;		
cout<<endl;	
cout<<endl;		
cout<<endl;	
cout<<endl;		
cout<<endl;		
cout<<endl;		
cout<<endl;	
	
	return 0;
}
