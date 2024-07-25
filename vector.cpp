#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int size = v.size();
    cout << "The size of vector is " << size << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(10);
    cout << "Size after push_back(10): " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(12);
    cout << "Size after push_back(12): " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(14);
    cout << "Size after push_back(14): " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "The first element is " << v.front() << endl;
    cout << "The last element is " << v.back() << endl;

    cout << "Before POP: ";
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After POP: ";
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
