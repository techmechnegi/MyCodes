#include<iostream.h>
#include<conio.h>
#include<math.h>

	float fun(float x)
{
	float y;
	y=(x*x*x)-(2*x)-5;
	return y;
}
	void main()
{
	clrscr();
	float x1,x2,x3,y1,y2,y3;
	int flag=0;
	for(int i=0;i<10;i++)
  {
	y1=fun(i);
	y2=fun(i+1);


	if(y1<=0 && y2>=0)
     {
	x1=i;
	x2=i+1;
	cout<<"Roots lie b/w "<<i<<" and "<<i+1;
	flag=1;
	break;
     }
	else
	if(y1>=0 && y2<=0)
     {
	x1=i;
	x2=i+1;
	cout<<"Roots lie b/w "<<i<<" and "<<i+1;
	flag=2;
	break;

     }
  }
      do
  {
	x3=x1-(((x2-x1)/(y2-y1))*y1);
	y3=fun(x3);
	if(y3<=0)
    {
	if(flag==1)
      {
	x1=x3;
      }
	else
	if(flag==2)
      {
	x2=x3;
      }
    }
	else
	if(y3>=0)
    {
	if(flag==1)
      {
	x2=x3;
      }
	else
	if(flag==2)
      {
	x1=x3;
      }
    }


  }while(fabs(fun(x2))>0.001);

  cout<<"root is "<<x2;
  getch();

}