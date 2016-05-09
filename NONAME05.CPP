#include<iostream.h>
#include<conio.h>

/*int Factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	else
	{
		cout<<f<<endl;
		return f*Factorial(f-1);
	}
}      */

void factorial(int f,int store)
{
	if(f!=0)
	{
		store=store*f;
		f--;
		factorial(f,store);
	}
		cout<<store;
}


void main()
{
	clrscr();
	factorial(5,1);
	getch();
}
