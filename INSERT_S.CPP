#include<iostream.h>
#include<conio.h>
void insert(int a[],int n);
void main()
{
	clrscr();
	int a[20],n;
	cout<<"\nEnter the no of terms";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insert(a,n);
	getch();
}

void insert(int a[],int n)
{	int j,temp;
	for(int i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(a[j]>temp && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		for(int g=0;g<n;g++)
		cout<<a[g]<<' ';
		cout<<"\n";
	}

	cout<<"Sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
}