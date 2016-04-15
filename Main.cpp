#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <cmath>

#include "welcomeMessage.h"
#include "splashScreen.h"
#include "userProfile.h"
#include "profileDB.h"
#include "info.h"

inline void display_splash(void); // splash function
inline void printmessage (void);
inline void userDatabase (void);
inline void displayDB (void);
inline void viewData (void);
inline void adios (void);
inline void gotoxy(int,int); // loading function
inline void profile (void);
inline void info (void);
inline void load (void); // loading function

char** argv;int argc;
using namespace std;

class StartUp // run at startup
{
public:
   StartUp()
   { 
   	 system("mode con: cols=87 lines=18");
	 system("color f0");
	 system("title ");
	 displayCredit(argc,argv); 
   	 display_splash();
	 load(); 
    }
};
StartUp startup;

int main()
{	
	system("mode con: cols=87 lines=19"); // set windows size
	system("color f0");
	system("title "); 
	int index,randNo;
	char choice;
	char view [4][256] = { "News update","Job application","Applicant data","Credits" };
						 
	srand (time (NULL));
	randNo = 100 + rand () % (200-101); // random number
	int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
	time_t now = time(NULL);
	struct tm *t = localtime(&now);	// get current date
  	do
{
	system ("cls");system ("cls");
	printmessage ();
	cout << "  User No. " << randNo << "\t\t\t\t\t\t" << "\tDATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
	cout << " Select an action\n";
	cout << " ----------------\n\n";
	
	for (index = 0; index < 4; ++index)
	cout << " " << index+1 << " - " << view[index] << "\n"; // display view
	cout << " X - Exit\n";
		
	cout << "\n Make a choice > ";
	fflush(stdin);
	choice = getch();
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='x' && choice !='X')
	cout << "\a";
			
	switch(choice) 
	{
		case '1' : info();break;
		case '2' : profile();break;
		case '3' : viewData();break;
		case '4' : system ("start credits.html");break;
		case 'x' : 
		case 'X' : adios();break;
	}

} 	while ( choice != '1' && choice != '2' && choice != '3' && choice != 'x' && choice != 'X' );
  	return 0;
}

// END

