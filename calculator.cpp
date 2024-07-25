#include<iostream>
using namespace std;
void add(int x, int y)
{
	int sum;
	sum=x+y;
	cout<<"sum of a and b is"<<sum<<endl;
	}
	
	void sub(int x, int y)
{
	int sub;
	sub=x-y;
	cout<<"sub of a and b is"<<sub<<endl;
	}
	
		void div(float x, float y)
{
	float div;
	div=x/y;
	cout<<"div of a and b is"<<div<<endl;
	}
			void rem(int x, int y)
{
	int rem;
	rem=x%y;
	cout<<"rem of a and b is"<<rem<<endl;
	}
	int main(){
	
	int x,y;
	cout<<"enter value of x ";
	cin>>x;
	cout<<"enter value of y ";
	cin>>y;
	add(x,y);
	sub(x,y);
	div(x,y);
	rem(x,y);	}
