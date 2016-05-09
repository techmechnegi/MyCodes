#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>

void root(float,float,float);
void main()
{clrscr();
 float A,B,C;
 cout<<"\nEnter the value of a,b,c(ax^2+bx+c):";
 cin>>A>>B>>C;
 root(A,B,C);
 getch();
}
void root(float a,float b,float c)
{
   float D,R,S;
   D=(b*b)-(4*a*c);
   if(D>0)
   {
    R=((-1)*b)/(2*a);
    S=sqrt(D)/(2*a);
    cout<<"\nRoots of the equation is:"<<"\n"<<R<<"+"<<setprecision(2)<<S;
    cout<<"\n"<<R<<"-"<<setprecision(2)<<S;
   }
  else
   if(D==0)
  {
    R=((-1)*b)/(2*a);
    cout<<"\nRoots of the equation is:"<<"\n"<<R;
    cout<<"\n"<<R;
  }
  else
   if (D<0)
   {
    R=((-1)*b)/(2*a);
    S=sqrt((-1*D));
    cout<<"\nRoots of the equation is:"<<"\n"<<R<<"+"<<setprecision(2)<<S<<"i";
    cout<<"\n"<<R<<"-"<<setprecision(2)<<S<<"i";
   }
}



