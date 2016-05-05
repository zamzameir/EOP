#include <iostream>

extern inline void printmessage ();
extern inline void load (char[]);
extern inline void gotoxy ();
extern int main ();

using namespace std;

void about (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char view [2][256] = { "Credits","Download source code" };
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
    
    char buffer  [] = "Loading credits...";
    char buffer2 [] = "Redirecting...";
	
    switch (choice) 
    {
      case '1' : system("cls");load(buffer);system("start credits/credits.html");about();break;
      case '2' : system("cls");load(buffer2);system("start https://codeload.github.com/zamzameir/EOP/zip/3.8");about();break;
      case 'x' : 
      case 'X' : main();break;
    }

 } while (choice != '1' && choice != '2' && choice != 'x' && choice != 'X');

   return;
}
