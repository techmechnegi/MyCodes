# include<iostream.h>
# include<conio.h>

void main()
{
    clrscr();
    char frame1[10];
    char frame2[10];
    char recieveframe1[20];
    char recieveframe2[20];
    char flag[6];
    int i=0,q=0,p=0,r=0,j=0;
    char modifiedframe[50];
    cout<<" Enter the frame 1: ";
    cin>>frame1;

    cout<<" Enter the frame 2: ";
    cin>>frame2;

    cout<<" Enter the value of flag value in five characters: ";
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
    while(flag[i]!='\0')
    {
        modifiedframe[r]=flag[i];
        i++;
        r++;
    }
    i=0;


    while(frame2[i]!='\0')
    {
	if(frame2[i]=='1' && frame2[i+1]=='1')
	{
	    modifiedframe[r]=frame2[i];
	    modifiedframe[r+1]=frame2[i+1];
	    modifiedframe[r+2]='0';
	    r=r+3;
	    i=i+2;
	}
	else
	{
		modifiedframe[r]=frame2[i];
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
    modifiedframe[r]='\0';

    cout<<" Modified frame is: "<<modifiedframe<<endl;

    //..........converting to original frames..........
    i=0;

    while(modifiedframe[i]!='\0')
    {
        if(j<2)
        {

        if(modifiedframe[i]=='0' && modifiedframe[i+1]=='1' && modifiedframe[i+2]=='1' && modifiedframe[i+3]=='1' && modifiedframe[i+4]=='0')
        {
            i=i+5;
            j++;
        }
        else
        {
	    if(modifiedframe[i]=='1' && modifiedframe[i+1]=='1' && modifiedframe[i+2]=='0')
	    {
		recieveframe1[p]=modifiedframe[i];
		recieveframe1[p+1]=modifiedframe[i+1];
		i=i+3;
		p=p+2;
	    }
	    else
	    {
		recieveframe1[p]=modifiedframe[i];
		i++;
		p++;
	    }
	}

	}else

	{
		  if(modifiedframe[i]=='0' && modifiedframe[i+1]=='1' && modifiedframe[i+2]=='1' && modifiedframe[i+3]=='1' && modifiedframe[i+4]=='0')
	{
	    i=i+5;
	}
	else
	{
	    if(modifiedframe[i]=='1' && modifiedframe[i+1]=='1' && modifiedframe[i+2]=='0')
	    {
		recieveframe2[q]=modifiedframe[i];
		recieveframe2[q+1]=modifiedframe[i+1];
		i=i+3;
		q=q+2;
	    }
	    else
	    {
		recieveframe2[q]=modifiedframe[i];
		i++;
		q++;
	    }
	}
	}
    }
    recieveframe1[p]='\0';
    recieveframe2[q]='\0';
    cout<<" Recieved frame1 is: "<<recieveframe1<<endl;
    cout<<" Recieved frame2 is: "<<recieveframe2<<endl;
    getch();
}


