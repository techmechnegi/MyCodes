void INSERT (int a[],int n,int insert,int position)

{
	int pos=0,temp,temp1;
	while(a[pos]<insert)
	 pos++;
	 temp=a[pos];
	 a[pos]=insert;
	 for(int i=pos+1;i<n+1;i++)
	 { temp1=a[i];
	   a[i]=temp;
	   temp=temp1;
	 }
	 cout<<"\nArray after insertion is:";
	 for(i=0;i<n+1;i++)
	 cout<<a[i]<<" ";
}