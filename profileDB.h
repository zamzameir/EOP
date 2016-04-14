/* Incomplete */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>

extern inline void printmessage ();
extern inline void profile ();
extern inline void info ();
extern int main ();

using namespace std;
void userDatabase (void)
{
	long int dob[1000];
	string name[256];	
	string edu[256];
	string exp[256];
	char sex[1000];
	int app;

	system("title ");
	system("color f0");
	system("cls");
	
	cout << " How many applicant : ";
	cin  >> app;
	system("cls");
	
	for (int i = 0; i < app; i++)
	{
		cout << " Applicant #" << i+1 << endl;
			for (int j = 0; j < 1; j++)
			{
				cout << " Enter your name : ";
				cin  >> name[j];
				fflush(stdin);
				cout << " Enter your DOB : ";
				cin  >> dob[j];
				cout << " Sex : ";
				cin  >> sex[j];
				fflush(stdin);
				cout << " Education : ";
				cin  >> edu[j];
				fflush(stdin);
				cout << " Work Experience : ";
				cin  >> exp[j];
				fflush(stdin);
				cout << "\n\n";
				cout << " NAME\tDOB\tSEX\tEDUCATION\tEXPERIENCE\n"; // display array
				cout << setw(5) << name[j] << " "
				     << setw(5) << dob [j] << " "
				     << setw(5) << sex [j] << " "
				     << setw(5) << edu [j] << " "
				     << setw(5) << exp [j] << " "
				     << endl;
			}

		cout << "\n";
	}
	
	ifstream file("database.txt"); // creating file name database.txt
    if(file.is_open()) // save array data into file name database.txt
	{
    cout << "File Opened successfully!!!. Writing data from array to file" << endl;
    cout << "Array data successfully saved into the file test.txt" << endl;
	}
	else
	{
		cout << "File could not be opened." << endl;
	}

	system("pause");
}

