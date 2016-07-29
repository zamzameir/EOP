#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <windows.h>
#include <stdio.h>

extern int main();

using namespace std;
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
