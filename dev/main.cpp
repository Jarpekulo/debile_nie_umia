#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main() {
	
	system("chcp 1250");
	system("cls");
	
	
  int x, kwa, sze;


  printf("Wprowad� liczb� naturaln� x: ");
  scanf("%d", &x);

  kwa = x * x;
  sze = x * x * x;

  printf("Wczytana liczba x=%d\n", x);
  printf("Kwadrat liczby x=%d %d^2=%d\n", x, x, kwa);
  printf("Sze�cian liczby x=%d %d^3=%d\n", x, x, sze);

  return 0;
}
