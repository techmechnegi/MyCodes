#include<iostream.h>
#include<conio.h>
#include<process.h>

class cqueue
{
	int a[5];
	int rear,front;
	public:
	void insert();
	void del();
	void display();
	cqueue()
	{
		front=rear=-1;
	}
};

void cqueue::insert()
{
	int c;
	cout<<"\nEnter the no to insert:";
	cin>>c;
	if(front==0 && rear==4)
	{
		cout<<"Overflow!";
		exit(0);
	}
	if(rear==-1)
	rear=front=0;
	else
	if(rear==4)
	rear=0;
	else
	rear=rear+1;
	a[rear]=c;
}
void cqueue::del()
{
	if(front==-1)
	{
		cout<<"Underflow!";
		exit(0);
	}
	cout<<"\nDeleted element is:"<<a[front];
	if(front==4)
	front=0;
	else
	if(front==rear)
	front=rear=-1;
	else
	front++;
}
void cqueue::display()
{
	if(front<=rear)
	{
		for(int i=front;i<=rear;i++)
		cout<<a[i]<<" ";
	}
	else
	{
		for(int i=front;i<5;i++)
		cout<<a[i]<<" ";
		for(i=0;i<=rear;i++)
		cout<<a[i]<<" ";
	}
}

void main()
{
	clrscr();
	cqueue q;
	int ch;
	do
	{
		cout<<"\n1.Insert\n2.Delete\n3.Display";
		cout<<"\nEnter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:q.insert();
				break;
			case 2:q.del();
				break;
			case 3:q.display();
				break;
			default:cout<<"\nWrong choice!";
				exit(0);
		}
	}while(1);
}