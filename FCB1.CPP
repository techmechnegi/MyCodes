#include<iostream.h>
#include<conio.h>
#include<stdio.h>
 void main()

{	clrscr();
	ofstream ofile;
	ofile.open("FCB",ios::app|ios::binary );
	char s[13][20]={"FC BARCELONA","\n10 Messi","7 Villa","8 Iniesta","17 Pedro", "6 Xavi" ,"5 Puyol", "3 Pique", "1 Valdes","4 Fabregas","15 Keita","22 Abidal",'\0'};
	for(int i=0;i<13;i++)
 {        cout<<"\n";
	   for(int j=0;j<20;j++)
	    ofile.write((char*)&s,sizeof(s));
  }
	ofile.close();
}
