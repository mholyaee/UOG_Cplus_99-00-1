#include<iostream>
using namespace std;

int main()
{
	for(int i=1000;i<=9999;i++)
	{
		if(i%123) continue;
		cout<<i<<'\t';
	}
}
