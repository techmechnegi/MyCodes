#include<iostream.h>
#include<conio.h>
#include<time.h>
void main()
{

	clrscr();
	int j,temp,a[6];
	double calculated_time;
	clock_t start,end;
	start=clock();
	cout<<"Enter the elements: ";
	for(int i=0;i<5;i++)
	{
	 cin>>a[i];
	}
	for(i=1;i<5;i++)
	{
	 j=i-1;
	 temp=a[i];
	 while(j>=0 && temp<a[j])
	 {
		a[j+1]=a[j];
		j--;
	 }
	 a[j+1]=temp;
	}
	for(int k=0;k<5;k++)
	{
	 cout<<a[k]<<" ";
	}
	end=clock();
	calculated_time=(double)((end-start)/CLOCKS_PER_SEC);
	cout<<"Time complexity: "<<calyculated_time;
	getch();
}