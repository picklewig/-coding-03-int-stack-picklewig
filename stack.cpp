/***********
 * file: stack.cpp
 * author: Isaac Shepherd
 * only includes stack.h for calling on Class Stack for prototypes
 * and definition for MAX, file defines methods for class Stack
***********/


/********
 * Below program is written in C++ language
 *********/

#include "stack.h"

Stack::Stack(){
    top = -1;
}

// function to insert data into stack
bool Stack::push(int x){
    if(top < MAX-1)
    {
        a[++top] = x;
    }
    return top > MAX;
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