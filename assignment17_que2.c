//2. Write a program to count the occurrence of a given character in a given string.
//output:- vaibhaw , a=2;
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i,occurr ;
	int count=0;
	printf("enter your name ");
	fgets(str,20,stdin);
	occurr='a';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==occurr)
			count++;
		
	}
	printf("occurrance of your name is %d",count);
}
