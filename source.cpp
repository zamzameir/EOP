/*
 * Copyright (C) 2016 zamzameir
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author Izzat Ameir
 *
 */
 
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include <cmath>

void printmessage (void);
void profile (void);

using namespace std;
int main()
{
	system("color f0");
	system("title Main menu"); 

	int index,randNo;
	char choice;
	char view [3][256] = { "Latest info","Job request","User database" };
						 
	srand (time (NULL));
	randNo = 100 + rand () % (200-101);
	int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
				       
do
{
	system ("cls");
	printmessage ();
	
	cout << " User No. " << randNo << "\t\t\t\t\t\t" << "DATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
	cout << "Select an action\n";
	cout << "----------------\n\n";
	
	for (index = 0; index < 3; ++index)
	cout << index+1 << " - " << view[index] << "\n";
		
	cout << "\nType an action number, or X to exit > ";
	fflush(stdin);
	cin >> choice;
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='x' && choice !='X')
	printf("\a");
			
	switch(choice) 
	{
		case '1' : break;
		case '2' : profile();break;
		case '3' : break;
		case 'x' : 
		case 'X' : break;
	}

} while ( choice != '1' && choice != '2' && choice != '3' && choice != 'x' && choice != 'X' );
return 0;
}
void profile (void)
{
	system("color b0");
	system("title Job request"); 
	int index;
	char choice;
	char view [6][256] = { "Profile","Experience","Education","Languages","Contacts","Technical skills" };
	do
{
	system ("cls");
	printmessage ();
				
	for (index = 0; index < 6; ++index)
	cout << index+1 << " - " << view[index] << "\n";
		
	cout << "\nType an action number, or X to back > ";
	fflush(stdin);
	cin >> choice;
	
	if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='x' && choice !='X')
	printf("\a");
	
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
}
void printmessage (void)
 {
      char message1 [] = "HELLO"; 
      char message2 [] = "----------------------------------";
      char message3 [] = "Welcome To Job Application Program";
      char message4 [] = "Version 1.0";
      
      printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
      puts("");
      printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
      puts("");
      printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
      puts("");
      printf("%*s",40+strlen(message4)/2,message4, 40-strlen(message4)/2,"");
      puts("");puts("");
      return;
}
// END

