//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  
#include<iostream>
using namespace std;
int countEven(int a[], int b)
	{
		int * i=a;
		int count=0;
		while (i<&a[10])
			{
				if (*i%2==0)
					{count++;
				}
				i=i+1;
			}	
		return count;
	}
	
int main()
	{
		int a[10]={4,5,454,65,65,65,66,66,62,64}, b;
		cout<<countEven(a, b)<<endl; 
		return 0;
	}
