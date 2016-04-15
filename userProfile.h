#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void deleteData ();
extern inline void peekData ();
extern inline void profile ();
extern void gotoxy ();
extern void load3 ();
extern void info ();

using namespace std;
void profile (void)
{
	char view [3][256] = { "New application","View submission","Delete submission" };
	system("title "); 
	system("color f0");
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
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='x' && choice !='X')
	cout << "\a";
	
	switch(choice) 
	{
		case '1' : userDatabase();break; // call function userDatabase
		case '2' : peekData();profile();break;
		case '3' : deleteData();profile();break;
		case 'x' : 
		case 'X' : main();break;
	}
} 	while ( choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != 'x' && choice != 'X' );
  	return;
}
