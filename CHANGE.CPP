#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int a[20],b[20],n;
 cout<<"\nHow many term you want enter:";
 cin>>n;
 for(int i=0;i<n;i++)
 {cout<<"\nEnter the number["<<i+1<<"]:";
  cin>>a[i];
 }
 cout<<"\nArray is :";
 for(i=0;i<n;i++)
 cout<<a[i];
 cout<<"\nChanged array is: ";
 for(i=n/2;i<n;i++)
 {cout<<a[i];
 }
 for(i=0;i<n/2;i++)
 {cout<<a[i];
 }
 getch();
 }