#include<iostream.h>
#include<conio.h>
	void main()
{
    clrscr();
    int n,j,i,y[20][20];
    cout<<"\nEnter the no of values to enter:";
    cin>>n;
    cout<<"\nEnter the values for y:\n";
	for(i=0;i<n;i++)
    {
	cin>>y[i][0];
    }


	for(j=1;j<n;j++)
    {
		for(i=0;i<(n-1);i++)
	{
		y[i][j]=y[i+1][j-1]-y[i][j-1];
	}
    }

	cout<<"\nThe forward difference table is:\n";
	for(i=0;i<n;i++)
    {
		for(j=0;j<(n-i);j++)
	{
		cout<<y[i][j]<<" ";
	}
		cout<<"\n";
    }
	getch();

}