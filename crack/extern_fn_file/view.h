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

void view (void){
system("mode con: cols=50 lines=6");
FILE *lock;
char c,escape;
/*COORD handleBar = {100,9999};
SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), handleBar);*/
do 
 {
    system("cls");
    lock=fopen("data/lock.dat","r");   
    if(fscanf(lock,"%c",&c)==EOF)
   {
     cout << " Bypass patch not found";
   }
    do
   {
     putchar(c=getc(lock));
   }
     while(c!=EOF);
     fclose(lock);  
    escape = getch();  
    switch (escape) 
    {
       default : exit(1);
    }		
 } while (!EOF);
return;
}

