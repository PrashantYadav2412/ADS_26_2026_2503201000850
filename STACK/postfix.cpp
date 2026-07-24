#include<iostream>
using namespace std;


int precedance(char op){
    if(ch =='^'){
        return 3;
    }
    if(ch=='*'|| ch== '/'){
        return 2;
    }
    if(ch=='+'|| ch=='-'){
        return 1;
    }
    return 0;
}

    string fun(string infix){
        string postfix=" ";
        Stack<char>St;
        for(ch:infix){
            if(ch== isalnum()){
                postfix=postfix+ch;
            }
            if(ch == "("){
               St.push(); 
            }
            if(ch==')'){
                while(!St.empty()&&St.top(!='(')
            }
        }
    }
