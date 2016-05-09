#include<iostream.h>
#include<conio.h>
#define maxsize 50;
void quick_sort(int a[],int p, int r);
int divide(int a[]);
void main()
{
	int a[maxsize], n;
	cout<<"\nEnter the no of terms:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	getch();
}

void quick_sort(int a[],int p,int r)
{

}