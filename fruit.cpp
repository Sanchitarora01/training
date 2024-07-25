#include<iostream>
using namespace std;
int main()
{
	int apple_count{5};
	int orange_count{10};//initializers to 10
	int fruit_count{apple_count + orange_count };
	//int bad_initialization (doesnt_exist3 + doesnt exist4);
	
	int narrowing_conversion_functional(2.9);
	
	cout<<"Apple count:"<<apple_count<<endl;
	cout<<"Orange_count:"<<orange_count<<endl; 
	cout<<"Fruit_count:"<<fruit_count<<endl;
	cout<<"narrowing conversion:"
	<<narrowing_conversion_functional<<endl;
	return 0;
}
