#include <iostream>
using namespace std;

#define MAXSIZE 5 
 int St[MAXSIZE] ;
 int top ;

 bool isoverflow(){
    return top == MAXSIZE - 1;
 }

 bool underflow(){
    return top == -1;
 }

void push(int x){
    if(isoverflow()){
        cout<< "Stack is full";
        return ;
    }
    top++;
    St[top]=x;
    return;
}

void pop(){
    if isunderflow{
        cout << "Stack is empty";
        return ;
     }
     cout<< St[top]<< "is popped";
}

void peek(){
     if isunderflow{
        cout << "Stack is empty";
        return ;}
        cout<< "top element is:"<< st[top];
}
void traverse(){
     if isunderflow{
        cout << "Stack is empty";
        return ;
     }
     for(int i= top; i>=-1 ; i--){
        cout<<st[i];
        return 0;
     }
}



int main(){
    int value;
    cout<< "Enter the value";
    cin>> value;

    push(value);
     
    cout << "push value"<<value;

    pop();
    

    peek();
    break;

    traverse();
    break;

    cout<< existing";
    break;

    default : cout<< "invaild choice";
  return 0;  
}