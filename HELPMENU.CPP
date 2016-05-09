#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include"string.h";
 char s[100];
 void main()
{clrscr();
 ofstream o1,o2,o3,o4,o5;
   {o1.open("h1.txt",ios::out|ios::binary );
    strcpy(s,"You can select your team");
    cout<<s;
    o1.write((char*)&s,sizeof(s));
    o1.close();
   }
   {o2.open("h2.txt",ios::out|ios::binary );
    strcpy(s,"You can modify your players record");
    cout<<s;
    o2.write((char*)&s,sizeof(s));
    o2.close();
   }
   {o3.open("h3.txt",ios::out|ios::binary );
    strcpy(s,"You can check current status of your players");
    cout<<s;
    o3.write((char*)&s,sizeof(s));
    o3.close();
   }
   {o4.open("h4.txt",ios::out|ios::binary );
    strcpy(s,"You can check your profile");
    cout<<s;
    o4.write((char*)&s,sizeof(s));
    o4.close();
   }
   {o5.open("h5.txt",ios::out|ios::binary );
    strcpy(s,"You can check your team formation");
    cout<<s;
    o5.write((char*)&s,sizeof(s));
    o5.close();
   }
 getch();}