#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <conio.h>
#include <ctype.h>
#include <time.h>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void deleteData ();
extern inline void peekData ();
extern inline void viewData ();
extern inline void profile ();
extern void gotoxy ();
extern void load3 ();
extern void info ();
extern int main ();

using namespace std;

void databaseProfile (void)
{
	system("title ");
        system("color f0");
        system("mode con: cols=87 lines=19");
        char view [2][256] = { "View user database","Delete user database" };
	char choice;
	int index;
	
	do
{
	system ("cls");
	printmessage ();
				
	for (index = 0; index < 2; ++index)
	cout << " " << index+1 << " - " << view[index] << "\n"; // display char view
	cout << " X - Go back\n";
		
	cout << "\n Make a choice > ";
	fflush(stdin);
	choice = getch();
	
	if (choice !='1' && choice !='2' && choice !='x' && choice !='X')
	cout << "\a";
	
	switch (choice) 
	{
		case '1' : viewData();databaseProfile();break;
		case '2' : deleteData();databaseProfile();break;
		case 'x' : 
		case 'X' : main();break;
	}

} 	while (choice != '1' && choice != '2' && choice != 'x' && choice != 'X');
  	return;
}
