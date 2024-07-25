#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,3,5,7,9};
	cout<<"completely initialized Int Array A : "<<endl;
	for(int x : a) //for each loop very easy and important for Array data structure.
	//Read as far x in array a.
	//for each loop iterates through elements of the Array.Introdued in c++ 11.
	cout<<x<<endl;
	int b[6] = {1,3,5};//Keeping the array incomplete to see what is the outcome Result.
	cout<<"Partial initialized int Array B : "<<endl;
	for (int y : b)//Shows that for each loop will work according to the size of array and not accordoing 
	               //to number to elements initialized in the array.
    cout<<y<<endl;
    cout<<endl;
    
    float c[6]={1.2,2.4,3.6,48.54,99.48,54.88};
    cout<<"completely initalized Float array D with auto : "<<endl;
    for (auto z : d)
    cout<<z<<endl;
    cout<<endl;
    
    char e[5]={'A',66.'C',68,'E'};//no need to know the type of array.
    cout<<"Competely initialized char Array E with auto : "<<endl;
    for(auto z:e)
    cout<<z<<endl;
    cout<<endl;
   return 0;
}
