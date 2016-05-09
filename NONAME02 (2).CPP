#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<ctype.h>
#include<stdio.h>
void main()
{clrscr();

 char ch[20];
 cout<<"\nenter: ";
 gets(ch);
 ofstream ofile;
 ofile.open("NAME",ios::in);
 ofile.write((char*)&ch,sizeof(ch));
 { ch;
 }
 ofile.write((char*)&ch,sizeof(ch));
 ofile.close();
 ifstream ifile;

 ifile.open("NAME",ios::in);

{ cout<<ch;
  ifile.read((char*)&ch,sizeof(ch));
 }
 ifile.close();
 getch();
 }

