#include<iostream>
using namespace std;
int insertionsort(int arr[],int n)
{
	int i,j,x;

	for(i=1;i<n;i++)
	{	j=i-1;
    	x=arr[i];
		while(j>-1 & arr[j]>x)
		{
			arr[j+1]=arr[j];
		j--;
		}
		arr[j+1]=x;
	}

}
int main()
{
	int i,n,A[100];
	cout<<"Enter the number of elements you want to sort:"<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		
	}
	insertionsort(A,n);
		for(i=0;i<n;i++)
	{
		cout<<" "<<A[i];
		
	}
	return 0;
}
