#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int n,a[20][20],r,c;
 cout<<"\nEnter the no of rows: ";
 cin>>r;
 cout<<"\nEnter the no of column: ";
 cin>>c;
 cout<<"\nEnter the Elements";
   for(int i=0;i<r;i++)
    { for(int j=0;j<c;j++)
       {cout<<"\na["<<i<<"]["<<j<<"]:";
	cin>>a[i][j];
       }
    }
 cout<<"\nEntered matrix is";
 for(i=0;i<r;i++)
    { cout<<"\n";
     for(int j=0;j<c;j++)
       {cout<<a[i][j];
       }
    }
 cout<<"\nChanged matrix is";
 for(i=0;i<r;i++)
    { cout<<"\n";
     for(int j=0;j<c;j++)
       {if(i<=j)
       cout<<a[i][j];
	else
	if(i>j)
	cout<<" ";
       }
    }
    getch();
    }

