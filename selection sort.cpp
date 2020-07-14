#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionsort(int arr[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(arr[j]<arr[k])
			{
				k=j;
				
			}
			swap(&arr[i],&arr[k]);
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
selectionsort(A,n);
		for(i=0;i<n;i++)
	{
		cout<<" "<<A[i];
		
	}
	return 0;
}
