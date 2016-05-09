#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int n,a[20],b[20][20],r,c;
 cout<<"\nEnter the no of terms: ";
 cin>>n;
 cout<<"\nEnter the terms";
 for(int i=0;i<n;i++)
 {
 cout<<"\na["<<i<<"]:";
 cin>>a[i];
 }
 cout<<"\nMatrix is\n";
 for(i=0;i<n;i++)
 cout<<a[i];
 cout<<"\n2-D matrix is\n";
 for(i=n;i>0;i--)
 {cout<<"\n";
 for(int j=0;j<n;j++)
  {if(i>j)
   {b[i][j]=a[j];
   cout<<b[i][j];
   }
   else
   {b[i][j]=0;
    cout<<b[i][j];
    }
  }
 }
 getch();
 }
