#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
        d.push_back(10);
    d.push_front(11);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty of not "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin() + 1);
    cout<<"After erase "<<d.size()<<endl;
    return 0;
}
