#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int path[5][5],a[5][5],t[5];
	int i,j,min,p,stp,edp,index,st=1,ed=5;
	cout<<"Enter cost method: ";
	for(i=0;i<5;i++)
	{

	for(j=0;j<5;j++)
		{
		 cin>>a[i][j];
		}
	}
	cout<<"Enter path";
	cin>>p;
	cout<<"Enter the possible paths:";
	for(i=0;i<5;i++)
	{
	 for(j=0;j<5;j++)
	 {
	  cin>>path[i][j];
	 }
	}
	for(i=1;i<=p;i++)
	{
	 t[i]=0;
	 stp=st;
	 for(j=1;j<=5;j++)
	 {
	  edp=path[i][j+1];
	  t[i]=t[i]+a[stp][edp];
	  if(edp==ed)
	break;
	else
	stp=st;

	 }
	}
	  min=t[st];
	  index=st;
	  for(i=1;i<=p;i++)
	  {
	   if(min>t[i])
	   {
	     min=t[i];
	     index=i;
	   }
	  }
	  cout<<"Minimum cost"<<min;
	  cout<<"Minimum cost path";
	  for(i=1;i<=5;i++)
	  {
	   cout<<"-->"<<path[index][i];
	   if(path[index][i]==ed)
	   {
	   break;
	   }
	  }

		 getch();
}