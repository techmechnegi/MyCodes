#include<iostream.h>
#include<conio.h>


void selection_sort(int A[],int N);
void merge_sort(int A[],int B[],int N,int M,int C[]);
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


	selection_sort(a,n);
	selection_sort(b,m);
	merge_sort(a,b,n,m,c);
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

}

void merge_sort(int A[],int B[],int N,int M,int C[])
{
  int i=0,j=0,k=0,l=0;
	while( i<N && j<M)
    {
	if(A[i]<B[j])
	  {  C[k]=A[i];
	     i++;
	  }
	else
	{    C[k]=B[j];
	     j++;
	}
	k++;
    }
       if(i==N)
       { for(l=j;l<M;l++)
	 { C[k]=B[l];
	   k++;
	 }
       }
       else
       { for(l=i;l<N;l++)
	 { C[k]=A[l];
	   k++;
	 }
       }
    cout<<"\nMerged Array is:";
    for(int s=0;s<(M+N);s++)
    cout<<C[s]<<" ";


}


