
#include<iostream.h>
#include<conio.h>
	void main()
{
	clrscr();
	int n,i,j;
	cout<<"Enter the no of rows in odd:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=(n/2))
		{
			for(j=0;j<=((n/2)+i);j++)
			{
				if((i+j)<(n/2))
				{
				cout<<" ";
				}
				else
				cout<<"*";
			 }
		}
		else
		{
			for(j=0;j<(((3*n)/2)-i);j++)
			{
				if((i-j)>=((n/2)+1))
				cout<<" ";
				else
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	getch();
}