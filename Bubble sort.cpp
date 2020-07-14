#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
	 flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1]){
			
			swap(arr[j],arr[j+1]);
			flag=1;
		}
	}

if(flag==0)
{
	cout<<"Elements are already sorted"<<endl;
	return 0;
}
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
	bubblesort(A,n);
		for(i=0;i<n;i++)
	{
		cout<<" "<<A[i];
		
	}
	return 0;
}
