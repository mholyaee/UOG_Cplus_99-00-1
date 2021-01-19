#include<iostream>
using namespace std;
int main()
{
	int a[5][5];
	
	cout<<"Matrix:\n";
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	{
	   cout<<"\nrow["<<i+1<<"]col["<<j+1<<"]:";
	   cin>>a[i][j];
	}
	}
	// lower Triangular
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<=i;j++)
	    cout<<a[i][j]<<"\t";
		
	cout<<"\n";
	}
	
}

