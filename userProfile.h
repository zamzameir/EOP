#include <iostream>

extern inline void printmessage ();
extern inline void userDatabase ();
extern void info ();
extern int main ();

using namespace std;
void profile (void)
{
	char view [6][256] = { "Profile","Experience (coming soon)","Education (coming soon)","Languages (coming soon)","Contacts (coming soon)","Technical skills (coming soon)" };
	system("title "); 
	system("color f0");
	char choice;
	int index;
	
	do
{
	system ("cls");
	printmessage ();
				
	for (index = 0; index < 6; ++index)
	cout << " " << index+1 << " - " << view[index] << "\n"; // display char view
	cout << " X - Go back\n";
		
	cout << "\n Make a choice > ";
	fflush(stdin);
	cin >> choice;
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='x' && choice !='X')
	cout << "\a";
	
	switch(choice) 
	{
		case '1' : userDatabase();break; // call function userDatabase
		case '2' : break;
		case '3' : break;
		case '4' : break;
		case '5' : break; 
		case '6' : break;
		case 'x' : 
		case 'X' : main();break;
	}
} 	while ( choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != 'x' && choice != 'X' );
  	return;
}
