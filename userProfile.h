#include <iostream>

extern inline void printmessage ();
extern int main ();
using namespace std;
void profile (void)
{
	system("color b0");
	system("title JOB REQUEST"); 
	int index;
	char choice;
	char view [6][256] = { "Profile","Experience","Education","Languages","Contacts","Technical skills" };
	do
{
	system ("cls");
	printmessage ();
				
	for (index = 0; index < 6; ++index)
	cout << index+1 << " - " << view[index] << "\n";
	cout << "X - Go back\n";
		
	cout << "\nType a number > ";
	fflush(stdin);
	cin >> choice;
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='x' && choice !='X')
	cout << "\a";
	
	switch(choice) 
	{
		case '1' : break;
		case '2' : break;
		case '3' : break;
		case '4' : break;
		case '5' : break; 
		case '6' : break;
		case 'x' : 
		case 'X' : main();break;
	}
} while ( choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != 'x' && choice != 'X' );
  return;
}
