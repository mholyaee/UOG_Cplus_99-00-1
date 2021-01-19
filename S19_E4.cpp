#include<iostream>
using namespace std;
int main()
{
	bool flag=false;
	int a[10],x;
	for(int i=0;i<10;i++)
	cin>>a[i];
	cout<<"X:";
	cin>>x;
	for(int i=0;i<10;i++)
	  if(x==a[i])
	  {
	      cout<<"\nFound in:"<<i;
                     flag=true;
	   }

	if (!flag)
	cout<<"\nNot found";
}

