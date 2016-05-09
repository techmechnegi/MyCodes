#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
void comp(float,float,float);
void main()
{clrscr();
 float p,r,t;
 cout<<"\n Enter the principal amount:";
 cin>>p;
 cout<<"\n Enter the rate per annum:";
 cin>>r;
 cout<<"\n Enter the time period:";
 cin>>t;
 comp(p,r,t);
 getch();
}
void comp(float P,float R,float T)
{float a;
 a=P*pow((1+(R/100)),T);
 cout<<"\n Compound intrest is :"<<setprecision(2)<<a-P;
 }



