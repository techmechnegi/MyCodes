#include<iostream.h>
#include<conio.h>
#include<process.h>
	class trans
{
	int a[20];
	public:

	void enter(int n);
	void display(int n);
	void insert(int v,int pos,int n);
	void del(int pos,int n);
	void search(int v,int n);
};

	void trans::enter(int n)
{
		for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
	void trans::insert(int v,int pos,int n)
{
		for(int i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
		a[pos-1]=v;

}

	void trans::del(int pos,int n)
{
		if(n==0)
	{
		cout<<"Underflow!!";
		exit(0);
	}

		for(int i=pos-1;i<(n-1);i++)
	{
		a[i]=a[i+1];
	}

}

	void trans::search(int v,int n)
{
	int flag=0;
		for(int i=0;i<n;i++)
	{
			if(v==a[i])
		{
			cout<<"Element "<<v<<" found at pos:"<<i+1;
			flag=1;
		}
	}
		if(flag==0)
		cout<<"Element not found";
}

	void trans::display(int n)
{
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

	void main()
{
	clrscr();
	int ch,n;
	int v,pos;
	trans t;
	cout<<"\nEnter the no of terms:";
	cin>>n;
	cout<<"\nEnter the elements in array\n";
	t.enter(n);
   do
   {
	cout<<"\nOperations in an arrray";
	cout<<"\n\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit";
	cout<<"\nEnter choice:";
	cin>>ch;


		switch(ch)
	{
		case 1: cout<<"\nEnter the value and position:";
			cin>>v>>pos;
			n=n+1;
			t.insert(v,pos,n);
			break;
		case 2: cout<<"\nEnter the position to delete the element:";
			cin>>pos;
			n=n-1;
			t.del(pos,n);
			break;
		case 3: cout<<"\nEnter the number to be searched:";
			cin>>v;
			t.search(v,n);
			break;
		case 4: cout<<"\nArray is:\n";
			t.display(n);
			break;
		case 5:	cout<<"Bye!!";
			exit(0);
		default: cout<<"Wrong choice!!";
	}

   }while(1);

}