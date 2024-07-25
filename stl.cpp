#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <string> s;
	s.push("aryan");
		s.push("ayushman");
			s.push("sanchit");
				s.push("aashray");
				
				cout<<"top element "<<s.top();
				s.pop();
				cout<<"element after pop "<<s.top()	<<endl;			}
