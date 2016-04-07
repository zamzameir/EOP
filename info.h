#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void profile ();
extern int main ();

using namespace std;
void info (void)
{
	system("title INFO");
	system("color f0");
	char choice;
	do
{
	system ("cls");
	
	cout << "\n CURRENT NEWS!\n";
	cout << " -------------\n\n\n\n";
		
	cout << "\n Type X to go back > ";
	fflush(stdin);
	cin >> choice;
	
	if ( choice !='x' && choice !='X' )
	cout << "\a";
	
	switch(choice) 
	{
		case 'x' : 
		case 'X' : main();break;
	}

} while ( choice != 'x' && choice != 'X' );
  return;
}

