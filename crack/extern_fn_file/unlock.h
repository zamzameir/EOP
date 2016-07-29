#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <ctime>

char MainActivity[256]={"Flashtool.exe"};
char Serial[256]={"22TKDF8XX6YG69F9M66DRK7C8"};

using namespace std;

extern int main ();
extern void escape ();

void unlock (void){
FILE *lock;
char c;
std::ofstream crack;
crack.open("data/lock.dat",std::ofstream::out|std::ofstream::trunc);
crack.close();
system("cls");
cout << " Your name > ";
int j;char name[256];char Name[256];
scanf("%[^\n]",name);
for(j=0;name[j]!='\0';j++)
   { 
     Name[0]=toupper(name[0]);
     if(name[j-1]==' ')
     {
       Name[j]=toupper(name[j]);
       Name[j-1]=name[j-1];
     }
     else Name[j]=name[j];
   }
   Name[j]='\0';
   
if(sizeof(name)&&sizeof(Name)==0){
escape();	
}
system("mkdir data");
lock=fopen("data/lock.dat","a+");
fprintf(lock,"\n");
fprintf(lock," Cracked By   : %s\n",Name);
fprintf(lock," Crack Serial : %s\n",Serial); /*<-- Universal Hashkey -->*/
fprintf(lock," Patch target : %s\n",MainActivity);
fprintf(lock," Logged As    : NULL\n ");
time_t current;
current = time(NULL);
fprintf(lock,ctime(&current));
}
