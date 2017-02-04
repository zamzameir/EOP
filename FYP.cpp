#include <windows.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <fstream>

inline int  displayCredit (int,char**);
inline int  login2(void);
inline int  login(void);
inline void initialize (int,char**);
inline void databaseProfile (void);
inline void display_splash (void);
inline void printmessagedb (void);
inline void printmessage (void);
inline void userDatabase (void);
inline void deleteData (void);
inline void gotoxy (int,int);
inline void resetData (void);
inline void viewData (void);
inline void peekData (void);
inline void profile (void);
inline void license (void);
inline void load (char[]);
inline void credit (void);
inline void about (void);
inline void exit (void);
inline void info (void);
inline void check(void);
inline void truncate(void);

char** argv;
int argc;
int randNo;
char plname[256],nplname[256];
char course[256],ncourse[256];
char phone[256],nphone[256];
char cgpa[256],ncgpa[256];
char addr[256],naddr[256];
char edu[256],nedu[256];
char cha,c,submit;
int i,j,k,l,m,n,p;

using namespace std;

class StartUp
{
public:
   StartUp (void)
   {
      check();
      char buffer [] = "Welcome...";
      system("mode con: cols=87 lines=20");
      system("color f0");
      system("title Final Project");
      displayCredit(argc,argv);
      display_splash();
      load(buffer);
   }
};
StartUp startup;

