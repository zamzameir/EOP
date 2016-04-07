#include <iostream>

extern int main ();
using namespace std;
void printmessage (void)
 {
      char message1 [] = "HELLO"; 
      char message2 [] = "Welcome To Job Application Program";
      char message3 [] = "----------------------------------";
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
