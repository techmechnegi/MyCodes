#include<iostream.h>
#include<conio.h>
	void main()
{
	clrscr();
	int a=0,b=1,c,n;
	cout<<"Enter the no of terms:";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=3;i<=n;i++)
   {
	c=a+b;
	a=b;
	b=c;
	cout<<c<<" ";
   }
	getch();
}