int main (void)
{
   system("mode con: cols=87 lines=20");
   system("color f0");
   system("title Final Project");
   int index;
   char choice;
   char view [6][256] = { "News & announcement\t\t <NEW>","Employment application\t\t <APPLY NOW>","Applicant data\t\t\t <CHECK STATUS>","Restart system","License","About" };

   srand (time (NULL));
   randNo = 100 + rand () % (200-101);
   int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);

   do
 {
    system ("cls");
    printmessage ();
    cout << "  Your ID. " << randNo << "\t\t\t\t\t\t" << "\tDATE: " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n\n";
    cout << " Select an action\n";
    cout << " ----------------\n\n";
    for (index = 0; index < 6; ++index)
    cout << " " << index+1 << " - " << view[index] << "\n";
    cout << " X - Exit\n";

    cout << "\n Make a choice > ";
    fflush(stdin);
    choice = getch();

    if (choice !='1' && choice !='2' && choice !='3' && choice !='4' && choice !='5' && choice !='6' && choice !='a' && choice !='A' && choice !='x' && choice !='X')
    cout << "\a";

    char buffer [] = "Restarting program...";
    char logout [] = "Logging out...";

    switch (choice) 
    {
       case '1' : info();break;
       case '2' : profile();break;
       case '3' : databaseProfile();break;
       case '4' : system("cls");load(buffer);StartUp();main();break;
       case '5' : system("cls");license();break;
       case '6' : about();break;
       case 'a' :
       case 'A' : system("cls");load(logout);truncate();login();main();break;
       case 'x' : 
       case 'X' : exit();break;
    }

 } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice !='6' && choice !='a' && choice !='A' && choice != 'x' && choice != 'X');

   return 0;
}
void gotoxy (int x, int y)
{
   system("title Final Project");
   system("color f0");
   COORD coord;
   coord.X = x;
   coord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

   return;
}
void load (char buffer[])
{
   system("title Final Project");
   system("color f0");
   int row,col,r,c,q;

   for(r=1;r<=20;r++)
   {
      for(q=0;q<=5000000;q++);
      printf("%c",177);
   }

   return;
}
void display_splash (void)
{
   system("title Final Project");
   system("color f0");
   cout << string( 10, '\n' );
   cout << "\n\n";
   cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              �                                                    � \n"
    	  "              �           EXPRESS ENGINEERING SDN. BHD.            � \n"
    	  "              �    LEVEL 16, TOWER 1, PETRONAS TWIN TOWERS, KLCC   � \n"
    	  "              �            50088 KUALA LUMPUR MALAYSIA             � \n"
    	  "              �                                                    � \n"
    	  "              +----------------------------------------------------+ \n";
   cout << string( 8, '\n' );

   return;
}
void exit (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Exiting...";
   cout << string( 10, '\n' );
   cout << "\n\n\n\n";
   cout <<
    	  "              +----------------------------------------------------+ \n"
    	  "              �                                                    � \n"
    	  "              �             THANK YOU FOR CHOOSING US              � \n"
    	  "              �                                                    � \n"
    	  "              +----------------------------------------------------+ \n";
   cout << string( 8, '\n' );
   load(buffer);
   return;
}
void printmessage (void)
{
   system("title Final Project");
   system("color f0");
   char message1 [] = "--------------------------------------";
   char message2 [] = "WELCOME TO EXPRESS ENGINEERING SDN BHD";
   char message3 [] = "--------------------------------------";
         
   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
   puts("");
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
   puts("");
   printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
   puts("");puts("");

   return;
}
void printmessagedb (void)
{
   system("title Final Project");
   system("color f0");
   char message1 [] = "-----------------------------------";
   char message2 [] = "EXPRESS ENGINEERING DATABASE SYSTEM";
   char message3 [] = "-----------------------------------";

   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
   puts("");
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
   puts("");
   printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
   puts("");puts("");

   return;
}
void credit (void)
{
   system("title Final Project");
   system("color f0");
   char line     [] = "----------------------\n"; 
   char message1 [] = "FINAL PROJECT EOP SEM2\n"; 
   char message2 [] = "JOB APPLICATION SYSTEM\n";
   char message3 [] = "Izzat Ameir    1523329\n";
   char message4 [] = "Muhammad Afif  1520547\n";
   char message5 [] = "Haris Fadhilah 1524571\n";
   char message6 [] = "Amirul Ashraaf 1520157\n\n";

   cout << "\n";
   printf("%*s",40+strlen(line)/2,line, 40-strlen(line)/2,"");
   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
   printf("%*s",40+strlen(line)/2,line, 40-strlen(line)/2,""); puts("");
   printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
   printf("%*s",40+strlen(message4)/2,message4, 40-strlen(message4)/2,"");
   printf("%*s",40+strlen(message5)/2,message5, 40-strlen(message5)/2,"");
   printf("%*s",40+strlen(message6)/2,message6, 40-strlen(message6)/2,"");

   return;
}
void initialize (int argc, char** argv)
{
   system("title Final Project");
   system("color f0");
   cout << "\n\n\n\n\n";
   string message = " Please wait...";
   cout << message << flush;
   time_t start = time( &start );
   while (difftime( time( NULL ), start ) < 5.0)
   { }
   cout << "\r" << string( message.length(), ' ' ) << "\r" << flush;

   return;
}
int displayCredit (int argc, char** argv)
{
   system("title Final Project");
   system("color f0");
   credit();
   initialize( argc, argv );

   return 0;
}
void license (void)
{
   system("title Final Project");
   system("color f0");
   FILE *license;
   char c,exit;
   char buffer [] = "Loading license...";
   load(buffer);
   do
 {
    system("cls");
    license=fopen("data/license.txt","r");
    if(fscanf(license,"%c",&c)==EOF)
   {
     printmessage ();
     cout << endl << "  Company has not been registered" << endl << endl;
   }

    do
   {
     putchar(c=getc(license));
   }
     while(c!=EOF);
     fclose(license);

    cout << "\n\n";
    cout << "  Type X to go back > ";
    exit = getch();

    if (exit !='x' && exit !='X')
    cout << "\a";

    switch (exit)
    {
       case 'x' :
       case 'X' : main();break;
    }

 } while (exit != 'x' && exit != 'X');

   return;
}
void about (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char view [2][256] = { "Credits","Download source code" };
   char choice;
   int index;

   do
 {
    system ("cls");
    printmessage ();

    cout << "\t\t\tELEMENTS OF PROGRAMMING CSC1100" << endl;
    cout << "\t\t       FINAL PROJECT SEMESTER 2 2015/2016" << endl;
    cout << "\t\t\t     JOB APPLICATION SYSTEM" << endl << endl;

    for (index = 0; index < 2; ++index)
    cout << " " << index+1 << " - " << view[index] << "\n";
    cout << " X - Go back\n";

    cout << "\n Make a choice > ";
    fflush(stdin);
    choice = getch();

    if (choice !='1' && choice !='2' && choice !='x' && choice !='X')
    cout << "\a";

    char buffer1 [] = "Loading credits...";
    char buffer2 [] = "Redirecting...";

    switch (choice) 
    {
      case '1' : system("cls");load(buffer1);system("start credits/credits.html");about();break;
      case '2' : system("cls");load(buffer2);system("start credits/download.html");about();break;
      case 'x' : 
      case 'X' : main();break;
    }

 } while (choice != '1' && choice != '2' && choice != 'x' && choice != 'X');

   return;
}
void info (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   int month = 4, year = 2015, tm_mon, tm_mday, tm_year;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
   char choice;
   char msg [7][256] = { "Calling for fresh graduates! our company needs you!",
   "Job application is open until 31 DEC 2016","Position offered : Lead Engineer & System Engineer",
   "Offered salary : MYR 15K","Your resume must be submitted directly through our system",
   "Interview and acceptance within 2 weeks of submission","Submit now while chance last!" };
   do
 {
    system ("cls");
    cout << "\n";
    cout << " CURRENT NEWS AS OF " << t->tm_mday <<"/" << t->tm_mon+1 <<"/" << t->tm_year+1900 << "\n";
    cout << " ____________________________\n\n";
    cout << " Hello. Thank you for visiting our site" << endl;
    cout << " Express Engineering is one of the largest and best performing" << endl;
    cout << " contract manufacturing solution suppliers to the Oil & Gas market." << endl;
    cout << " We have a few announcement for you : " << endl << endl;

    for (int i = 0; i < 7; i++)
     {
       cout << " " << i+1 << " - " << msg[i] << "\n";
     }

    cout << "\n\n Type X to go back > ";
    fflush(stdin);
    choice = getch();

    if (choice !='x' && choice !='X')
    cout << "\a";

    switch (choice)
    {
      case 'x' : 
      case 'X' : main();break;
    }

 }  while (choice != 'x' && choice != 'X');

    return;
}
void profile (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char buffer [] = "Getting data...";
   system("mode con: cols=87 lines=19");
   char view [3][256] = { "New employment application","View last submission attempt","Reset last submission attempt" };
   char choice;
   int index;

   do
 {
     system ("cls");
     printmessage ();

     for (index = 0; index < 3; ++index)
     cout << " " << index+1 << " - " << view[index] << "\n";
     cout << " X - Go back\n";

     cout << "\n Make a choice > ";
     fflush(stdin);
     choice = getch();

     if (choice !='1' && choice !='2' && choice !='3' && choice !='x' && choice !='X')
     cout << "\a";

     switch (choice) 
     {
       case '1' : userDatabase();break;
       case '2' : system("cls");load(buffer);peekData();profile();break;
       case '3' : resetData();profile();break;
       case 'x' : 
       case 'X' : main();break;
     }

 } while (choice != '1' && choice != '2' && choice != '3' && choice != 'x' && choice != 'X');

   return;
}
void userDatabase (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char back;

   FILE *info;
   info=fopen("data/applicant.dat","a+");
   fprintf(info,"\n");

   char message1 [] = "EMPLOYMENT APPLICATION FORM";
   char message2 [] = "___________________________";
   printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");puts("");
   printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");puts("");
   cout << "\n";
   cout << " ID No. " << randNo << "\n";
   cout << " ----------" << "\n\n";

   cout << " Full name : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",plname);

   for(j=0;plname[j]!='\0';j++)
   {
     nplname[0]=toupper(plname[0]);
     if(plname[j-1]==' ')
     {
       nplname[j]=toupper(plname[j]);
       nplname[j-1]=plname[j-1];
     }
     else nplname[j]=plname[j];
   }
   nplname[j]='\0';

   cout << " ";
   cout << "\n";

   cout << " Education : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",edu);

   for(k=0;edu[k]!='\0';k++)
   {
     nedu[0]=toupper(edu[0]);
     if(edu[k-1]==' ')
     {
       nedu[k]=toupper(edu[k]);
       nedu[k-1]=edu[k-1];
     }
     else nedu[k]=edu[k];
   }
   nedu[k]='\0';

   cout << " ";
   cout << "\n";

   cout << " Course : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",course);

   for(l=0;course[l]!='\0';l++)
   {
     ncourse[0]=toupper(course[0]);
     if(course[l-1]==' ')
     {
       ncourse[l]=toupper(course[l]);
       ncourse[l-1]=course[l-1];
     }
     else ncourse[l]=course[l];
   }
   ncourse[l]='\0';

   cout << " ";
   cout << "\n";

   cout << " CGPA : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",cgpa);

   for(p=0;cgpa[p]!='\0';p++)
   {
     ncgpa[0]=toupper(cgpa[0]);
     if(cgpa[p-1]==' ')
     {
       ncgpa[p]=toupper(cgpa[p]);
       ncgpa[p-1]=cgpa[p-1];
     }
     else ncgpa[p]=cgpa[p];
   }
   ncgpa[p]='\0';

   cout << " ";
   cout << "\n";

   cout << " Address : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",addr);

   for(m=0;addr[m]!='\0';m++)
   { 
     naddr[0]=toupper(addr[0]);
     if(addr[m-1]==' ')
     {
       naddr[m]=toupper(addr[m]);
       naddr[m-1]=addr[m-1];
     }
     else naddr[m]=addr[m];
   }
   naddr[m]='\0';

   cout << " ";
   cout << "\n";

   cout << " Contact number : ";
   fflush(stdin);
   cout << " ";
   scanf("%[^\n]",phone);

   for(n=0;phone[n]!='\0';n++)
   {
     nphone[0]=toupper(phone[0]);
     if(phone[n-1]==' ')
     {
       nphone[n]=toupper(phone[n]);
       nphone[n-1]=phone[n-1];
     }
     else nphone[n]=phone[n];
   }
   nphone[n]='\0';

   system("cls");

   char message3 [] = "OVERVIEW";
   char message4 [] = "________";
   printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");puts("");
   printf("%*s",40+strlen(message4)/2,message4, 40-strlen(message4)/2,"");puts("");
   cout << "\n";
   cout << " ID No. " << randNo << endl;
   cout << " ----------\n" << endl;

   cout << " Name       : " << nplname << endl;
   cout << " Education  : " << nedu << endl;
   cout << " Course     : " << ncourse << endl;
   cout << " CGPA       : " << ncgpa << endl;
   cout << " Address    : " << naddr << endl;
   cout << " Contact    : " << nphone << endl;

   cout << "\n ***Please confirm your informations first\n";
   cout << " Your data cannot be modified once submitted\n"; 
   cout << " Press Y to submit or X to cancel > ";
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
      cout << "\n";
      cout << " ID No. " << randNo << endl;
      cout << " ----------\n" << endl;

      cout << " Name       : " << nplname << endl;
      cout << " Education  : " << nedu << endl;
      cout << " Course     : " << ncourse << endl;
      cout << " CGPA       : " << ncgpa << endl;
      cout << " Address    : " << naddr << endl;
      cout << " Contact    : " << nphone << endl;
      
      cout << "\n ***Please confirm your informations first\n";
      cout << " Your data cannot be modified once submitted\n"; 
      cout << " Press Y to submit or X to cancel > ";
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
      fprintf(info,"%c",' ');
      for(i=0;i<=75;i++)
      fprintf(info,"%c",'_');
      fprintf(info,"\n\n");
      fclose(info);
      system("cls");
      char buffer [] = "Saving data...";
      load(buffer);
      system("cls");
      cout << "\n\n\n\n";
      cout << "\a";
      MessageBox(NULL, "Your data has been saved","Message",MB_OK);
   }

   else

   {
      system("cls");
      char buffer [] = "Aborting...";
      load(buffer);
      system("cls");
      cout << "\n\n\n\n";
      cout << "\a";
      MessageBox(NULL, "Submission aborted","Warning",MB_ICONEXCLAMATION|MB_OK);
   }

   fclose(info);

   cout << "\n\n\n";
   char cont [] = "< Press anykey to continue >";
   printf("%*s",40+strlen(cont)/2,cont, 40-strlen(cont)/2,"");
   back = getch();
   switch (back)
   {
     default : main();break;
   }

   return;
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

   return;
}
void resetData (void)
{
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

   return;
}
void databaseProfile (void)
{
   system("title Final Project");
   system("color f0");
   system("mode con: cols=87 lines=20");
   char view [2][256] = { "View applicant database","Delete applicant database" };
   char choice;
   int index;

   do
 {
     system ("cls");
     printmessage ();

     for (index = 0; index < 2; ++index)
     cout << " " << index+1 << " - " << view[index] << "\n";
     cout << " X - Go back\n";

     cout << "\n Make a choice > ";
     fflush(stdin);
     choice = getch();

     if (choice !='1' && choice !='2' && choice !='x' && choice !='X')
     cout << "\a";

     switch (choice) 
      {
        case '1' : viewData();databaseProfile();break;
        case '2' : deleteData();databaseProfile();break;
        case 'x' : 
        case 'X' : main();break;
      }

 } while (choice != '1' && choice != '2' && choice != 'x' && choice != 'X');

   return;
}
void viewData (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Getting data...";
   char c,exit;

   COORD newSize = {100,9999};
   SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), newSize);

   FILE *info;
   info=fopen("data/applicant.dat","a+");
   system("cls");
   load(buffer);

   do 
 {
    system("cls");
    info=fopen("data/applicant.dat","r");

    if(fscanf(info,"%c",&c)==EOF)
   {
      printmessagedb ();
      cout << endl << " No data was found" << endl << endl;
   }

    do
   {
      putchar(c=getc(info));
   }
      while(c!=EOF);
      fclose(info);

   cout << "Type X to go back > ";
   exit = getch();

   if (exit !='x' && exit !='X')
   cout << "\a";

   switch (exit) 
   {
     case 'x' : 
     case 'X' : break;
   }

 } while (exit != 'x' && exit != 'X');

   return;
}
void deleteData (void)
{
   system("title Final Project");
   system("color f0");
   char buffer [] = "Deleting data...";
   system("cls");
   load(buffer);
   system("cls");

   std::ofstream ofs;
   ofs.open("data/applicant.dat", std::ofstream::out | std::ofstream::trunc);
   ofs.close();
   system("rm data/applicant.dat");

   return;
}
int login(void) 
{ 
  system("mode con: cols=87 lines=20");
  system("title ");
  char userChar[100], input, passChar[100];

  char message1 [] = "\t    --------------";
  char message2 [] = "\t    PLEASE SIGN IN";
  char message3 [] = "\t    --------------";

  char abort [] = "Aborting Access...";
  char grant [] = "Granting Access...";
  char out   [] = "Exiting...";

  for (int attempt=3; attempt>0; attempt--)
  {
     for (int i=0; i<100; userChar[i++]=0); 
     {
        system ("cls");
        printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
        puts("");
        printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
        puts("");
        printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
        puts("");puts("");puts("");

          if (attempt == 3)
          {
             cout << " You have " << attempt << " attempts left\n";
          }

          else if (attempt == 2)
          {
             cout << " You have " << attempt << " attempts left\n";
          }

          else if (attempt == 1)
          {
             cout << " This is your last attempt\n";
             cout << " Program will self-destruct\n";
          }

             cout << endl;
             cout<<" ENTER USERNAME: ";
             cin.getline(userChar,100);
             system("cls"); 
             printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
             puts("");
             printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
             puts("");
             printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
             puts("");puts("");puts("");

                if (attempt == 3)
                {
                   cout << " You have " << attempt << " attempts left\n";
                }

                else if (attempt == 2)
                {
                   cout << " You have " << attempt << " attempts left\n";
                }

                else if (attempt == 1)
                {
                   cout << " This is your last attempt\n";
                   cout << " Program will self-destruct\n";

                   cout << endl;
                   cout<<" ENTER PASSWORD: ";
     
                      for (int i=0;;i++)
                      {
                      input=getch(); 
                      if ((input!=8)&&(input!=13))
                      {
                        passChar[i]=input;
                      }

                      else if (input==8)
                      i-=2;

                      else if (input==13)
                      break;

                      system("cls");
                      printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
                      puts("");
                      printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
                      puts("");
                      printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
                      puts("");puts("");puts("");

                      if (attempt == 3)
                      {
                        cout << " You have " << attempt << " attempts left\n";
                      }

                      else if (attempt == 2)
                      {
                        cout << " You have " << attempt << " attempts left\n";
                      }

                      else if (attempt == 1)
                      {
                        cout << " This is your last attempt\n";
                        cout << " Program will self-destruct\n";
                      }

                      cout << endl;
                      cout<<" ENTER PASSWORD: ";
                      for (int j=0; j<i+1; j++)
                      cout<<"*";
                      }

                      cout<<endl;

                      if (!strcmp(userChar, "Izzat Ameir"))
                      {
                        if (!strcmp(passChar, "mirmira"))
                        {
                          load(grant);
                          FILE *lock;
                          char c;
                          system ("cls");
                          return 0;
                        }

                        else
                        {
                          MessageBox(NULL, "ID & PASSWORD DOES NOT MATCH","Error!",MB_ICONEXCLAMATION|MB_OK);
                          load(out);
                        }
                      }

						else if (strcmp(userChar, "Izzat Ameir"))
						{
							if (!strcmp(passChar, "mirmira"))
							{
								MessageBox(NULL, "WRONG ID","Error!",MB_ICONEXCLAMATION|MB_OK);
								load(out);
							}

							else
							{
								MessageBox(NULL, "THIS ID DOES NOT EXIST","Error!",MB_ICONEXCLAMATION|MB_OK);
								load(out);
							}
						}
						
						exit(1);
				}

			cout << endl;
			cout<<" ENTER PASSWORD: ";

				for (int i=0;;i++)
				{
				input=getch();
				if ((input!=8)&&(input!=13))
				{
				passChar[i]=input;
				}

				else if (input==8)
				i-=2;

				else if (input==13)
				break;

				system("cls");
				printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,"");
				puts("");
				printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,"");
				puts("");
				printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,"");
				puts("");puts("");puts("");

				if (attempt == 3)
				{
					cout << " You have " << attempt << " attempts left\n";
				}

				else if (attempt == 2)
				{
				cout << " You have " << attempt << " attempts left\n";
				}

				else if (attempt == 1)
				{
				cout << " This is your last attempt\n";
				cout << " Program will self-destruct\n";
				}
				
				cout << endl;
				cout<<" ENTER PASSWORD: ";
				for (int j=0; j<i+1; j++)
				cout<<"*";
				}

			cout<<endl;

			if (!strcmp(userChar, "Izzat Ameir"))
			{
				if (!strcmp(passChar, "mirmira"))
				{
				load(grant);
				FILE *lock;
				char c;
				system ("cls");
				return 0;
				}
				
				else
				{
					MessageBox(NULL, "ID & PASSWORD DOES NOT MATCH","Error!",MB_ICONEXCLAMATION|MB_OK);
					load(abort);
				}
			}

			else if (strcmp(userChar, "Izzat Ameir"))
			{
				if (!strcmp(passChar, "mirmira"))
				{
					MessageBox(NULL, "WRONG ID","Error!",MB_ICONEXCLAMATION|MB_OK);
					load(abort);
				}

				else
				{
					MessageBox(NULL, "THIS ID DOES NOT EXIST","Error!",MB_ICONEXCLAMATION|MB_OK);
					load(abort);
				}
			}


				for (int i=0; i<100; userChar[i++]=0);
				for (int i=0; i<100; passChar[i++]=0);
     }
  }

	exit(1); 
	return 0; 
}
void check (void){
   FILE *lock;
   char c;
   lock=fopen("data/lock.dat","a+");
   if(fscanf(lock,"%c",&c)==EOF){
   fclose(lock);
   login();
   }
   else if(fscanf(lock,"%c",&c)==!EOF){
   fclose(lock);
   return;
   }
}
void truncate (void){
    std::ofstream ofs;
    ofs.open("data/lock.dat",std::ofstream::out|std::ofstream::trunc);
    ofs.close();
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc;
	HWND hwnd;
	MSG Msg;

	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION);

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,640,480,NULL,NULL,hInstance,NULL);
	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	while(GetMessage(&Msg, NULL, 0, 0) > 0) {
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	return Msg.wParam;
}

