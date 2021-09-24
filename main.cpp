/************
file: main.cpp
author: Isaac Shepherd
This file is the testbed for class Stack and calling its methods
only includes main.h
***********/

#include "main.h"

int main(int argc, char** argv){
    cout << "Hello World!" << endl;

    Stack s1;

    for(int index{0}; index<1000; index++){
        int operationNum = (rand() % 3);
        switch(operationNum){
            case 0:
                try{
                    s1.push(rand() % 10);
                    cout << "adding number to stack" << endl;
                }
                catch(int errorNum){
                    cout << "stack overflow, cannot push to a full stack" << endl;
                }
                break;
            case 1:
                try{
                    s1.pop();
                    cout << "removing number from stack" << endl;
                }
                catch(int errorNum){
                    cout << "stack underflow, cannot pop from an empty stack" << endl;
                }
                break;
            case 2:
                try{
                    cout << s1.peek() << " was peeked in stack" << endl;
                }
                catch(int errorNum){
                    cout << "can not peek empty stack" << endl;
                }
                break;
        }
    }

    //manual case entries
    for(int index{0}; index<MAX+1; index++){
        try{
            s1.push(5);
        }
        catch(int errorNum){
            cout << "stack overflow, cannot push to a full stack" << endl;
        }
    }

    for(int index{0}; index<MAX+1; index++){
        try{
            s1.pop();
        }
        catch(int errorNum){
            cout << "stack underflow, cannot pop from an empty stack" << endl;
        }
    }
    //peeking into empty stack
    try{
        cout << s1.peek() << " was peeked in stack" << endl;
    }
    catch(int errorNum){
        cout << "can not peek empty stack" << endl;
    }
    //adding to empty stack
    try{
        s1.push(5);
    }
    catch(int errorNum){
        cout << "stack overflow, cannot push to a full stack" << endl;
    }
    //peeking into stack with 1 element
    try{
        cout << s1.peek() << " was peeked in stack" << endl;
    }
    catch(int errorNum){
        cout << "can not peek empty stack" << endl;
    }
}
