#include<fstream.h>
#include<conio.h>
#include<stdio.h>


class football_players
{	int jerssyno;
	char name[20];
	char club[30];
	public:
	void enter();
	void display();
}player;



 //******************************************************************


void football_players::enter()
{
	cout<<"\nEnter the name of the player:";
	gets(player.name);
	cout<<"\nEnter the jerssy no:";
	cin>>player.jerssyno;
	cout<<"\nEnter the Club name:";
	gets(player.club);

}


  //*******************************************************************



 void football_players::display()
{       cout<<"\n\n\tName of the player:"<<player.name;
	cout<<"\n\tJerssy no:"<<player.jerssyno;
	cout<<"\n\tClub:"<<player.club;
}


   //*******************************************************************



   void main()
{	clrscr();
	char ch;
	ofstream ofile;
	ofile.open("FOOTBALL.DAT",ios::app | ios::binary);
	do
    {	player.enter();
	ofile.write((char*)&player,sizeof(player));
	cout<<"\nDo you want to continue(y/n):";
	cin>>ch;
    }   while(ch=='Y'||ch=='y');
	ofile.close();
	ifstream ifile;
	ifile.open("FOOTBALL.DAT",ios::app | ios::binary);
	ifile.read((char*)&player,sizeof(player));
	while(ifile)
    {   player.display();
	ifile.read((char*)&player,sizeof(player));
    }
	getch();
}




