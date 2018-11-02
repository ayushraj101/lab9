//14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
#include<iostream>
#include<cstring>
using namespace std;
int main()
	{
		char name[]= "Ayush Raj";
		for (int i=0; i<9; i++ )
			{
				cout<<name[i]<<",";
			}
		cout<< endl;
		for(char * poi=name; poi< name + 9; poi ++)
			{
				cout<< *poi<< ",";
			} 
		cout<< endl;
		return 0;
	}
