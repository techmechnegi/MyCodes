#include<iostream.h>
#include<conio.h>
	int fact(int x)
{
	if(x==1)
    {
	return x;
    }
	else
    {
	x=x*fact(x-1);
	return x;
    }
}


	void main()
{
	clrscr();
	int a,b;
	cout<<"Enter the value to calculate its factorial:";
	cin>>a;
	b=fact(a);
	cout<<"Factorial of "<<a<<"is:"<<b;
	getch();
}
