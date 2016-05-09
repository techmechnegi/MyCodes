#include<iostream.h>
#include<conio.h>

void INSERT (int a[],int n,int insert);
void DELETE (int a[],int n,int Delete);
void main()
{
	clrscr();
	int a[20],n,insert,Delete,choice;
	cout<<"\nEnter the no of terms:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++)
     {  cout<<"\nElement["<<i<<"]:";
	cin>>a[i];
     }
	cout<<"\nArray is:";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n1.Insert\n2.Delete"<<endl;
	cin>>choice;
	if(choice==1)
     {
	 cout<<"\nEnter the no to insert:";
	 cin>>insert;
	 INSERT(a,n,insert);
     }
	else
	if(choice==2)
     {
	cout<<"\nEnter the no to delete:";
	cin>>Delete;
	DELETE(a,n,Delete);
     }

	getch();
}

void INSERT (int a[],int n,int insert)

{
	int pos=0,temp,temp1;
	while(a[pos]<insert)
	 pos++;
	 temp=a[pos];
	 a[pos]=insert;
	 for(int i=pos+1;i<n+1;i++)
	 { temp1=a[i];
	   a[i]=temp;
	   temp=temp1;
	 }
	 cout<<"\nArray after insertion is:";
	 for(i=0;i<n+1;i++)
	 cout<<a[i]<<" ";
}


void DELETE (int a[],int n,int Delete)
{}