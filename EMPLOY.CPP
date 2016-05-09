#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
  class employ
{int empid;
 char name[25];
 char desig[30];
 float basic, DA ,HRA ,salary ;
 public:
 void calc();
 void enter();
 int returnid()
 {return empid;}
 void display();
}A[20];
 void employ :: calc()
{salary=basic+DA+HRA;}
 void employ :: enter()
{
 cout<<"\n\nEnter employee ID : ";
 cin>>empid;
 cout<<"\nEnter name : ";
 gets(name);
 cout<<"\nEnter designation : ";
 gets(desig);
 cout<<"\nEnter basic, DA, HRA:";
 cin>>basic>>DA>>HRA;
 calc();}



 void employ :: display()
{cout<<"\nEmp ID :"<<empid;
 cout<<"\nName : ";
 puts(name);
 cout<<"Designation :";
 puts(desig);
 cout<<"Basic: Rs "<<basic<<"\nDA: Rs "<<DA<<"\nHRA: Rs "<<HRA;
 cout<<"\nSalary: Rs "<<salary;  }


 void main()
 {int i, n;
 clrscr();
 cout<<"\nEnter total no of employees : ";
 cin>>n;
 for(i=0;i<n;i++)
 {cout<<"\nEnter information of employee "<<i+1<<" :";
 A[i].enter();}

 int id;
 cout<<"\nEnter employee ID to be searched:";
 cin>>id;
 for(i=0; i<n;i++)
{if(A[i].returnid()==id)
 { A[i].display();
  break;
 }}


{cout<<"\nID is not in the record";
 getch();
  }


 getch();
}