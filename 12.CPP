#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<graphics.h>
 void main()
{clrscr();
 char name[20],club[15],f[13][20],nation[15],dob[15];
 cout<<"\t\t\tWORLD'S BEST 3 FOOTBALL CLUBS\n\n";
 highvideo();
 {
 textcolor(8);
 cout<<"      ";
 cprintf("Real Madrid");
 cout<<"\t\t";
 cprintf("FC Barcelona");
 cout<<"\t\t";
 cprintf("Manchester United");
 }
 cout<<"\n\nEnter your name : ";
 gets(name);
 cout<<"\nEnter your nation : ";
 cin>>nation;
 cout<<"\nEnter your Date of birth(dd/mm/yy) : ";
 gets(dob);
 cout<<"\n\nChoose the team which you want to coach : ";
 gets(club);
 clrscr();
 cout<<"\nCongrats!!!\nYou have been chosen as the manager of "<<club;
 ifstream ifile;
{ if(strcmp(club,"Real Madrid")==0)
 {ifile.open("RM",ios::in|ios::binary);}
else if(strcmp(club,"FC Barcelona")==0)
 {ifile.open("FCB",ios::in|ios::binary);}
else if(strcmp(club,"Manchester United")==0)
 {ifile.open("MU",ios::in|ios::binary);  }
else
{exit(0);}
}

 ifile.read((char*)&f,sizeof(f));
   for(int i=0;i<13;i++)
   {cout<<"\n";
   for(int j=0;j<20;j++)
   cout<<f[i][j];
   }
   cout<<"\t\tManager : "<<name<<endl;
 ifile.close();
 getch();
 clrscr();
 cout<<"\n\t\t\t\tCONTRACT AGREEMENT\n\n";
 cout<<club<<" club is signing you for 1 year";
 cout<<

 getch();
 }