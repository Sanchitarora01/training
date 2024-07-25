#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<"enter c";
	cin>>c;
	
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
		
	}
	else
	{
		if(b>c)
		{
			cout<<b<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
		return 0;
	}
}
