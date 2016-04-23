#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void load (char[]);
extern inline void resetData ();
extern inline void peekData ();
extern inline void profile ();
extern inline void gotoxy ();
extern int main ();

using namespace std;

void profile (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char buffer [] = "Getting data...";
   system("mode con: cols=87 lines=19");
   char view [3][256] = { "New employment application","View last submission attempt","Reset last submission attempt" };
   char choice;
   int index;
	
   do
 {
     system ("cls");
     printmessage ();
				
     for (index = 0; index < 3; ++index)
     cout << " " << index+1 << " - " << view[index] << "\n"; // display char view
     cout << " X - Go back\n";
		
     cout << "\n Make a choice > ";
     fflush(stdin);
     choice = getch();
	
     if (choice !='1' && choice !='2' && choice !='3' && choice !='x' && choice !='X')
     cout << "\a";
	
     switch (choice) 
     {
       case '1' : userDatabase();break;
       case '2' : system("cls");load(buffer);peekData();profile();break;
       case '3' : resetData();profile();break;
       case 'x' : 
       case 'X' : main();break;
     }
 } while (choice != '1' && choice != '2' && choice != '3' && choice != 'x' && choice != 'X');
   return;
}
