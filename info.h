#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void profile ();
extern int main ();

using namespace std;
void info (void)
{
	system("title ");
	system("color f0");
	char choice;
	char ann [2][256] = {"Job application is open until 5 April", "Resume must be submitted online" };
	do
{
	system ("cls");
	
	cout << "\n CURRENT NEWS!\n";
	cout << " -------------\n\n";
	cout << " Hello. Thank you for visiting our site"  << endl;
	cout << " For now there are a few announcement : " << endl << endl;
	
	for (int i = 0; i < 2; i++)
	{
		cout << " " << i+1 << " - " << ann[i] << "\n";
	}
		
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

