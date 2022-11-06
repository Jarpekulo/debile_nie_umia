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

setcolor(10);	
	
gotoxy(10,0);
cout<<("/\\");

gotoxy(9,1);
cout<<("/");

gotoxy(8,2);
cout<<("/");	
	
gotoxy(7,3);
cout<<("/");	

setcolor(14);
	
gotoxy(7,4);
cout<<("---------");	
	
setcolor(10);
	
gotoxy(6,4);
cout<<("/");
	
gotoxy(12,1);
cout<<("\\");

gotoxy(13,2);
cout<<("\\");

gotoxy(14,3);
cout<<("\\");

gotoxy(15,4);
cout<<("\\");	

gotoxy(5,5);
cout<<("/");
	
gotoxy(4,6);
cout<<("/");	
	
gotoxy(3,7);
cout<<("/");	
	
gotoxy(16,5);
cout<<("\\");
	
gotoxy(17,6);
cout<<("\\");	
	
gotoxy(18,7);
cout<<("\\");

setcolor(11);

gotoxy(4,7);
cout<<("--------------");	

setcolor(10);

gotoxy(2,8);
cout<<("/");
		
gotoxy(19,8);
cout<<("\\");	

gotoxy(2,8);
cout<<("/________________");

gotoxy(14,9);
cout<<("\\");

gotoxy(15,10);
cout<<("\\");

gotoxy(16,11);
cout<<("\\");

setcolor(14);

gotoxy(10,13);	
cout<<("III");

gotoxy(10,14);	
cout<<("III");

setcolor(2);

gotoxy(7,9);
cout<<("/");
		
gotoxy(6,10);
cout<<("/");

gotoxy(5,11);
cout<<("/");
	
gotoxy(4,12);
cout<<("/____________\\");	

setcolor(4);

gotoxy(8,5);
cout<<("O");

setcolor(7);

gotoxy(11,9);
cout<<("O");

gotoxy(10,3);
cout<<("O");

setcolor(6);

gotoxy(13,5);
cout<<("O");

setcolor(9);

gotoxy(7,11);
cout<<("O");

setcolor(10);

gotoxy(12,11);
cout<<("O");





cout<<endl;	
cout<<endl;	
cout<<endl;		
cout<<endl;		
cout<<endl;	
cout<<endl;	
cout<<endl;	
cout<<endl;		
cout<<endl;		
cout<<endl;		
cout<<endl;		
cout<<endl;		
	
	
cout<<("\n");



system("pause");

	return 0;
}
