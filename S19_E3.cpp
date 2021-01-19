#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	cin>>arr[i];
	int j=9;
	for(i=0;i<5;i++)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	for(i=0;i<10;i++)
		cout<<arr[i]<<"\t";
}

