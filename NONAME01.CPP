#include<conio.h>
#include<fstream.h>
#include<process.h>
void main()
{clrscr();
 char a[20];
 cout<<"\n Enter your name:";
 cin>>a;
 ofstream ofile("name.DAT");
 if(!ofile)
 {cout<<"\n File cannot be created";
 exit(1);
 }
 ofile<<a;
 ofile.close();
 ifstream ifile("name.DAT");
 if(!ifile)
 {cout<<"\n File cannot be opened";
 exit(0);
 }
 ifile>>a;
 cout<<a;
 ifile.close();
 getch();
 }
