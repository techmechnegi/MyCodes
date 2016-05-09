# include<conio.h>
# include<fstream.h>
# include<stdio.h>
# include<string.h>
# include<iomanip.h>
# include<stdlib.h>

int search;
class footballplayers
{
	char name_player[50],nation[20],name[30],nation_m[30],dob_m[15];
	int goals,assist;
	int jersyno;

  public:
	void manager();
	void enter_record();
	void modify_player_record();
	void search_player();
	void show_record();


}player;

//********************************************************************

 void footballplayers:: enter_record()
{
	cout<<"\nEnter player jersy no :";
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
{       clrscr();
	cout<<"\n\n\n"<<setw(45)<<name_player;
	cout<<"\n\n\tJersyno :"<<jersyno;
	cout<<"\n\n\tNation : "<<nation;
	cout<<"\n\n\tGoals :"<<goals;
	cout<<"\n\n\tAssist :"<<assist;

}

//*************************************************************************

 void footballplayers:: modify_player_record()
{
	int tempgoals=0,tempassist=0;
	player.show_record();
	cout<<"\n\nEnter the goals :";
	cin>>tempgoals;
	cout<<"\nEnter the assist :";
	cin>>tempassist;
	goals=tempgoals;
	assist=tempassist;
}



//************************************************************************

 void footballplayers:: search_player()
{

	if(search==jersyno)
     {
	show_record();

     }

}


void main()
{
	clrscr();
	ofstream ofile;
	char ch;
	ofile.open("FPLAY.DAT",ios::app|ios::binary);
	do
   {
	player.enter_record();
	cout<<"\nWant to continue :";
	ofile.write((char*)&player,sizeof(player));
	cin>>ch;

   }while(ch=='Y'||ch=='y');
	ofile.close();


     /*	cout<<"\nEnter the jersy number of the player :";
	cin>>search;
	ifstream ifile;
	ifile.open("MPLAY.DAT",ios::in|ios::binary);
	while(ifile)
     {
	player.search_player();
	ifile.read((char*)&player,sizeof(player));
     }
	ifile.close();    */
	getch();

}