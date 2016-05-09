#include<fstream.h>
#include<conio.h>
#include<stdio.h>
 void main()
{
	clrscr();
	ofstream ofile;
	ofile.open("MU",ios::app|ios::binary );
	char s[13][20]={"MANCHESTER UNITED","\n10 Rooney","9 Bebrtov","17 Nani","5 Ferdinand", "1 De Gea" ,"25 Valencia", "18 Young", "13 Park","11 Giggs","8 Anderson","4 Rafael",'\0'};
	for(int i=0;i<13;i++)
   {	 cout<<"\n";
	  for(int j=0;j<20;j++)
	   ofile.write((char*)&s,sizeof(s));
   }
	ofile.close();

}
