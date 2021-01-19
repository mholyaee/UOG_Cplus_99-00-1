#include<iostream>
using namespace std;

int main()
{
	int a[5][5],sum=0;
	for(int i=0;i<5;i++)
	{
	cout<<"row"<<i+1<<":\n";
	for(int j=0;j<5;j++)
	{
		cin>>a[i][j];
	}
	}
	// Main diagonal
	cout<<"\nThe Main diagonal:\n";
	for(int i=0;i<5;i++)
	{
	   sum+=a[i][i];
	}
 	cout<<sum;
}


