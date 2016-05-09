#include<iostream.h>
#include<conio.h>
	void main()
{
	clrscr();
	int a,b,fact=1;
	cout<<"Enter the value to calculate its factorial:";
	cin>>a;
	b=a;
	while(b>=1)
   {
		fact=fact*b;
		b--;
   }
	cout<<"Factorial of "<<a<<"is:"<<fact;
	getch();
}
