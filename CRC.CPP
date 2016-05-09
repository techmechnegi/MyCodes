#include<iostream>
#include<conio>


void  main()
{

    char data[10];
    char modata[13];
    char recdata[13];
    int flag=0;
    char generator[5];
    char rec[5];
    int i=0,j=0;
    cout<<" Enter the data: ";
    cin>>data;
    cout<<" Enter the generator: ";
    cin>>generator;
    //****************************************
    while(data[i]!='\0')
    {
	modata[i]=data[i];
	i++;
    }
    modata[i]='0';
    modata[i+1]='0';
    modata[i+2]='0';
    modata[i+3]='\0';
    //****************************************
    i=0;
    while(modata[i]!='\0')
    {
	if(flag==0)
	{
	    for(int k=1;k<4;k++)
	    {
		    if((modata[k]=='1' && generator[k]=='0') || (modata[k]=='0' && generator[k]=='1'))
		    {
			rec[k-1]='1';
		    }
		    else
			rec[k-1]='0';
	    }
	    rec[k-1]=modata[i+4];
	    i=i+4;
	    flag=1;
	}
	else{
		if(rec[0]=='1')
		{

			for(int k=1;k<4;k++)
		    {
			if((rec[k]=='1' && generator[k]=='0') || (rec[k]=='0' && generator[k]=='1'))
			{
			    rec[k-1]='1';
			}
			else
			rec[k-1]='0';
		    }
		    rec[k-1]=modata[i+1];
		}
		else{
		    for(int k=1;k<4;k++)
		    {
			rec[k-1]=rec[k];
		    }
		    rec[k-1]=modata[i+1];

		}
		i++;
    }
    }
    cout<<" From sender's side: "<<rec<<endl;

    i=0;
    while(data[i]!='\0')
    {
	recdata[i]=data[i];
	i++;
    }
    while(rec[j]!='\0')
    {
	recdata[i]=rec[j];
	i++;
	j++;
    }
    recdata[i]='\0';

    i=0;
    flag=0;
    while(recdata[i]!='\0')
    {
	if(flag==0)
	{
	    for(int k=1;k<4;k++)
	    {
		    if((recdata[k]=='1' && generator[k]=='0') || (recdata[k]=='0' && generator[k]=='1'))
		    {
			rec[k-1]='1';
		    }
		    else
			rec[k-1]='0';
	    }
	    rec[k-1]=recdata[i+4];
	    i=i+4;
	    flag=1;
	}
	else{
		if(rec[0]=='1')
		{

			for(int k=1;k<4;k++)
		    {
			if(rec[k]=='1' && generator[k]=='0')
			{
			    rec[k-1]='1';
			}
			else
			if(rec[k]=='0' && generator[k]=='1')
			{
			    rec[k-1]='1';
			}
			else
			rec[k-1]='0';
		    }
		    rec[k-1]=recdata[i+1];
		}
		else{
		    for(int k=1;k<4;k++)
		    {
			rec[k-1]=rec[k];
		    }
		    rec[k-1]=recdata[i+1];

		}
		i++;
    }
    }

    cout<<" At reciever side: "<<rec<<endl;
   getch();
}
