#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <ctime>
#include <cmath>

extern inline void load (char[]);
extern inline void gotoxy ();
extern int main ();

void license (void)
{
	system("title Final Project");
    	system("color f0");
	FILE *license;
	char exit;
	char buffer [] = "Loading license...";
	load(buffer);
 do 
{
   system("cls");
   license=fopen("data/license.txt","r");
   do
   {
	   putchar(c=getc(license));
   }
	   while(c!=EOF);
       	   fclose(license);
   	   cout << "\n\n";
           cout << "  Type X to go back > ";
   	   exit = getch();
   
   if (exit !='x' && exit !='X')
	cout << "\a";
	
	switch (exit) 
	{
		case 'x' : 
		case 'X' : main();break;
	}
		
}  while (exit != 'x' && exit != 'X');
}
