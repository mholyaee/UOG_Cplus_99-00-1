#include<iostream>
using namespace std;

int main()

{

float i=1, Sum=0;
do{
	Sum+=i/(i+1);
	i++;
}while(i<=98);	
cout<<Sum;	
}
