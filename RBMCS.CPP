#include<fstream.h>
#include<conio.h>
#include<stdio.h>
 void main()
{clrscr();
 ofstream o1,o2,o3;

{ {o1.open("RMCS.txt",ios::out|ios::binary );
 char s[13][20]={"\n\t\t\t\tREAL MADRID CF","\n\n\t\t\t\t  1 Casillas","\n\n\n\t\t\t\t   18 Albiol","\n\n\t4 Sergio Ramos","\t\t\t\t\t3 Pepe","\n\n\n   22 Di Maria", "\t\t\t\t\t\t     14 Alonso","\n\n\t\t\t\t  20 Higuian", "\n\n\n\n\t\t7 Ronaldo","\t\t\t  10 Ozil","\n\n\n\t\t\t\t\t    8 Kaka","\n\n\n\t\t\t\t  9 Benzema",'\0'};

 for(int i=0;i<13;i++)
 {
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 o1.write((char*)&s,sizeof(s));
 o1.close();

 cout<<"\n";
 for(int k=0;k<80;k++)
 {cout<<"_";}
 getch();
 }
 clrscr();
 {o2.open("FCBCS.txt",ios::out|ios::binary );
 char s[13][20]={"\t\t\t\tFC BARCELONA","\n\n\n\t\t\t\t 1 Valdes","\n\n\n\t\t\t5 Puyol ","\t3 Pique","\n\n\t22 Abidal","\t\t\t\t   2 Dani Alves","\n\n\n\t\t\t6 Xavi", "\t\t4 Fabregas", "\n\n\n\n\n\t 10 Messi","\t\t\t\t    8 Iniesta","\n\n\n\t\t\t    17 Pedro","\n\n\n\t\t\t\t\t7 Villa",'\0'};

 for(int i=0;i<13;i++)
 {
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 o2.write((char*)&s,sizeof(s));
 o2.close();

 cout<<"\n";
 for(int k=0;k<80;k++)
 {cout<<"_";}
 getch();
 }
 clrscr();
 {o3.open("MUCS.txt",ios::out|ios::binary );
 char s[13][21]={"\t\t\t\tMANCHESTER UNITED","\n\n\n\t\t\t\t  1 De Gea","\n\n\n\n\t4 Rafael","\t5 Ferdinand","\t3 Evra","\n\n\n\n\t\t 25 Valencia","\t\t\t11 Giggs", "\n\n\n\n\t13 Park", "\t\t17 Nani","\t\t18 Young","\n\n\n\t\t\t 9 Berbatov","\n\n\n\t\t\t\t\t10 Rooney",'\0'};

 for(int i=0;i<13;i++)
 {
 for(int j=0;j<21;j++)
 cout<<s[i][j];}
 o3.write((char*)&s,sizeof(s));
 o3.close();
 }

 cout<<"\n";
 for(int k=0;k<80;k++)
 {cout<<"_";}
 getch();}  }