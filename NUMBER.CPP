#include<iostream.h>
#include<conio.h>
char check[20];
int flag=0;
int var(char check[]){
	int sec=0;
	int i=0;
	while(check[i]!='\0')
	{
		if((int)check[i]>=48 && (int)check[i]<=57 && sec==1)
		{
			flag=3;
		}

		if(((int)check[i]>=65 && (int)check[i]<=95)||((int)check[i]>=97 && (int)check[i]<=122) || (int)check[i]==95)
		{
			flag=3;
		}
		else
		{
			break;
		}
		i++;
	}
	return flag;

}
int num(char check[]){
	int sec=0;
	int i=0;
	while(check[i]!='\0'){
		if((int)check[i]>=48 && (int)check[i]<=57){
			flag=1;
		}
		else
		if(check[i]=='.' && sec==0)
		{
			sec=1;
			flag=1;
		}
		else{
			flag=0;
			break;
		}
		i++;
	}
	return flag;

}
void main()
{       clrscr();
	cout<<"\nEnter: ";
	cin>>check;
	int y=num(check);
	y=var(check);
	if(y==3){
	cout<<"Variable!!"<<endl;
	}else
	if(y==1)
	{
		cout<<"Number!!"<<endl;
	}
	else if(y==0){
		cout<<"Neither of two!";
	}
	getch();
}