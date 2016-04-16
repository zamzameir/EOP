#include <iostream>
#include <ctime>

extern inline void printmessage ();
extern inline void userDatabase ();
extern inline void profile ();
extern int main ();

using namespace std;

void info (void)
{
	system("title ");
	system("color f0");
	system("mode con: cols=87 lines=19");
	int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	char choice;
	char msg [5][256] = { "Calling for fresh graduates! our company needs you!",
	"Job application is open until 31 May 2016", "Your resume must be submitted directly through our system", 
	"Interview and acceptance within 2 weeks of submission","Submit now while chance last!" };
	do
{
	system ("cls");
	printmessage ();
	cout << " CURRENT NEWS AS OF " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n";
	cout << " ____________________________\n\n";
	cout << " Hello. Thank you for visiting our site"  << endl;
	cout << " For now there are a few announcement : " << endl << endl;
	
	for (int i = 0; i < 5; i++)
	{
	   cout << " " << i+1 << " - " << msg[i] << "\n"; // display message
	}
		
	cout << "\n Type X to go back > ";
	fflush(stdin);
	choice = getch();
	
	if (choice !='x' && choice !='X')
	cout << "\a";
	
	switch (choice) 
	{
		case 'x' : 
		case 'X' : main();break;
	}

} 	while (choice != 'x' && choice != 'X');
  	return;
}

