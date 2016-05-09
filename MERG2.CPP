#include<iostream.h>
#include<conio.h>


void selection_sort(int A[],int N);
void sort(int A[],int B[],int N,int M,int C[]);
void main()
{
	clrscr();
	int a[20],b[20],n,m,c[50];
	cout<<"\nEnter the no of terms:";
	cin>>n>>m;

	cout<<"\nEnter the elements of array A:";
	for(int i=0;i<n;i++)
     {  cout<<"\nElement["<<i<<"]:";
	cin>>a[i];
     }
	cout<<"\nEnter the elements of array B:";
	for(int j=0;j<m;j++)
     {  cout<<"\nElement["<<j<<"]:";
	cin>>b[j];
     }

	cout<<"\nArray A is:";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\nArray B is:";
	for(j=0;j<m;j++)
	cout<<b[j]<<" ";

	sort(a,b,n,m,c);
	selection_sort(c,(n+m));

	getch();
}




	void selection_sort(int A[],int N)
{       int min,pos;
	for(int i=0;i<N;i++)
    {    min=A[i];
	 pos=i;

	  for(int j=i+1;j<N;j++)
	  { if(A[j]<min)

	      {  min=A[j];
		 pos=j;

	      }
	   }
	      A[pos]=A[i];
	      A[i]=min;
    }
    cout<<"\nMerged array is:"<<endl;
    for(int k=0;k<N;k++)
    cout<<A[k]<<" ";

}

void sort(int A[],int B[],int N,int M,int C[])
{ int k=0;
	for(int i=0;i<N;i++)
	  { C[k]=A[i];
	    k++;
	  }
	for(int j=0;j<M;j++)
	  { C[k]=B[j];
	    k++;
	  }

}
