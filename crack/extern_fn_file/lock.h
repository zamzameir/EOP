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

extern int main ();

void lock (void){
system("rm data/lock.dat");
system("rmdir data");
std::ofstream crack;
crack.open("data/lock.dat",std::ofstream::out|std::ofstream::trunc);
crack.close();
}
