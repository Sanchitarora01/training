#include<iostream>
using namespace std;
int main()
{
	int n;
	vector<int>price;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int o;
		cin>>o;
		price.push_back(o);
	}
	int minsoFar = price[0];
	int ans=0;
	for(int i=1;i<price.size();i++){
		int profit = price[i]-minsoFar;
		if(profit>ans;){
			ans=profit;
		}
		minsoFar=min(price[i],minsoFar);
	}
	cout<<ans;
}
