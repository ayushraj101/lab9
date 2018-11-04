//15. We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. 
#include<iostream>
#include<cstring>
using namespace std;

int main ()
	{
		cout<< "What is the length of the string you want :";
		int n;
		cin >>n ;
		char arr[n], *p;
		cout<< "Enter a string (maximuim " <<n<< " entries)"<<endl;
		cin>>arr;
		for(p=arr; p < arr+n; p++)
			{
				for(char* j=p;j<arr+n;j++ )
					{
						cout<< *j;
					}
				cout<<endl;
			}
		return 0;
	}
