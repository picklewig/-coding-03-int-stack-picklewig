/************
* Created by Isaac on 9/20/2021.
***********/

#include "main.h"

int main(int argc, char** argv){
    cout << "Hello World!" << endl;


    Stack s1;
    Stack s2;

    for(int index{0}; index<MAX+100; index++){
        try{
            s1.push(5);
        }
        catch(int errorNum){
            cout << "stack overflow" << endl;
        }
    }

    for(int index{0}; index<MAX+1000; index++){
        try{
            s1.pop();
        }
        catch(int errorNum){
            cout << "stack underflow" << endl;
        }
    }
}
