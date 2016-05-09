#include<iostream.h>
#include<conio.h>

	void main()
{
	clrscr();
	char arr[30];
	int n,count=0,j;
	cout<<"Enter the string:";
	cin>>arr;
	for(int i=0;arr[i]!='\0';i++)
   {
		if(arr[i]=='(' || arr[i]=='[' || arr[i]=='{')
	{
		count++;
		j=i+1;
		while(arr[j]!='\0')
	   {
			if(arr[j]=='(' || arr[j]=='[' || arr[j]=='{')
		  {
			break;
		  }


		   else
			if(arr[i]==arr[j])
		{
				count--;
				break;
		}
		j++;
	   }
	}

   }
	if(count==1)
	cout<<"Parenthesis not matched!";
	else
	cout<<"Parenthesis Matched!";
	cout<<count;
	getch();
}
