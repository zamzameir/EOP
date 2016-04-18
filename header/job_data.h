#include <windows.h>
#include <process.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <cstring>
#include <stdio.h>
#include <fstream>
#include <string>
#include <time.h>

extern inline void load (char[]);
extern inline void profile ();
extern inline void gotoxy ();
extern int main ();
extern int randNo;

char plname[256],nplname[256];
char course[256],ncourse[256];
char phone[256],nphone[256];
char cgpa[256],ncgpa[256];
char addr[256],naddr[256];
char edu[256],nedu[256];
char cha,c,submit;
int i,j,k,l,m,n,p;
   
using namespace std;

void userDatabase (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char back;
   FILE *info;
   info=fopen("data/database.txt","a+");
    
   system("cls");
   
   cout << " Enter your full name : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",plname);
   for(j=0;plname[j]!='\0';j++)
   { 
   nplname[0]=toupper(plname[0]);
   if(plname[j-1]==' '){
   nplname[j]=toupper(plname[j]);
   nplname[j-1]=plname[j-1];}
   else nplname[j]=plname[j];
   }
   nplname[j]='\0';
   
   system("cls");
   
   cout << " Education background : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",edu);
   for(k=0;edu[k]!='\0';k++)
   { 
   nedu[0]=toupper(edu[0]);
   if(edu[k-1]==' '){
   nedu[k]=toupper(edu[k]);
   nedu[k-1]=edu[k-1];}
   else nedu[k]=edu[k];
   }
   nedu[k]='\0';
   
   system("cls");
   
   cout << " Course background : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",course);
   for(l=0;course[l]!='\0';l++)
   { 
   ncourse[0]=toupper(course[0]);
   if(course[l-1]==' '){
   ncourse[l]=toupper(course[l]);
   ncourse[l-1]=course[l-1];}
   else ncourse[l]=course[l];
   }
   ncourse[l]='\0';
   
   system("cls");
   
   cout << " CGPA : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",cgpa);
   for(p=0;cgpa[p]!='\0';p++)
   { 
   ncgpa[0]=toupper(cgpa[0]);
   if(cgpa[p-1]==' '){
   ncgpa[p]=toupper(cgpa[p]);
   ncgpa[p-1]=cgpa[p-1];}
   else ncgpa[p]=cgpa[p];
   }
   ncgpa[p]='\0';
   
   system("cls");
   
   cout << " Address : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",addr);
   for(m=0;addr[m]!='\0';m++)
   { 
   naddr[0]=toupper(addr[0]);
   if(addr[m-1]==' '){
   naddr[m]=toupper(addr[m]);
   naddr[m-1]=addr[m-1];}
   else naddr[m]=addr[m];
   }
   naddr[m]='\0';
   
   system("cls");
   
   cout << " Phone number : " << "\n";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",phone);
   for(n=0;phone[n]!='\0';n++)
   { 
   nphone[0]=toupper(phone[0]);
   if(phone[n-1]==' '){
   nphone[n]=toupper(phone[n]);
   nphone[n-1]=phone[n-1];}
   else nphone[n]=phone[n];
   }
   nphone[n]='\0';
   
   system("cls");
   
   char message1 [] = "OVERVIEW";
   char message2 [] = "________";
   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");puts(""); // center message 1
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");puts(""); // center message 2
   cout << " ID No. " << randNo << endl;
   cout << " ----------\n" << endl;
   
   cout << " Name       : " << nplname << endl;
   cout << " Education  : " << nedu << endl;
   cout << " Course     : " << ncourse << endl;
   cout << " CGPA       : " << ncgpa << endl;
   cout << " Address    : " << naddr << endl;
   cout << " Contact    : " << nphone << endl;
   
   cout << "\n\n Press Y to submit or X to cancel > ";
   fflush(stdin);
   submit = getch();
   while (submit != 'y' && submit != 'Y' && submit != 'X' && submit != 'x')
   {
   		cout << "\a";
		system("cls");
   		char message1 [] = "OVERVIEW";
   		char message2 [] = "________";
   		printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");puts(""); // center message 1
   		printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");puts(""); // center message 2
   		cout << " ID No. " << randNo << endl;
   		cout << " ----------\n" << endl;
   
   		cout << " Name       : " << nplname << endl;
   		cout << " Education  : " << nedu << endl;
   		cout << " Course     : " << ncourse << endl;
   		cout << " CGPA       : " << ncgpa << endl;
   		cout << " Address    : " << naddr << endl;
   		cout << " Contact    : " << nphone << endl;
   
   		cout << "\n\n Press Y to submit or X to cancel > ";
   		fflush(stdin);
   		submit = getch();
   }
   
   if (submit == 'y' || submit == 'Y')
   {
   		fprintf(info," ID No : %d\n",randNo);
		fprintf(info," Applicant Name : %s\n",nplname);
   		fprintf(info," Education : %s\n",nedu);
   		fprintf(info," Course background : %s\n",ncourse);
   		fprintf(info," CGPA : %s\n",ncgpa);
   		fprintf(info," Address : %s\n",naddr);
   		fprintf(info," Contact : %s\n",nphone);
   		time_t mytime;
   		mytime = time(NULL);
   		fprintf(info," Application date : %s",ctime(&mytime));
   		for(i=0;i<=50;i++)
   		fprintf(info,"%c",'_');
   		fprintf(info,"\n\n");
   		fclose(info);
   		system("cls");
   		char buffer [] = "Saving data...";
		load(buffer);
   		system("cls");
  		cout << "\n\n\n\n";
  		char message1 [] = "----------------------------------"; 
  		char message2 [] = "THANK YOU YOUR DATA HAS BEEN SAVED";
  		char message3 [] = "----------------------------------";
      
  		printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,""); // center message 1
  		puts("");
  		printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,""); // center message 2
  		puts("");
  		printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,""); // center message 3
  		puts("");
  		fclose(info);
   }
   
   else

   {
   		system("cls");
   		char buffer [] = "Aborting...";
		load(buffer);
		system("cls");
   		cout << "\n\n\n\n";
  		char message1 [] = "-------------------------------"; 
  		char message2 [] = "SUBMISSION ABORTED BY APPLICANT";
  		char message3 [] = "-------------------------------";
      
  		printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,""); // center message 1
  		puts("");
  		printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,""); // center message 2
  		puts("");
  		printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,""); // center message 3
  		puts("");
   }
	
	cout << "\n\n\n";
	char cont [] = "< Press anykey to continue >";
	printf("%*s",40+strlen(cont)/2,cont, 40-strlen(cont)/2,""); // center cont
	back = getch();
	switch (back)
	{
	    default : main();break;
	}
	
}
void peekData (void)
{
   system("title Final Project");
   system("color f0");
   char conts;

   system ("cls");
   char message1 [] = "EMPLOYMENT APPLICATION FORM";
   char message2 [] = "___________________________";
   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");puts(""); // center message 1
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");puts(""); // center message 2
   cout << "\n";
   cout << " Name       : " << nplname << endl;
   cout << " Education  : " << nedu << endl;
   cout << " Course     : " << ncourse << endl;
   cout << " CGPA       : " << ncgpa << endl;
   cout << " Address    : " << naddr << endl;
   cout << " Contact    : " << nphone << endl;
   cout << " _____________________________________________________________\n";
   cout << "\t\t\t    This is a computer generated view.\n ";
   
   cout < "\n";
   cout << "\n Type X to go back > ";
   conts = getch();
   
   if (conts !='x' && conts !='X')
	cout << "\a";
	
	switch (conts) 
	{
		case 'x' : 
		case 'X' : break;
		default  : peekData();
	}	
}
void resetData (void)
{
 // reset array data back to 0 
    system("title Final Project");
    system("color f0");
    char buffer [] = "Resetting data...";
    system("cls");
    load(buffer);
    system("cls");
    memset(nplname, 0, sizeof(nplname));
    memset(ncourse, 0, sizeof(ncourse));
    memset(nphone, 0, sizeof(nphone));
    memset(ncgpa, 0, sizeof(ncgpa));
    memset(naddr, 0, sizeof(naddr));
    memset(nedu, 0, sizeof(nedu));
}
