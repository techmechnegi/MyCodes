#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
	void jmarkscalc();
	void viewchart();
	void main()
{
	char opt;
	menu:
	clrscr();
	cout<<"\n\n\n"<<setw(52)<<" JEE MAINS RANK PREDICTOR ";
	cout<<"\n\n\n\t1.Calculate Jee Mains Marks";
	cout<<"\n\n\t2.View Rank Predictor Chart";
	cout<<"\n\nEnter Your Choice:- ";
	cin>>opt;
	if(opt=='1')
     {
	jmarkscalc();
	goto menu;
     }
   else
	if(opt=='2')
     {
	viewchart();
	goto menu;
     }
   else
     {
	cout<<"\n\nWrong Choice Entered !!";
	getch();
	goto menu;
     }
}

	void jmarkscalc()
{
	clrscr();
	int jmarks,bmarks;
	float fpercent,fmarks;
	cout<<"\n\nEnter Your JEE MAINS Marks:- ";
	cin>>jmarks;
	cout<<"\n\nEnter Your 12th Board Marks:- ";
	cin>>bmarks;
	fpercent=((0.6*jmarks+0.4*bmarks)/416)*100;
	fmarks=(fpercent/100)*360;
	cout<<"\n\nYour Normalized Marks Of JEE MAINS:- "<<fmarks;
	getch();

}
	void viewchart()
{
}