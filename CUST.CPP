#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct directory
{char Name[40];
 char Address[100];
 char Phonenumber[20];
 int CustomerID;
}cust[20];

void main()
{clrscr();
int n,x,flag=0;
cout<<"\n Enter the no of Customer:";
cin>>n;
for(int i=0;i<n;i++)
{
 cout<<"\n Enter the details of Customer["<<i+1<<"]";
 cout<<"\n Enter the Customer ID:";
 cin>>cust[i].CustomerID;
 cout<<"\n Enter the name of the Customer:";
 gets (cust[i].Name);
 cout<<"\n Enter the Customer Phone Number:";
 cin>>cust[i].Phonenumber;
 cout<<"\n Enter Customer Address:";
 gets (cust[i].Address);
}
cout<<"\n Enter the CustomerID to be searched:";
cin>>x;
for(i=0;i<n;i++)
{if(x==cust[i].CustomerID)
  {flag=1;
   cout<<"\nCustomer ID:"<<cust[i].CustomerID;
   cout<<"\nName of the Customer:"<<cust[i].Name;
   cout<<"\nCustomer Phone number:"<<cust[i].Phonenumber;
   cout<<"\nCustomer Address:"<<cust[i].Address;
}}
 if(flag==0)
 cout<<"\n No records found";


getch();
}