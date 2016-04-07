#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include <cmath>

#include "welcomeMessage.h"
#include "userProfile.h"
#include "info.h"

inline void printmessage (void);
inline void profile (void);
inline void info (void);

using namespace std;
int main()
{
	system("color f0");
	system("title MAIN MENU"); 

	int index,randNo;
	char choice;
	char view [4][256] = { "Latest info","Job request","User database","Credits" };
						 
	srand (time (NULL));
	randNo = 100 + rand () % (200-101);
	int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
				       
do
{
	system ("cls");
	printmessage ();
	
	cout << " ID No. " << randNo << "\t\t\t\t\t\t" << "DATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
	cout << "Select an action\n";
	cout << "----------------\n\n";
	
	for (index = 0; index < 4; ++index)
	cout << index+1 << " - " << view[index] << "\n";
	cout << "X - Exit\n";
		
	cout << "\nType a number > ";
	fflush(stdin);
	cin >> choice;
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='x' && choice !='X')
	cout << "\a";
			
	switch(choice) 
	{
		case '1' : info();break;
		case '2' : profile();break;
		case '3' : break;
		case '4' : system ("start credits.html");break;
		case 'x' : 
		case 'X' : break;
	}

} while ( choice != '1' && choice != '2' && choice != '3' && choice != 'x' && choice != 'X' );
  return 0;
}
// END

