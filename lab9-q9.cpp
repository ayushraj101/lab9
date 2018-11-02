//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
#include<cstring>
using namespace std;
string contains(char arr[], char x )
	{
		char * poi = arr;
		int counter= 0;
		string c= "true", d= "false";
		for(; *poi != '\0'; poi++)
			{
				counter ++;
				if (*poi == x)
				break;
			}
		if (counter == 9)
		return d;
		else return c;
	}
	
int main ()
	{
		char x;
		char arr[]= {"Ayush Raj"};
		cout << "Guess any letter of my name....."<<endl;
		cin >> x;
		cout<< contains(arr , x )<< endl;
		return 0;
		
	}
