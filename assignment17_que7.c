//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<string.h>
#include<stdio.h>
int main()
{
	char str[20];
	int count1=0,count2=0,count3=-1,i;
	printf("enter your email id ");
	fgets(str,20,stdin);
	for(i=0;str[i];i++)
	{
	if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
			count1 ++;
	else if(str[i]>='0' && str[i]<='9')
		count2 ++;
	else
		count3 ++;
	}
	printf("number of alphabets %d",count1);
	printf("number of digit %d",count2);
	printf("number of special character %d",count3);
	return 0;
}
