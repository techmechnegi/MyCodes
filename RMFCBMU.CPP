#include<fstream.h>
#include<conio.h>
#include<stdio.h>
 void main()
{clrscr();
 ofstream o1,o2,o3;

{o1.open("RM.txt",ios::out|ios::binary );
 char s[13][20]={"\t\t\t\tREAL MADRID","\n8 Kaka","7 Ronaldo","14 Alonso","1 Casillas", "22 Di Maria" ,"20 Higuian", "3 Pepe", "9 Benzema","4 Ramos","10 Ozil","18 Albiol",'\0'};
 for(int i=0;i<13;i++)
 {cout<<"\n";
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 o1.write((char*)&s,sizeof(s));
 o1.close();
 getch();
}
 clrscr();
{o2.open("FCB.txt",ios::out|ios::binary );
 char s[13][20]={"\t\t\t\tFC BARCELONA","\n10 Messi","7 Villa","8 Iniesta","17 Pedro", "6 Xavi" ,"5 Puyol", "3 Pique", "1 Valdes","4 Fabregas","2 Dani Alves","22 Abidal",'\0'};
 for(int i=0;i<13;i++)
 {cout<<"\n";
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 o2.write((char*)&s,sizeof(s));
 o2.close();
 getch();}
 clrscr();
{o3.open("MU.txt",ios::out|ios::binary );
 char s[13][20]={"\t\t\tMANCHESTER UNITED","\n10 Rooney","9 Berbatov","17 Nani","5 Ferdinand", "1 De Gea" ,"25 Valencia", "18 Young", "13 Park","11 Giggs","3 Evra","4 Rafael",'\0'};
 for(int i=0;i<13;i++)
 {cout<<"\n";
 for(int j=0;j<20;j++)
 cout<<s[i][j];}
 o3.write((char*)&s,sizeof(s));
 o3.close();
 getch();}

}
