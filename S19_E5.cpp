#include<iostream>
using namespace std;
int main()
{
	int a[10],ind;
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"index:";
	cin>>ind;
	if(ind>=0 && ind<10)
		a[ind]=-100;
	for(int i=0;i<10;i++)
	if (a[i]>0)
	cout<<a[i]<<"\t";
	
}

