# include<conio.h>
# include<fstream.h>
# include<stdio.h>
# include<string.h>
# include<iomanip.h>
# include<stdlib.h>

int search;
int count=1;
int tempgoals,tempassist;
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
	int  return_jersyno();


}player,player1;

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
    /*	int tempgoals=0,tempassist=0;
	player.show_record();
	cout<<"\n\nEnter the new goals :";
	cin>>tempgoals;
	cout<<"\nEnter the new assist :";
	cin>>tempassist;
	goals+=tempgoals;
	assist+=tempassist;
    */  cout<<"\nEnter the goals scored";
	cin>>tempgoals;
	cout<<"\nEnter the new assist :";
	cin>>tempassist;
	goals=goals+tempgoals;
	assist=assist+tempassist;

}
int footballplayers::return_jersyno()
{
	return(jersyno);
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
     /*	ofile.open("MPLAY.DAT",ios::app|ios::binary);
	do
   {

     {
	player.enter_record();
	cout<<"\nWant to continue :";
	ofile.write((char*)&player,sizeof(player));
	cin>>ch;
     }

   }while(ch=='Y'||ch=='y');
	ofile.close();

      */
	cout<<"\nEnter the jersy number of the player :";
	cin>>search;
	ifstream ifile;
	ifile.open("RPLAY.DAT",ios::in|ios::binary);
	ofile.open("temp.DAT",ios::out|ios::binary);
	while(ifile.read((char*)&player,sizeof(player)))
     {

	if(player.return_jersyno()==search)
      {
	player.modify_player_record();
	ofile.write((char*)&player,sizeof(player));

      }
	else
	ofile.write((char*)&player,sizeof(player));

    }

       ofile.close();
       ifile.close();
       remove("RPLAY.DAT");
       rename("temp.DAT","RPLAY.DAT");
       getch();
}