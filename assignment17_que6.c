//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i,tmp,len;
	printf("enter  any string:-");
	fgets(str,20,stdin);
	len=strlen(str);
	for(i=0;len/2;i++)
	{
		tmp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=tmp;
	}
		printf("%s",str[i]);
	}

