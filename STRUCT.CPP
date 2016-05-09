#include<iostream.h>
#include<conio.h>

	struct student
{
	int roll;
	char name[20];
	int marks[5];
};
	void main()
{
	clrscr();
	int n,srch;
	int flag=0;
	student s[10];
	cout<<"\nEnter the no of student:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the details of student "<<i+1;
		cout<<"\n\n\tEnter the name:";
		cin>>s[i].name;
		cout<<"\n\tEnter the Roll.no:";
		cin>>s[i].roll;
		for(int j=0;j<5;j++)
		{
			cout<<"\nEnter the marks:";
			cin>>s[i].marks[j];
		}
	}

	cout<<"\nEnter the Roll.no of the student to access its profile:";
	cin>>srch;
	for(i=0;i<n;i++)
	{
		if(s[i].roll==srch)
		{
			cout<<"\nName: "<<s[i].name;
			cout<<"\nRoll No: "<<s[i].roll;
			cout<<"\nMarks: ";
			for(int j=0;j<5;j++)
			{
				cout<<s[i].marks[j]<<" ";
			}
			flag=1;
		}
	}
	if(flag==0)
	cout<<"\n\nStudent not found in database!";
	getch();
}
