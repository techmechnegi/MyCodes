#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
void main()
{clrscr();
 ifstream ifile;
 int count=0;
 char ch;
 ifile.open("SACHIN.TXT",ios::in);
 if(!ifile)
{ cout<<"\n Can't access the file";
 getch();
 exit(0);
}

while(ifile.get(ch))
{//ifile>>ch;
 count++;
}
 ifile.close();
 cout<<"\n no of this:"<<count;
 getch();
 }

