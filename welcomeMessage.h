#include <iostream>

extern inline void userDatabase ();
extern inline void profile ();
extern inline void info ();
extern int main ();

using namespace std;
void printmessage (void)
 {
      char message1 [] = "----------------------------------"; 
      char message2 [] = "Welcome To Job Application Program";
      char message3 [] = "----------------------------------";
      
      printf("%*s",40+strlen(message1)/2,message1, 40-strlen(message1)/2,""); // center message 1
      puts("");
      printf("%*s",40+strlen(message2)/2,message2, 40-strlen(message2)/2,""); // center message 2
      puts("");
      printf("%*s",40+strlen(message3)/2,message3, 40-strlen(message3)/2,""); // center message 3
      puts("");puts("");
      return;
}
