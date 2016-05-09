# include<iostream.h>
# include<conio.h>
void selection_sort(int A[],int N);
void main()
{	clrscr();
	int a[20],n,flag=0;
	cout<<"\n Enter the no of terms:";
	cin>>n;
	cout<<"\n Enter elements:";
	for(int i=0;i<n;i++)
	{ cin>>a[i];
	}
	cout<<"\nArray is:"<<endl;
	for(i=0;i<n;i++)
   {    cout<<a[i]<<" ";
   }
	for(i=0;i<n-1;i++)
   {    if(a[i]<a[i+1])
	{  flag=0;
	}
	else
	{       flag=1;
		break;
	}
    }
	if(flag==0)
	cout<<"\nArray is already sorted";
	else
	selection_sort(a,n);
	getch();
}

void selection_sort(int A[],int N)
{   int pos,min;
	for(int i=0;i<N;i++)
	 { min=A[i];
	   pos=i;
	     for(int j=i+1;j<N;j++)
	       {  if(A[j]<min)
		    { min=A[j];
		      pos=j;
		     }
	       }
	    A[pos]=A[i];
	    A[i]=min;
	   cout<<"\nAfter iteration"<<i+1<<": ";
	   for(int K=0;K<N;K++)
	   cout<<A[K]<<" ";
	 }
}