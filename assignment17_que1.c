//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i;
	printf("enter the your name ");
	fgets(str,20,stdin);
	for(i=0;str[i]!='\0';i++);
	printf("lenght %d",i);
	return 0;
}
