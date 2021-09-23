//
// Created by Isaac on 9/20/2021.
//

#ifndef L3_SHEPHERD_STACK_H
#define L3_SHEPHERD_STACK_H

#define MAX 10
#define MIN 0

#include <iostream>

using std::cout;
using std::endl;

class Stack{
    private:
        int top;
        int a[MAX];  //Maximum size of Stack
    public:
        Stack(){
            top = -1;
        }

        // declaring all the function
        void push(int x);
        int pop();
        int peek();
        bool isEmpty();
};
#endif //L3_SHEPHERD_STACK_H