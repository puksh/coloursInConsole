#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x-1;
	c.Y = y-1;
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}
void ustaw_kolor(int c)
{
	HANDLE uchwyt;
	uchwyt=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(uchwyt,c);
}
void rys_ksztalt(int x,int y, int kolor)
{
	ustaw_kolor(kolor);
	while(y<80){
	gotoxy(x,y);
	cout<<(char)219<<endl;
	y++;
	}
}
int main(int argc, char** argv) {
	for(int i;i<238;i++){
	rys_ksztalt(i,0,i);
	}
	system("pause");
}
