#include <iostream>
#include <string>
#include <conio.h>
#include <ctype.h>

extern int main ();
extern void load (char[]);

using namespace std;
int login(void) 
{ 
  system("mode con: cols=87 lines=20");
  system("title ");
  char userChar[100], choice='Y', input, passChar[100];
  
  char message1 [] = "\t    -------------"; 
  char message2 [] = "\t    PLEASE LOG IN";
  char message3 [] = "\t    -------------";
  
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
   						  //lock=fopen("data/lock.dat","a+");
   						  //fprintf(lock,"22TKDF8XX6YG69F9M66DRK7C8"); /*<-- Admin Hashkey -->*/
                          //fprintf(lock," ");
						  system ("cls");
                          return 0;
                        }
				
                        else
                        {
                          cout << "\a";
                          cout << "\n\n ID & PASSWORD DOES NOT MATCH";
                          load(out);
                        }
                      }
			
						else if (strcmp(userChar, "Izzat Ameir"))
						{
							if (!strcmp(passChar, "mirmira"))
							{
								cout << "\a";
		   						cout << "\n\n WRONG ID. TRY AGAIN";
           						load(out);
							}
				
							else
							{
								cout << "\a";
		   						cout << "\n\n THIS ID DOES NOT EXIST. TRY AGAIN";
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
   					//lock=fopen("data/lock.dat","a+");
   					//fprintf(lock,"22TKDF8XX6YG69F9M66DRK7C8"); /*<-- Admin Hashkey -->*/
           			//fprintf(lock," ");
					system ("cls");
           			return 0;
				}
				
				else
				{
					cout << "\a";
		   			cout << "\n\n ID & PASSWORD DOES NOT MATCH";
      	   			load(abort);
				}
			}
			
			else if (strcmp(userChar, "Izzat Ameir"))
			{
				if (!strcmp(passChar, "mirmira"))
				{
					cout << "\a";
		   			cout << "\n\n WRONG ID. TRY AGAIN";
           			load(abort);
				}
				
				else
				{
					cout << "\a";
		   			cout << "\n\n THIS ID DOES NOT EXIST. TRY AGAIN";
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
