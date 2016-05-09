#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int n;
 int flag=0,count=0;
 for(int j=39;j<91;j++)
 {
 for(int i=2;i<j;i++)
 {
    if(j%i==0)
    {
	flag=1;
    }
 }
 if(flag==0)
 count++;
 flag=0;
 }
 cout<<count;

 getch();
}