/**********
* Created by Isaac on 9/20/2021.
***********/


/********
 * Below program is written in C++ language
 *********/

#include "stack.h"

// function to insert data into stack
void Stack::push(int x){
    if(top < MAX-1)
    {
        a[++top] = x;
    }
    else
    {
        throw 0;
    }
}

// function to remove data from the top of the stack
int Stack::pop(){
    if(isEmpty()){
        throw 0;
    }
    return a[top--];
}

int Stack::peek(){
    if(isEmpty()){
        throw 0;
    }
    return a[top];
}

// function to check if stack is empty
bool Stack::isEmpty(){
    return top < 0;
}