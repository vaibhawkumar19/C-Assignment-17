//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],i,ch ;
	int count=0;
	printf("enter your name ");
	fgets(str,20,stdin);
	printf("enter the characters for find frequency ");
	
	scanf("%c",&ch);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
			count++;
	}
	printf("frequency of %c=%d",ch,count);
}
/*int main()
{
	char str[100],i;
	int count[26],x;
	printf("enter your any sentence ");
	gets(str);
	 for(i=0;str[i]!='\0';i++)
	 {
	 	if(str[i]>='a' && str[i]<='z')
	 	{
	 		x=str[i]-'a';
	 		count[x] ++;
		 }
	 }
	 for (i = 0; i < 26; i++)
         printf("%c frequency %d times in the string.\n", i + 'a', count[x]);

   return 0;
}*/
