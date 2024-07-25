#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,4,2,3,8};
	int value=7;
	int count =0;
	//pick the first elements of pairs
	for (int i=0;i<=5;i++){
		//pick the second element of the pair along with a[i]
		for (int j=i+1;j<5;j++)
		{
			for(int k=i+2;k<5;k++)
		
		{
			if (a[i]+a[j]+a[k]==value)
			{
				count = count+1;
			}
			
			 
			 } 
		}
			 	}
cout<<"the count of pairs"<<value<<"is"<<count<<endl;
return 0;
}

