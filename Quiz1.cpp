#include<iostream>
using namespace std;

//Computing wage of employee

int main()
{
	int hour;
	cin>>hour;
	cout<<"wage:";
	if(hour<40) cout<<hour*10;
	else if(hour<=50) cout<<(hour-40)*1.2*10+400;
	else cout<<400+120+(hour-50)*1.5*10;	
	
}
