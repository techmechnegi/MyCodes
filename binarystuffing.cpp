# include<iostream.h>
# include<conio.h>

void main()
{
    clrscr();
    char frame1[10];
    char recieveframe1[20];
    char flag[9];
    int i=0,q=0,p=0,r=0,j=0;
    char modifiedframe[50];
    cout<<" Enter the frame 1: ";
    cin>>frame1;
    cout<<" Enter the value of flag: ";
    cin>>flag;

    while(flag[i]!='\0')
    {
        modifiedframe[r]=flag[i];
        i++;
        r++;
    }
    i=0;
    while(frame1[i]!='\0')
    {
	if(frame1[i]=='1' && frame1[i+1]=='1')
	    {
		modifiedframe[r]=frame1[i];
		modifiedframe[r+1]=frame1[i+1];
		modifiedframe[r+2]='0';
		r=r+3;
		i=i+2;
	    }else
	{
		modifiedframe[r]=frame1[i];
		r=r+1;
		i=i+1;
	}

    }
    i=0;
    while(flag[i]!='\0')
    {
        modifiedframe[r]=flag[i];
        i++;
        r++;
    }
    i=0;
  
   modifiedframe[r]='\0';
   cout<<" Modified frame is: "<<modifiedframe;
  getch();
}



