#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <ctime>

using namespace std;

extern int main ();

void gotoxy (int x, int y){
system("color f0");
COORD centre;
centre.X = x;
centre.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), centre);
return;
}
void load (char buffer[]){
system("color f0");
int row,col,r,c,q;  
gotoxy(36,14);
printf("%s",(buffer));
gotoxy(30,15);  
for(r=1;r<=50;r++){
for(q=0;q<=500000;q++);
printf("%c",177);
}
return;
}
