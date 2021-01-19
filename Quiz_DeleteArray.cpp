#include<iostream>
using namespace std;
int main()
{
	int ArraySize=10;
	int x,i,a[10]={1,5,6,12,3,5,67,34,87,45};
	bool find=false;
	cout<<"Array measures:"<<'\n';
	for(i=0;i<10;i++)
	cout<<a[i]<<'\t';
	cout<<"\nWhich measure you want to be deleted?";
	cin>>x;
	for(i=0;i<10;i++)
	if (a[i]==x)
	{
		find=true;
		break;				
	}
	int j=i;
	while(j<9)// why it should be 9?
	{
		a[j]=a[j+1];
		j++;
	}
	if(find==true)
	ArraySize--;
	for(i=0;i<ArraySize;i++)
	cout<<a[i]<<'\t';
}
