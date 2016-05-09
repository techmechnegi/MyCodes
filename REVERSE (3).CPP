#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
{
	clrscr();
	char ch[80];
	int l,i,j,k;
	puts("\nEnter the string:");
	gets(ch);
	l=strlen(ch);
		for(i=0;i<=l;i++)
	{

		if(ch[i]==' ' || ch[i]=='\0')
	     {
		j=i;
		j--;
			while(ch[j]!=' ' && j>=0)
		      {
			cout<<ch[j];
			j--;
		      }
		cout<<" ";
	     }
	}
	getch();
	}