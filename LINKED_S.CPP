# include<conio.h>
# include<iostream.h>
# include<process.h>

struct node
{ 	int info;
	node *next;
}*top,*ptr,*newptr;

void pop(node *top);
void push(node *np);
node *Create(int insert);
void display(node *np);


const size=5;
void main()
{       clrscr();
	int choice;
	int insert;
	cout<<"\n1.Push\n2.Pop\n3.Quit"<<endl;
	top=NULL;
	do
  {
	cout<<"\nEnter choice:";
	cin>>choice;
	if(choice==1)
     {
	 cout<<"\nEnter the no to push:";
	 cin>>insert;
	 newptr=Create(insert);
	 push(newptr);

     }
	else
	if(choice==2)
     {
	pop(top);
     }

	else
	if(choice==3)
     {
	exit(0);
     }
     else
     {
	cout<<"\nWrong key pressed";
	continue;
     }
     if(top)
     {	cout<<"\nLinked stack is:\n";
	display(top);
     }

  }while(1);

}

node *Create(int insert)
{
	ptr=new node;
	ptr->info=insert;
	ptr->next=NULL;
	return ptr;
}


void pop(node *top)
{
	if(top==NULL)
     {  cout<<"\nStack underflow";
	getch();
	exit(0);
     }

	else
     {	node *temp=top;
	cout<<"\nPopped element:"<<temp->info<<endl;
	top=top->next;
	delete (temp);

     }

}

void push(node *np)
{	if(top==NULL)
	top=np;
	else
     {
	np->next=top;
	top=np;
     }

}

void display(node *np)
{ 	while(np!=NULL)
     {  cout<<np->info<<"<-";
	np=np->next;
     }
	cout<<"NULL";
}
