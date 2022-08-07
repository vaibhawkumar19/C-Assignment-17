//5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i;
	printf("enter your name:- ");
	fgets(str,20,stdin);
	 for(i=0;str[i]!='\0';i++)
	 {
	 	if(str[i]>=65 && str[i]<=90)
	 	{
	 		str[i]=str[i]+32;
			 printf("%c",str[i]);	
		}
	 }
}

