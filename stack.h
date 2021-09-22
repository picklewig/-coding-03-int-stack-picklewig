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
        int top;
    public:
        int a[MAX];  //Maximum size of Stack
        Stack(){
            top = -1;
        }

        // declaring all the function
        void push(int x);
        int pop();
        bool isEmpty();
};
#endif //L3_SHEPHERD_STACK_H