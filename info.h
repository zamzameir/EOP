#include <iostream>

extern inline void printmessage ();
extern int main ();
using namespace std;
void info (void)
{
	system("color cf");
	system("title INFO"); 
	char choice;
	do
{
	system ("cls");
	printmessage ();
	
	cout << "CURRENT NEWS!\n";
	cout << "-------------\n\n\n\n";
		
	cout << "\nType X to go back > ";
	fflush(stdin);
	cin >> choice;
	
	if ( choice !='x' && choice !='X' )
	printf("\a");
	
	switch(choice) 
	{
		case 'x' : 
		case 'X' : main();break;
	}

} while ( choice != 'x' && choice != 'X' );
  return;
}

