#include<iostream.h>
#include<conio.h>


void selection_sort(int A[],int N);
void main()
{	clrscr();
	int a[20],n;
	cout<<"\nEnter the no of terms:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++)
     {  cout<<"\nElement["<<i<<"]:";
	cin>>a[i];
     }
	cout<<"\nArray is:";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	selection_sort(a,n);
	getch();
}


	void selection_sort(int A[],int N)
{       int temp;
	for(int i=0;i<N;i++)
    {
	  for(int j=i+1;j<N;j++)
	  { if(A[i]>A[j])

	      { temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	      }
	  }
	   cout<<"\n";
	 for(int k=0;k<N;k++)
	   { cout<<A[k]<<" ";
	   }
    }

}





