//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i,count=0;
	printf("enter the your name ");
	fgets(str,20,stdin);
	for(i=0;str[i]!='\0';i++)
	{
	if('a'==str[i] || 'e'==str[i] || 'i'==str[i] || 'o'==str[i] || 'u'==str[i])
		count=count+1;
	}
		printf("%d",count);
}
