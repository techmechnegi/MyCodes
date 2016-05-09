#include<iostream.h>
#include<conio.h>
	void main()
{
	int a,fact=1;
	cout<<"Enter the value to calculate its factorial";
	cin>>a;
	while(a>=1)
   {
		fact=fact*a;
		a--;
   }
	cout<<"Factorial of "<<a<<"is:"<<fact;
	getch();
}
