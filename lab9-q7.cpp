//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
#include<iostream>
using namespace std;
double* function(double arr[])
	{
		double * poi = arr;
		int larger=0; 
		while (poi < &arr[10])
			{ 
				(++poi)-1; 
				if(*poi<*++poi)
					*poi = *++poi;
				else *poi = *poi;
			}
		if (arr[0])
		return NULL;
		else return poi;
	}
			
int main()
	{
		double arr[10]={84,9,76,44,7,34,86,33,30,898};
		cout<< function (arr)<<endl;
		return 0;
	}
		 		
				
				

