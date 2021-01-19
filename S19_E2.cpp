#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	cout<<"\nMeasures of List A:";
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"\nMeasures of List B:";
	for(int i=0;i<10;i++)
	cin>>b[i];
	for(int i=0;i<10;i++)
	b[i]+=a[i];
	cout<<"\nSum of the Lists:";
	for(int i=0;i<10;i++)
	cout<<b[i]<<"\t";
}

