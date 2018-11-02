//11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
#include<iostream>
using namespace std;
int main()
	{
		int integer;
		float decimal;
		double large;
		bool condition;
		char character;
		
		int *intpoi;
		float *decipoi;
		double *larpoi;
		bool *condipoi;
		char *charpoi;
		
		cout<<"The size of integer is "<<sizeof(integer)<<" bites"<<endl;
		cout<<"The size of float is "<<sizeof(decimal)<<" bites"<<endl;
		cout<<"The size of double is "<<sizeof(large)<<" bites"<<endl;
		cout<<"The size of bool is "<<sizeof(condition)<<" bites"<<endl;
		cout<<"The size of char is "<<sizeof(character)<<" bites"<<endl;
		cout<<"The size of integer pointer is "<<sizeof(intpoi)<<" bites"<<endl;
		cout<<"The size of float pointer is "<<sizeof(decipoi)<<" bites"<<endl;
		cout<<"The size of double pointer is "<<sizeof(larpoi)<<" bites"<<endl;
		cout<<"The size of bool pointer is "<<sizeof(condipoi)<<" bites"<<endl;
		cout<<"The size of char pointer is "<<sizeof(charpoi)<<" bites"<<endl;
		return 0;
		
	}
