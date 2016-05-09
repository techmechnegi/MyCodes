#include<iostream.h>
#include<conio.h>

int convert(char ca[4])
{
    int a=0;
    int i=0;
    while(ca[i]!='\0')
    {
	a=(a*10)+(int)ca[i]-48;
	i++;
    }
    return a;
}
void main()
{
    clrscr();
    char ip[16];
    char ch[4]={' ',' ',' ','\0'};
    int chk;
    int i=0;
    cout<<"Enter the ip address: ";
    cin>>ip;
    while(ip[i]!='.')
    {
	ch[i]=ip[i];
	i++;
    }
    chk=convert(ch);
    if(chk>=0 && chk<=127)
    {
	cout<<"\nClass A addressing.";
    }
    else
	if(chk>=128 && chk<=191)
    {
	cout<<"\nClass B addressing.";
    }
    else
        if(chk>=192 && chk<=225){
	cout<<"\nClass C addressing.";
    }

    getch();
}
