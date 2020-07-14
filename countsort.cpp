#include<iostream>
using namespace std;
int findMax(int A[],int n)
{
 int max=0;
 int i;
 for(i=0;i<n;i++)
 {
 if(A[i]>max)
 max=A[i];
 }
 return max;
}
void countsort(int A[],int n)
{
 int i,j,max,*C;

 max=findMax(A,n);
 C=new int[max+1];

 for(i=0;i<max+1;i++)
 {
 C[i]=0;
 }
 for(i=0;i<n;i++)
 {
 C[A[i]]++;
 }

 i=0;j=0;
 while(j<max+1)
 {
 if(C[j]>0)
 {
 A[i++]=j;
 C[j]--;
 }
 else
 j++;
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
	countsort(A,n);
		for(i=0;i<n;i++)
	{
		cout<<" "<<A[i];
		
	}
	return 0;
}
