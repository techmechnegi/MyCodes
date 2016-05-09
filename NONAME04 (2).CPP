#include<conio.h>
#include<iostream.h>
void main()
{       clrscr();
	int track[]={50,100,150,200},*striker;
	striker=track;
	track[1]+=20;
	cout<<"striker > "<<*striker<<endl;
	*striker-=10;
	*striker++;
	cout<<"Next @ "<<*striker<<endl;
	striker+=2;
	cout<<"last @ "<<*striker<<endl;
	cout<<"reset to "<<track[0]<<endl;
	getch();
}
