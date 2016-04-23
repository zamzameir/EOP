#include <windows.h>
#include <process.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctype.h>
#include <string>
#include <ctime>

extern inline void printmessage ();
extern inline void deleteData ();
extern inline void load (char[]);
extern inline void viewData ();
extern inline void gotoxy ();
extern int main ();

using namespace std;

void databaseProfile (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char view [2][256] = { "View applicant database","Delete applicant database" };
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

 } while (choice != '1' && choice != '2' && choice != 'x' && choice != 'X');

   return;
}
