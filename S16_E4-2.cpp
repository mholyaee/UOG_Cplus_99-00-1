#include<iostream>
using namespace std;

int main()
{
	char op;
	int a,b;
	bool flag=true;
	while (flag)
	{
		cin>>op;
		if(op=='+'||op=='-'||op=='/'||op=='*')
		cin>>a>>b;
		if (op=='/') cout<<a/b;
		else if(op=='*') cout<<a*b;
		else if (op=='+') cout<< a+b;
		else if (op=='-') cout<<a-b;
		else flag=false;
	}
}
