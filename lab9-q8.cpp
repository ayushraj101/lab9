//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
#include<iostream>
using namespace std;
int myStrLen(char n[]) 
	{
		int counter=0;
		
		/*for(char * poi=arr; *poi != '\0' ; poi++)
			{
				counter = counter + 1;
				cout<< counter<<endl; 
			}*/
		char * poi=n;
		while (*poi != '\0')
			{
				counter = counter + 1;
				poi++;
			}
		return counter;
	}
	
	
int main() {
		char n[]= "Ayush";
		
		//char arr[]= {n};
		
		cout << myStrLen(n)<<endl;
		return 0;
	}
