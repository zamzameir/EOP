#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void profile ();
extern void info ();
extern int main ();

long int dob[1000];
string name[256];	
string edu[256];
string exp[256];
char sex[1000];

using namespace std;
void displayDB (void)
{
	system("title ");
	system("color f0");
	char choice;
	
	cout << setw(5) << name[j]  << " "
				     << setw(5) << dob [j] << " "
				     << setw(5) << sex [j] << " "
				     << setw(5) << edu [j] << " "
				     << setw(5) << exp [j] << " "
				     << endl;
		
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

} 	while ( choice != 'x' && choice != 'X' );
  	return;
}

