//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
#include<iostream>
using namespace std;
double* function(double arr[])
	{
		double * poi = arr;
		while (poi < arr+10)
			{ 
				(poi++)-1; 
				if(*poi<*(poi+1))
					*poi = *(poi+1);
				else *poi = *poi;
				cout<<*poi<<endl;
			}
		cout<< *poi<< endl;
		if (poi == 0)
		return NULL;
		else return poi;
	}
			
int main()
	{
		double arr[10]={84,9,76,44,7,34,86,33,30,898};
		cout<< function (arr)<<endl;
		return 0;
	}
