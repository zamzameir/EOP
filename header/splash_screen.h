#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <cctype>
#include <ctime>

extern int main ();

using namespace std;

void gotoxy (int x, int y)
{
    system("title Final Project");
    system("color f0");
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void load (char buffer[])
{
    system("title Final Project"); // animated function
    system("color f0");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("%s",(buffer));
    gotoxy(30,15);
    for(r=1;r<=20;r++)
   {
      for(q=0;q<=50000000;q++); // to display the character slowly
      printf("%c",177);
   }
}
void display_splash (void)
{
    system("title Final Project");
    system("color f0");
    cout << string( 10, '\n' );
    cout << "\n\n";
    cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              ¦                                                    ¦ \n"
    	  "              ¦           EXPRESS ENGINEERING SDN. BHD.            ¦ \n"
    	  "              ¦    LEVEL 16, TOWER 1, PETRONAS TWIN TOWERS, KLCC   ¦ \n"
    	  "              ¦            50088 KUALA LUMPUR MALAYSIA             ¦ \n"
    	  "              ¦                                                    ¦ \n"
    	  "              +----------------------------------------------------+ \n";
    cout << string( 8, '\n' );
}
void exit (void)
{
    system("title Final Project");
    system("color f0");
    char buffer [] = "Exiting...";
    cout << string( 10, '\n' );
    cout << "\n\n\n\n";
    cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              ¦                                                    ¦ \n"
    	  "              ¦             THANK YOU FOR CHOOSING US              ¦ \n"
    	  "              ¦                                                    ¦ \n"
    	  "              +----------------------------------------------------+ \n";
    cout << string( 8, '\n' );
    load(buffer);
}
