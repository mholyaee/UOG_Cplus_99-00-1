#include<iostream>
using namespace std;

int main()
{
	int i=1,n;
	float grade,sum=0;
	cin>>n;
	while (i<=n)
	{
		cin>>grade;
		sum+=grade;
		i++;
	}
	cout<<sum/n;
	return 1;
}
