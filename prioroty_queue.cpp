#include<iostream>
using namespace std;
int main()
{
	priorit_queue<int> max;
	priority_queue<int,vector<int>,grater<int>>mini;
	max.push(1);
		max.push(2);

	max.push(3);

	max.push(4);
	
	cout<<"size "<<max.size()<<endl;
	int n=max.size();
	for(int i=0;i<n;i++){
		cout<<max.top()<<" ";
		max.pop();
	}
	cout<<endl;
	mini.push(5);
		mini.push(3);
			mini.push(6);
				mini.push(7);
					mini.push(2);
					int m=mini.size();
					for(int i=0;i<m;i++)
{
	cout<<mini.top()<<" ";
	mini.pop();
	cout<<endl;
}
}
