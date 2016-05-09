# include <graphics.h>
# include <stdlib.h>
# include<fstream.h>
# include<conio.h>
# include<stdio.h>
# include<iomanip.h>
# include<string.h>
# include<process.h>
	int search,flag=0,choice2;
	char m[30],s[100];
	class footballplayers
{	char name_player[50],nation[20],name[30],nation_m[30],dob_m[15];
	int goals,assist;
	int jersyno;
	 public:
	void manager();
	void enter_record();
	void calc();
	void display();
	void show();
	void show_record();
	void search_player();
	int  return_jersyno();
	void modify_player_record();
}	player,man;
//********************************************************************
	void footballplayers:: enter_record()
{	cout<<"\nEnter player jersy no :";
	cin>>jersyno;
	cout<<"\nEnter player name :";
	gets(name_player);
	cout<<"\nEnter the nation :";
	gets(nation);
	cout<<"\nGoals: ";
	cin>>goals;
	cout<<"\nAssist: ";
	cin>>assist;
}
//*********************************************************************
	void footballplayers:: show_record()
{	cout<<"\n\n\n"<<setw(45)<<name_player;
	cout<<"\n\n\tJersyno :"<<jersyno;
	cout<<"\n\n\tNation : "<<nation;
	cout<<"\n\n\tGoals :"<<goals;
	cout<<"\n\n\tAssist :"<<assist;
}
//*********************************************************************
	void footballplayers:: manager()
{	cout<<"\n\nEnter your name : ";
	gets(name);
	cout<<"\nEnter your nation : ";
	gets(nation_m);
	cout<<"\nEnter your Date of birth(dd/mm/yy) : ";
	gets(dob_m);
	strcpy(m,name);
}
//****************************************************************************
	void footballplayers:: show()
{       	cout<<"\n\n\n\tName : "<<name;
	 cout<<"\n\n\n\tNation : "<<nation_m;
	 cout<<"\n\n\n\tDate of birth(dd/mm/yy) : "<<dob_m;
}
//*************************************************************************
	void footballplayers:: modify_player_record()
{	int tempgoals=0,tempassist=0;
	cout<<"\nPlayer Details Before Modify :-\n";
	show_record();
	if(choice2==1)
     {	cout<<"\n\n\tEnter the goals :";
	cin>>tempgoals;
	goals+=tempgoals;
	clrscr();
	cout<<"\n\nAfter Modification :-";
	show_record();
     }
       	else
     	 if(choice2==2)
     {	cout<<"\n\n\tEnter the assists :";
	cin>>tempassist;
	assist+=tempassist;
	clrscr();
	cout<<"\n\nAfter Modification :-";
	show_record();
     }
}
//**************************************************************************
	void footballplayers:: search_player()
{	if(search==jersyno)
     {	flag=1;
	show_record();
     }
}
//**************************************************************************
	int footballplayers::return_jersyno()
{	return(jersyno);
}
//**************************************************************************
front()
{	int gdriver = DETECT, gmode, errorcode;
	int x = 160, y = 0,x1=160,y1=0,x2=210,y2=0;
	char msg[80],msg1[80],msg2[80];
	initgraph(&gdriver, &gmode, "");
	y = getmaxx() / 4;
	y1 = getmaxy() / 2;
	y2 = getmaxx() / 2;
	settextjustify(LEFT_TEXT, CENTER_TEXT);
   {	settextstyle(GOTHIC_FONT, HORIZ_DIR, 9);
	sprintf(msg, "Football");
	sprintf(msg1, "Manager");
	sprintf(msg2, "Mode");
	outtextxy(x, y, msg);
	outtextxy(x1, y1, msg1);
	outtextxy(x2, y2, msg2);
   }	getch();
	closegraph();
	return 0;
}

