#include<iostream.h>
#include<conio.h>

	int slargest(int a[10],int n)
{
	int l,s,flag=0;
	for(int i=0;i<n;i++)
    {
		if(flag==0)
	    {
			if(a[i]>a[i+1])
		{
			l=a[i];
			s=a[i+1];
		}
			else
		{
			l=a[i+1];
			s=a[i];
		}
		flag=1;
		i=1;
	    }
		else
			if(a[i]>l)
	    {
			s=l;
			l=a[i];
	    }
		else
			if(a[i]>s)
	    {
			s=a[i];
	    }
    }
	return s;
}

	void main()
{

	clrscr();
	int N,A[30],S;
	cout<<"\nEnter the no of elements:";
	cin>>N;
	cout<<"\nEnter the elements in an array:";

		for(int i=0;i<N;i++)
       {
		cin>>A[i];

       }
	S=slargest(A,N);
	cout<<"Second largest element is:"<<S;
	getch();
}