#include<iostream.h>
#include<conio.h>
#include<process.h>

	class array
{
	int size;
	int a[5];

	public:
	void read();
	void insert(int v,int loc);
	void del(int loc);
	void display();
	void search(int v);
	array()
      {
	 size=0;
      }

};

	void array::search(int v)
{
	int flag=0;
	for(int i=0;i<5;i++)
     {
	if(a[i]==v)
       {
		cout<<"Element found at location"<<i+1;
		flag=1;
       }
     }
	if(flag==0)
       {
		cout<<"Element not found!!";
       }

}

	void array::read()
{
	for(int i=0;i<5;i++)
     {
	cin>>a[i];
	size=i+1;
     }
}

	void array::insert(int v,int loc)
{
	if(size==5)
     {
	cout<<"Overflow!!";
	exit(1);
     }
	else
     {
		for(int i=size;i>=loc;i--)
	    {
		a[i]=a[i-1];
	    }
		size=size+1;
		a[loc]=v;
     }
}

	void array::del(int loc)
{
	if(size==0)
    {
	cout<<"Underflow!!";
    }
	else
    {
		for(int i=loc-1;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
		size=size-1;
    }
}

	void array::display()
{

	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";

}

	void main()

{
	array ar;
	int p,q,m;
	menu:
	clrscr();
	cout<<"\nOperations in an array:\n\n1.Read\n2.Insert\n3.Delete\n4.Display\n5.Search";
	cout<<"\nEnter the choice:";
	cin>>m;

	switch(m)
    {
	case 1:ar.read();
	       goto menu;
	case 2:cout<<"Enter the value and location:";
	       cin>>p>>q;
	       ar.insert(p,q);
	       goto menu;
	case 3:cout<<"Enter the location:";
	       cin>>q;
	       ar.del(q);
	       goto menu;
	case 4:ar.display();
	       goto menu;
	case 5:
		cout<<"Enter the value to be search:";
		cin>>p;
		ar.search(p);
		goto menu;
	default:cout<<"Wrong choice!!";
	       exit(1);
     }

	getch();
}