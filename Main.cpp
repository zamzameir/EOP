#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <cmath>

#include "display_message.h"
#include "splash_screen.h"
#include "user_section.h"
#include "news_section.h"
#include "job_section.h"
#include "input_data.h"

inline void databaseProfile (void);
inline void display_splash (void); // splash function
inline void printmessage (void);
inline void userDatabase (void);
inline void displayDB (void);
inline void gotoxy (int,int); // loading position
inline void viewData (void);
inline void profile (void);
inline void load (char[]); // loading function
inline void exit (void);
inline void info (void);

char** argv;int argc;

using namespace std;

class StartUp // run at startup
{
public:
   StartUp (void)
   { 
   	 char buffer [] = "Loading...";
	 system("mode con: cols=87 lines=18");
	 system("color f0");
	 system("title ");
	 displayCredit(argc,argv); 
   	 display_splash();
	 load(buffer); 
    }
};
StartUp startup;

int main (void)
{	
	system("mode con: cols=87 lines=19"); // set windows size
	system("color f0");
	system("title ");
	int index,randNo;
	char choice;
	char view [5][256] = { "News & announcement","Job application","Applicant data","Restart system","Credits" };
						 
	srand (time (NULL));
	randNo = 100 + rand () % (200-101); // random number
	int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
	time_t now = time(NULL);
	struct tm *t = localtime(&now);	// get current date
  	
	do
{
	system ("cls");
	printmessage ();
	cout << "  User No. " << randNo << "\t\t\t\t\t\t" << "\tDATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
	cout << " Select an action\n";
	cout << " ----------------\n\n";
	
	for (index = 0; index < 5; ++index)
	cout << " " << index+1 << " - " << view[index] << "\n"; // display view
	cout << " X - Exit\n";
		
	cout << "\n Make a choice > ";
	fflush(stdin);
	choice = getch();
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='x' && choice !='X')
	cout << "\a";
	
	char buffer [] = "Restarting program...";
			
	switch (choice) 
	{
		case '1' : info();break;
		case '2' : profile();break;
		case '3' : databaseProfile();break;
		case '4' : system("cls");load(buffer);StartUp();main();break;
		case '5' : system("start credits.html");main();break;
		case 'x' : 
		case 'X' : exit();break;
	}

} 	while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != 'x' && choice != 'X');
  	return 0;
}

// END

