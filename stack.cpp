/**********
* Created by Isaac on 9/20/2021.
***********/


/********
 * Below program is written in C++ language
 *********/

#include "stack.h"

// function to insert data into stack
void Stack::push(int x){
    if(top >= MAX)                        //bug: no location greater than 10
    {
        cout << "Stack Overflow \n";      //problem: no printing
    }
    else
    {
        a[++top] = x;
        cout << "Element Inserted \n";
    }
}

// function to remove data from the top of the stack
int Stack::pop(){                          //problem: multiple returns
    if(isEmpty()){
        throw 0;                           //cannot return what would be valid data to indicate error
    }                                      //use different communication channel ie throw int
    else{
        return a[top--];
    }
}

// function to check if stack is empty
bool Stack::isEmpty(){
    return top < MIN;
}