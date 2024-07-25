#include<iostream>
using namespace std;
int main()
{
	bool red_light{false};
	bool green_light{true};
	if(red_light==true){
		cout<<"STOP!"<<endl;
	}
	if(green_light){
		cout<<"The light is Green!"<<endl;
	}
	else{
		cout<<"The light is not green!"<<endl;
	}
	//sizeof()

cout<<"size of (bool) : "<<size of (bool)}<<endl;
//Printing out a bool
//1 -->> true
//0 -->>false
cout<<endl;
cout<<"red_light : "<<red_light<<endl;
cout<<"green_light : "<<green_light<<endl;
cout<<boolalpha;
cout<<"red_light : "<<red_light<<endl;
cout<<"green_light :"<<green_light<<endl;
return 0;
}
