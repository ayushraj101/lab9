/*use the function of cstring
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr*/

#include<iostream>
#include<cstring>
using namespace std;

int copy(char str1[], char str2[])
	{
		str2=str1;
		cout<< "The 1st string is : "<<str1<< endl;
		cout<<"Now 2nd string is also : "<< str2<<endl;
		return 0;
	}
	
int attach(char str1[], char str2[])
	{
		int n=0, a=0;
		for (char *p=str1; *p!='\0'; p++)
			{
				n++;
			}
		for (char* p=str2; *p!='\0'; ++p )
			{
				str1[n]=str2[a];
				a++;
				n++;
			}
		cout<<"Now the 1st string is : "<< str1;
		return 0;
	}

int myStrLen(char str1[],char str2[]) 
	{
		int counter1=0, counter2=0;
		
		/*for(char * poi=arr; *poi != '\0' ; poi++)
			{
				counter = counter + 1;
				cout<< counter<<endl; 
			}*/
		char * poi1=str1;
		while (*poi1 != '\0')
			{
				counter1 = counter1 + 1;
				poi1++;
			}
		char * poi2=str2;
		while (*poi2 != '\0')
			{
				counter2 = counter2 + 1;
				poi2++;
			}
		
		cout<<"The size of 1st string is  :"<< counter1<<endl;
		cout<<"The size of 2nd string is :" <<counter2<<endl;
	
		return 0;
	}
	
int myStrcmp(char str1[], char str2[])
	{
		int counter1=0, counter2=0;
		char * poi1=str1;
		while (*poi1 != '\0')
			{
				counter1 = counter1 + 1;
				poi1++;
			}
		char * poi2=str2;
		while (*poi2 != '\0')
			{
				counter2 = counter2 + 1;
				poi2++;
			}
		if (counter1 > counter2 )
		cout<< 1;
		else if (counter1 < counter2)
		cout<< "-1"<<endl;
		else cout<< 0<<endl;
		return 0;
	}

int MyStrchr(char str[], char x)
	{
		int n=0,  counter = 0;
		for (char*p = str; *p!='\0'; p++)
			{
				counter++;
				if (*p==x)
				{ n= counter;
				  cout <<"It is present at "<< n<<endl;
				}
			cout<<counter;
			}
		return 0;
	}
	


int main()
	{
		/*char str1[]= "copied", str2[]="useless";
		strcpy(str2, str1);
		cout<<"strcpy : it copys the array"<< endl;
		cout<< str2<< " " << str1<<endl;
		cout<<endl;
		
		char att1[]="attachment ", att2[]="complete";
		strcat (att1, att2);
		cout<<"strcat attaches two arrays "<<endl;
		cout<< att1<<endl;
	MyStrchr	cout<< att2<<endl;
		cout<<endl;
		
		cout<<"strlen displayes size of string"<<endl;
		char size1[]="baiusia", size2[]="sdfjbisudfusyv";
		cout<<"size of the array1 is "<<strlen(size1)<<endl<<"size of the array2 is "<<strlen(size2)<<endl;
		cout<<endl;
		
		char axx[] = "somthing" , ayy[]="somthing somthing";
		cout<< "the strcmp function returns a negative, zero, or positive integer depending on whether the object pointed to by axx(1st srting) is less than, equal to, or greater than the object pointed to by ayy."<<endl;
		cout<< strcmp(axx, ayy )<<endl;
		cout<<endl;
		
		cout<<"Strchr is used for finding occurrence of a character in a string"<<endl;
		char str[]="I am Raj. Ayush Raj";
		cout<< strchr(str, 'a')<<endl;*/
		
		char str1[1000] ;
		char str2[1000] ;
		int x;
		cout << "Enter the 1st string : "<<endl;
		cin >> str1;
		cout<< "Enter the 2nd string :"<<endl;
		cin>>  str2;
		copy(str1,str2);
		attach(str1,str2);
		myStrLen(str1,str2);
		myStrcmp(str1,str2);
		cout<<"Enter the char you wnnna check the presence in the string :";
		cin >>x;
		cout<< "do you wanna know where are any char in the hidden string ?"<< endl;
		char arr [] = "aaaaaturdaa";
		MyStrchr(arr, x);
		
		
		
		
		
		
		
		
		
		return 0;
	}
