#include<fstream.h>
#include<conio.h>
#include<stdio.h>
 void main()
{clrscr();
 ofstream ofile;

 ofile.open("RM",ios::out|ios::binary );
 char s[13][20]={"\n\t\t\t\tREAL MADRID CF","\n\n\n\t\t\t\t1 Marcelo Vieira","\n\n\n\n\t4 Vinícius Júnior","\t\t18 Karim Benzema","\t3 Thibaut Courtois","\n\n\n\n22 Luka Modrić" ,"\t\t    20 Gareth Bale", "\t\t\t     14 Alonso", "\n\n\n\n\t7 Mariano","\t    8 Kaka","\t  10 Ozil","\n\n\n\n\t\t\t\t  9 Benzema",'\0'};
 for(int i=0;i<13;i++)
 {
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 ofile.write((char*)&s,sizeof(s));
 ofile.close();


 getch();}
