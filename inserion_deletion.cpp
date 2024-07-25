
//Problem Statement in stack
/*
1. Size of the stack
2. Insert element into the stack
3. Delete element from stack
4. Top Element of the stack
5. Exit

Enter your choice: 1
Size of the stack: 0
1. Size of the stack
2. Insert element into the stack
3. Delete element from stack
4. Top Element of the stack
5. Exit
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int choice;
    do{
        cout<<"1. Size of the stack\n";
        cout<<"2. Insert element into the stack\n";
        cout<<"3. Delete element from stack\n";
        cout<<"4. Top Element of the stack\n";
        cout<<"5. Exit\n";
        cin>>choice;
        switch(choice){
        case 1:
        cout<<"Size of the stack: "<<s.size()<<endl;
        break;
        case 2:
        int x;
        cout<<"Enter the element to be inserted: ";
        cin>>x;
        s.push(x);
        break;
        case 3:
        s.pop();
        break;
        case 4:
        cout<<"Top Element of the stack: "<<s.top()<<endl;
        break;
        case 5:
        cout<<"Exit\n";
        break;
        default:
        cout<<"Invalid choice\n";
    }
}while(true);
    return 0;
}
