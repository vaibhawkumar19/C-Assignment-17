//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,j;
	char str[20],tmp;
	printf("enter your name ");
	fgets(str,20,stdin);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1;j++)
		{
			if(str[j]>str[j+1])
			{
				tmp=str[j];
				str[j]=str[j+1];
				str[j+1]=tmp;
			}
			
		}
	}
	printf("after shorting\n");
			printf("%s",str);
}
	

