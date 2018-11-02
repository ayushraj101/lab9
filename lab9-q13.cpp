//13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

#include<iostream>
using namespace std;
int main() 
	{
		int arr[10]= {34,6,64,78,3,39,6,52,6,34};
		for(int i = 0; i<10; i++)
			{
				cout<<arr[i]<<',';
			}
		cout<< endl;
		for (int* poi= arr; poi<arr+10; poi++)
			{
				cout << *poi<<',';
			}
		cout<< endl;
		return 0;
	}
