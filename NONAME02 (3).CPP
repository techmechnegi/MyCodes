#include<iostream.h>
#include<conio.h>

	int fibo(int a)
{
	if(a==1)
	return 0;
     else
	if(a==2)
	return 1;
     else
	return fibo(a-1)+fibo(a-2);
}

	void main()
{
	clrscr();
	int n;
	cout<<"Enter the no of terms:";
	cin>>n;
	for(int i=1;i<=n;i++)
   {
	cout<<fibo(i)<<" ";
   }
	getch();
}