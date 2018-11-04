//16. Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. 
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main ()
	{
		cout<< "What is the length of the string you want :";
		int n;
		cin >>n ;
		char arr[n], *p;
		cout<< "Enter a string (maximuim " <<n<< " entries)"<<endl;
		cin>>arr;
		for(p=arr+n-1; p >= arr; p--)
			{
				for(char* j=p;j>=p;j++ )
					{
						cout<< *j;
						if (j==arr+n-1) 
						break ;
					}
				cout<<endl;
			}
		return 0;
	}