//***********************************************************************
	rear()
{	int gdriver = DETECT, gmode, errorcode;
	int x = 160, y = 0, x1=215 , y1=0 , x2=255 , y2=0, x3=0, y3=0;
	int x4=160, y4=0;
	char msg[80],msg1[80],msg2[80],msg3[80],msg4[80];
	initgraph(&gdriver, &gmode, "");
	y = getmaxx() / 4;
	y1 = getmaxy() / 2;
	y2 = getmaxx() / 2;
	y3 = getmaxx() /6;
	y4 = getmaxx() /1.5;
	settextjustify(LEFT_TEXT, CENTER_TEXT);

    {	settextstyle(SMALL_FONT, HORIZ_DIR, 8);
	sprintf(msg3, "Presented By:-");
	sprintf(msg4,"'All that is good has a End'");
	outtextxy(x3, y3, msg3);
	outtextxy(x4, y4, msg4);
    }	settextjustify(LEFT_TEXT, CENTER_TEXT);
   {	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	sprintf(msg, "SACHIN");
	sprintf(msg1, "ROHAN");
	sprintf(msg2, "AMITOSH");
	outtextxy(x, y, msg);
	outtextxy(x1, y1, msg1);
	outtextxy(x2, y2, msg2);
   }	getch();
	closegraph();
	return 0;
}
//*********************************************************************
	void main()
{    	front();
	menu:
	clrscr();
	int choice;
	char yn,club[20],f[13][20];
	cout<<setw(48)<<"FOOTBALL MANAGER";
cout<<"\n\n\t MENU :"<<"\n\n\t1. Create New Manager"<<"\n\n\t2. Modify Records"<<"\n\n\t3. Team Formation"<<"\n\n\t4. Player Status"<<"\n\n\t5. About Manager"<<"\n\n\t6. Help"<<"\n\n\t7. Exit";
	cout<<"\n\n\t Enter the choice: ";
	cin>>choice;
	 if(choice==1)  //create manager mode
  {  	clrscr();
	cout<<"\t\t\tWORLD'S BEST 3 FOOTBALL CLUBS\n\n";
cout<<"\nRealMadrid"<<setw(35)<<"FCBarcelona"<<setw(33)<<"Manchester United";
	cout<<"\n\nChoose the team which you want to coach : ";
	gets(club);
	ofstream ofile;
	ifstream ifile,ifile1;
	if(strcmp(club,"Real Madrid")==0||strcmp(club,"REAL MADRID")==0)
     {
     }	else
	if(strcmp(club,"FC Barcelona")==0||strcmp(club,"FC BARCELONA")==0)
     {
     }
	else
	if(strcmp(club,"ManchesterUnited")==0||strcmp(club,"MANCHESTER UNITED")==0)
     {
     }	else
     {  	cout<<endl<<setw(48)<<"Wrong Team Entered!!";
	getch();
	goto menu;
     }	ofstream omanfile;
	omanfile.open("M.TXT",ios::out);
     {  	club;
	omanfile.write((char*)&club,sizeof(club));
     }	omanfile.close();
	ofstream omfile;
	omfile.open("man.txt",ios::out|ios::binary );

     {	cout<<"\n\nEnter your details ";
	man.manager();
     }	omfile.write((char*)&man, sizeof(man));
	omfile.close();
	cout<<endl<<setw(47)<<"Manager Mode Created!!";
	getch();
	goto menu;
  }
	if(choice==2)
{	ifstream ifile;
	ifstream imanfile;
	imanfile.open("M.TXT",ios::in);
	if(!imanfile)
 {      	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"      Please first create the manager mode to access the other menu opitons";
	getch();
	goto menu;
 }	else
{
     {	cout<<club;
	imanfile.read((char*)&club,sizeof(club));
     }	imanfile.close();
	if(strcmp(club,"Real Madrid")==0||strcmp(club,"REAL MADRID")==0)
     {	ifile.open("RPLAY.DAT",ios::in|ios::binary);
     }	else
	if(strcmp(club,"FC Barcelona")==0||strcmp(club,"FC BARCELONA")==0)
     {	ifile.open("FPLAY.DAT",ios::in|ios::binary);
   }	else
	if(strcmp(club,"ManchesterUnited")==0||strcmp(club,"MANCHESTER UNITED")==0)
     {	ifile.open("MPLAY.DAT",ios::in|ios::binary);
     }	clrscr();
	cout<<endl<<setw(48)<<"MODIFY DATA";
	ofstream ofile;
	cout<<"\n\n\n\n\t1.Update Goals\n\n\t2.Update Assists\n\n\t3.Exit to Main Menu";
	cout<<"\n\n\tEnter the Choice :";
	cin>>choice2;
	if(choice2==3)
	goto menu;
	else
	if(choice2!=1&&choice2!=2&&choice2!=3)
       {	cout<<"\n\n\t\t\t\tWrong Choice Entered!!";
	getch();
	goto menu;
       }	cout<<"\nEnter the Jersy number of the player :";
	cin>>search;
	clrscr();
	ofile.open("temp.DAT",ios::out|ios::binary);
	while(ifile.read((char*)&player,sizeof(player)))
     {	if(player.return_jersyno()==search)
      {	player.modify_player_record();
	ofile.write((char*)&player,sizeof(player));
     }	else
	ofile.write((char*)&player,sizeof(player));
     }	ofile.close();
	ifile.close();
	if(strcmp(club,"Real Madrid")==0||strcmp(club,"REAL MADRID")==0)
     {	remove("RPLAY.DAT");
	rename("temp.DAT","RPLAY.DAT");
     }	else
	if(strcmp(club,"FC Barcelona")==0||strcmp(club,"FC BARCELONA")==0)
     {	remove("FPLAY.DAT");
	rename("temp.DAT","FPLAY.DAT");
     }	else
	if(strcmp(club,"ManchesterUnited")==0||strcmp(club,"MANCHESTER UNITED")==0)
     {	remove("MPLAY.DAT");
	rename("temp.DAT","MPLAY.DAT");
     }	getch();
	goto menu;
 }
}
//*************************Team Formation Starts*****************************
	if(choice==3)
  {	ifstream imanfile("M.TXT");
	if(!imanfile)
   {    	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"      Please first create the manager mode to access the other menu opitons";
	getch();
	goto menu;
   }	else
   {	clrscr();
	ifstream imanfile,ifile,ifile1;
	imanfile.open("M.TXT",ios::in);
  {	cout<<club;
	imanfile.read((char*)&club,sizeof(club));
     }	if(strcmp(club,"Real Madrid")==0||strcmp(club,"REAL MADRID")==0)
     {	ifile.open("RM.txt",ios::in|ios::binary);
	ifile1.open("RMCS.txt",ios::in|ios::binary);
     }	else
	if(strcmp(club,"FC Barcelona")==0||strcmp(club,"FC BARCELONA")==0)
     {	ifile.open("FCB.txt",ios::in|ios::binary);
	ifile1.open("FCBCS.txt",ios::in|ios::binary);
     }	else
	if(strcmp(club,"ManchesterUnited")==0||strcmp(club,"MANCHESTER UNITED")==0)
     {	ifile.open("MU.txt",ios::in|ios::binary);
	ifile1.open("MUCS.txt",ios::in|ios::binary);
     }	clrscr();
	cout<<"\n";
	ifile.read((char*)&f,sizeof(f));
	for(int i=0;i<13;i++)
     {	cout<<"\n";
	for(int j=0;j<20;j++)
	cout<<f[i][j];
     }	getch();
	ifile.close();
	clrscr();
	ifile1.read((char*)&f,sizeof(f));
	for(i=0;i<13;i++)
     {	for(int j=0;j<20;j++)
	cout<<f[i][j];
     }	cout<<"\n";
	for(i=0;i<80;i++)
	cout<<"_";
	getch();
	ifile1.close();
	imanfile.close();
	goto menu;
   }
 }
//**************************Team Formation Ends*******************************
//***************************Player Status Starts**********************************
	if(choice==4)
  {	ifstream imanfile("M.TXT");
	if(!imanfile)
   {    	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"      Please first create the manager mode to access the other menu opitons";
	getch();
	goto menu;
   }	else
   {	ifstream imanfile,ifile;
	imanfile.open("M.TXT",ios::in);
     {	cout<<club;
	imanfile.read((char*)&club,sizeof(club));
     }
	if(strcmp(club,"Real Madrid")==0||strcmp(club,"REAL MADRID")==0)
     {	ifile.open("RPLAY.DAT",ios::in|ios::binary);
     }	else
	if(strcmp(club,"FC Barcelona")==0||strcmp(club,"FC BARCELONA")==0)
     {	ifile.open("FPLAY.DAT",ios::in|ios::binary);

     }	else
if(strcmp(club,"ManchesterUnited")==0||strcmp(club,"MANCHESTER UNITED")==0)
     {	ifile.open("MPLAY.DAT",ios::app|ios::binary);
     }	clrscr();
	ofstream ofile;
	char ch;
	cout<<"\nEnter the jersy number of the player :";
	cin>>search;
	clrscr();
	while(ifile)
     {	player.search_player();
	ifile.read((char*)&player,sizeof(player));
     }	ifile.close();
	if(flag==0)
     {	cout<<"\n\n\n\n\n\n\n\n"<<setw(52)<<"Wrong Jersy Number Entered !";
     }  	flag=0;
	getch();

	goto menu;
 }
  }
//*************************About Manager Starts******************************
	if(choice==5)
  {	ifstream imanfile("M.TXT");
	if(!imanfile)
   {    	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"      Please first create the manager mode to access the other menu opitons";
	getch();
	goto menu;
   }	else
   {
	clrscr();
	cout<<setw(47)<<"MANAGER PROFILE";
	ifstream ifile;
	ifile.open("man.txt",ios::in|ios::binary);
	while(ifile)
	ifile.read((char*)&man, sizeof(man));
     {	man.show();
     }	ifile.read((char*)&man, sizeof(man));
	ifile.close();
	getch();
	goto menu;
   }
  }
//*******************************About Manager Ends**************************
//*******************************Help Menu Starts****************************
	if(choice==6)
  {	clrscr();
	helpmenu:
	cout<<setw(46)<<"HELP MODE ";
cout<<"\n\n\t HELP MENU :"<<"\n\n\t1. Create New Manager"<<"\n\n\t2. Modify Records"<<"\n\n\t3. Team Formation"<<"\n\n\t4. Player Status"<<"\n\n\t5. About Manager"<<"\n\n\t6. Exit to main menu";
	cout<<"\n\n\tEnter  your choice : ";
	cin>>choice;
	clrscr();
	ifstream ifile;
	if(choice==1)
     {
	ifile.open("h1.txt",ios::in|ios::binary);
     }	else
	if(choice==2)
     {
	ifile.open("h2.txt",ios::in|ios::binary);
     }	else
	if(choice==3)
     {
	ifile.open("h5.txt",ios::in|ios::binary);
     }
	else
	if(choice==4)
     {
	ifile.open("h3.txt",ios::in|ios::binary);
     }	else
	if(choice==5)
     {
	ifile.open("h4.txt",ios::in|ios::binary);
     }	else
     {
		goto menu;
     }
     {	cout<<"\n";
	ifile.read((char*)&s,sizeof(s));
	cout<<s;
     }
	getch();
	clrscr();
	goto helpmenu;

  }
//**************************Help Menu Ends*****************************
//****************************Exit Menu Starts*****************************
	if(choice==7)
  {   	clrscr();
	cout<<"\n Do you really want to exit (Y/N) ?";
	cin>>yn;
	if(yn=='n'||yn=='N')
     {
	goto menu;
     }
	else
     {
	cout<<"\nPresented By :- ";
	rear();
	exit(0);
     }
  }
}
//****************************Exit Menu Ends********************************
