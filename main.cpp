#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5;
class Stack{
    int curindex ;
    int arr[MAX+1];
public:
    Stack(){
        curindex = -1;
    }
    void push(int num);
    void pop();
    void top();
    void display();

};
void Stack :: push(int num){
     curindex += 1; // incrementing current index by 1
     if(curindex>MAX){
        cout<<"Out of stack limit !\n";    // checking if curindex is greater than array length
     }
     else{
        arr[curindex] = num;      // if not then putting value num in curindex of array
        cout<<"Pushed Successfully\n";
     }
}

void Stack:: pop(){
    if(curindex <0 ){
        cout<<"Array is already empty !\n";
    }
    else{
        cout<<"Element is popped out \n";
        curindex -=1;    // decreasing the curindex
    }

}

void Stack:: top(){
    if(curindex <0){
        cout<<"Cant return top element as Array is already empty !\n";
    }
    else{
        cout<<"Top element of stack is : "<<arr[curindex]<<"\n";
    }
}

void Stack:: display(){
    if(curindex<0){
        cout<<"Stack is Empty\n";
    }
    cout<<"Elements of stack are :";
    for(int itr = curindex ; itr>=0 ; itr--){
        cout<<arr[itr]<<" ";
    }
    cout<<"\n";
}

int main(){
    Stack s;     // creating object of a class stack
    while(true){
        cout<<"         CHOOSE FROM THE FOLLOWING         \n";
        cout<<"1> Push element into stack"<<"\n";
        cout<<"2> Pop element into stack"<<"\n";
        cout<<"3> Get top element of stack"<<"\n";
        cout<<"4> Display elements into stack"<<"\n";
        cout<<"5> Exit"<<"\n";

        int choice ;
        cin>> choice;

        switch(choice){

        case 1:
            cout<<"enter the number :";
            int num;
            cin>>num;
            s.push(num);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top();
            break;
        case 4:
            s.display();
            break;
        case 5:
            return 0;

        }

    }

}
