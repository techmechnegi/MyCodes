#include<conio.h>
#include<iostream.h>
	void main()
{
	clrscr();
	int count=0,i=0;
	char a[20];
	cout<<"Enter a string:";
	cin>>a;
	while(a[i]!='\0')
     {
	count++;
	i++;
     }
	for(i=count-1;i>=0;i--)
     {
	cout<<a[i];
     }
	getch();
}