// Incomplete
#include <iostream>
#include <string.h>

extern inline void printmessage ();
extern void profile ();

const int ROWS = 1;
const int COLS = 5;
void display (int [ROWS][COLS]);

using namespace std;
void userDatabase (void)
{
	system("title Database");
	system("cls");
	string val[ROWS][COLS];
	int sum = 0;

	for (int i = 0; i < ROWS; i++)
	{
	int sum = 0;
	cout << "Applicant #" << i+1 << endl;
	cout << "Enter your name : ";
	cin >> val[0][0];
	cout << "IC - Number : ";
	cin >> val[0][1];
	cout << "Sex : ";
	cin >> val[0][2];
	cout << "Last education : ";
	cin >> val[0][3];
	cout <<"Work experience : ";
 	cin >> val[0][4];

	int rowNum,colNum;
	for (rowNum = 0 ; rowNum < ROWS; rowNum++)
	{
		for (colNum = 0; colNum < COLS; colNum++)
		cout << setw(10) << val[rowNum][colNum];
		
	cout << endl;
	}
	}
	system("pause");
}

