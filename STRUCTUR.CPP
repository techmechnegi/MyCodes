#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
 struct  student
{int rollno;
 char name[25];
 int marks[5];
}stud[20];
 void main()
{
 clrscr();
 int n;
 cout<<"\nEnter number of students:";
 cin>>n;
 for(int i=0;i<n;i++)
{cout<<"\nEnter details of "<<i+1<<" student :-";
 cout<<"\nEnter rollno : ";
 cin>>stud[i].rollno;
 cout<<"\nEnter Name : ";
 gets(stud[i].name);
 for(int j=0;j<5;j++)
{ cout<<"\Enter marks in subject "<<j+1<<" :";
 cin>>stud[i].marks[j];
}
}

 int r,flag=0,total=0;
 char grade;
 cout<<"\nEnter roll no to be searched : ";
 cin>>r;
 for(i=0;i<n;i++)
 {if(stud[i].rollno==r)
{ cout<<"\nRoll no : "<<stud[i].rollno;
 cout<<"\nName : ";
 puts(stud[i].name);
 for(int j=0;j<5;j++)
{cout<<"\nMarks in subject "<<j+1<<" : "<<stud[i].marks[j];
 total+=stud[i].marks[j]; }
 {if((total/5)>=90)
   grade='A';
 else if((total/5)>=80)
   grade='B';
 else if((total/5)>=70)
   grade='C';
 else if((total/5)>=60)
   grade='D';
 else if((total/5)>=50)
   grade='E';
 else if((total/5)>=40)
   grade='F';
 else if((total/5)>=0)
   grade='G';

 }
 cout<<"\nGrade : "<<grade ;
 flag =1;
 break;
 }}
 if(flag==0)
 cout<<"\nNot in the list";
 getch();
 }

