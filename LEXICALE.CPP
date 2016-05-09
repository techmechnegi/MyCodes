#include<iostream.h>
#include<conio.h>
int flag =0;
char check[50];
int isvar(char check[]){
	int i=0;
		if(((int)check[i]>=65 && (int)check[i]<=90)||((int)check[i]>=97 && (int)check[i]<=122))
		{
			i++;
			while(check[i]!='\0')
			{
				if(((int)check[i]>=65 && (int)check[i]<=91)||((int)check[i]>=97 && (int)check[i]<=123)||((int)check[i]>=48 && (int)check[i]<=57))
				{
					i++;
					flag=1;
				}
				else{
					flag=2;
					break;
				}
			}
		}
		return flag;
}
int isnum(char check[]){
	int i=0;
	int times=0;
	while(check[i]!='\0'){
		if((int)check[i]>=48 && (int)check[i]<=57)
		{
			i++;
			flag=3;
		}
		else
		if(check[i]=='.' && times==0){
			times=1;
			i++;
		}
		else{
			isvar(check);
			break;
		}
	}
	return flag;
}
void main()
{
	clrscr();
	cout<<"Enter: ";
	cin>>check;
	int result=isnum(check);
	if(flag==2){
			cout<<"Not varible";
		}
		else
		if(flag==1){
			cout<<"Varible";
		}
	getch();
}