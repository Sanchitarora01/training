#include<iostream>
using namespace std;
void add(int x, int y)
{
	int sum;
	sum=x+y;
	cout<<"sum of a and b is"<<sum<<endl;
	}
	void add(int x, int y,int z)
{
	int sum;
	sum=x+y+z;
	cout<<"sum of a,b and c is"<<sum<<endl;
	}
	int main(){
	
	int x,y,z;
	cout<<"enter value of x ";
	cin>>x;
	cout<<"enter value of y ";
	cin>>y;
		cout<<"enter value of z ";
	cin>>z;
	add(x,y);
	add(x,y,z);
}
	//function overloading---Reusing the same function with different values(it is done at compile time)
	//polymorphism--ability to exist in many forms
	//types--runtime polymorphism and compile time polymorphism
	//runtime--
