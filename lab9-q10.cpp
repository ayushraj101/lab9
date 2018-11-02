//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
#include<iostream>
#include<cstring>
using namespace std;
int main ()
	{
		char s[10] = "abcde";// def arr
		char * cprt;// def pointer
		cprt = s;
		while ( *cprt !='\0')//take pointer to end
			{
				cprt++;
			}
		//come back from last to start
		while (cprt != s )
			{
				--cprt;
				cout<<*cprt;
			}
		cout<<endl;
		
		return 0;
	}
