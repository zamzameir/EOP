#include <iostream>
#include <cstdio>

extern int main ();

using namespace std;

void printmessage (void)
{
   system("title Final Project");
   system("color f0");
   char message1 [] = "--------------------------------------"; 
   char message2 [] = "WELCOME TO EXPRESS ENGINEERING SDN BHD";
   char message3 [] = "--------------------------------------";

   /*<------- Center message ------->*/
         
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
   
   /*<------- Center message ------->*/
      
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
   
   /*<------- Center message ------->*/
      
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
   /*<------- Initialization ------->*/
   
   system("title Final Project");
   system("color f0");
   cout << "\n\n\n\n\n";
   string message = " Please wait...";		
   cout << message << flush;		
   time_t start = time( &start );		
   while (difftime( time( NULL ), start ) < 5.0 /*seconds*/)		
   { }		
   cout << "\r" << string( message.length(), ' ' ) << "\r" << flush;
   
   return;		
}		
int displayCredit (int argc, char** argv)		
{		
   /*<------- Startup credits ------->*/
   
   system("title Final Project");
   system("color f0");
   credit();		
   initialize( argc, argv );		
   
   return 0;		
}
