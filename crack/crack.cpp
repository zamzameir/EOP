#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <ctime>
using namespace std;
void view (void);
void lock (void);
void unlock (void);
void escape(void);
char MainActivity[256]={"Application.exe"};
char Serial[256]={"22TKDF8XX6YG69F9M66DRK7C8"};
void gotoxy (int x, int y){
system("color f0");
COORD centre;
centre.X = x;
centre.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), centre);
return;
}
void load (char buffer[]){
system("color f0");
int row,col,r,c,q;  
gotoxy(36,14);
printf("%s",(buffer));
gotoxy(30,15);  
for(r=1;r<=50;r++){
for(q=0;q<=500000;q++);
printf("%c",177);
}
return;
}
void view (void){
system("mode con: cols=50 lines=6");
FILE *lock;
char c,escape;
/*COORD handleBar = {100,9999};
SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), handleBar);*/
do 
 {
    system("cls");
    lock=fopen("data/lock.dat","r");   
    if(fscanf(lock,"%c",&c)==EOF)
   {
     cout << " Bypass patch not found";
   }
    do
   {
     putchar(c=getc(lock));
   }
     while(c!=EOF);
     fclose(lock);  
    escape = getch();  
    switch (escape) 
    {
       default : exit(1);
    }		
 } while (!EOF);
return;
}
void escape (void){
cout << "Invalid";
system("pause>nul");
exit(1);
}
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
void lock (void){
system("rm data/lock.dat");
system("rmdir data");
std::ofstream crack;
crack.open("data/lock.dat",std::ofstream::out|std::ofstream::trunc);
crack.close();
}
int main (void){
system("title Login Bypass");
system("mode con: cols=50 lines=6");
system("color f0");
char option [3][256]={"Sign in","Sign out","View patch"};
char patch [] = "";
char patch2 [] = "";
char patch3 [] = "";
char choice;
do{
system("cls");
cout << endl;
for (int i =0; i<3; i++){
cout << setw(2) << i+1 << " - " << option[i] << endl;
}
cout << "\n Make a choice > ";
choice = getch();
if(choice !='1' && choice !='2' && choice !='3' && choice !='x' && choice !='X'){
cout << "\a";
}
switch(choice){	
case '1' : unlock();system("cls");load(patch);break;
case '2' : lock();system("cls");load(patch2);break;
case '3' : view();system("cls");load(patch3);break;
case 'x' :
case 'X' : exit(1);
}
}while(choice !='1' && choice !='2' && choice !='3' && choice !='x' && choice !='X');
return 0;
}

