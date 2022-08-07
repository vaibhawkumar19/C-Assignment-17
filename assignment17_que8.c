//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int i;
	printf("enter your name ");
	fgets(str1,20,stdin);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("first string %s\n",str1);
	printf("copy to second strung %s",str2);
}
