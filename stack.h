/***********
 * file: stack.h
 * author: Isaac Shepherd
 * header file for stack.cpp, does not include other files,
 * most important file in project, holds definitions and prototypes that are called from
 * different files
***********/

#ifndef L3_SHEPHERD_STACK_H
#define L3_SHEPHERD_STACK_H

#define MAX 10


class Stack{
    private:
        int top;
        int a[MAX];  //Maximum size of Stack
    public:
        Stack();

        // declaring all the function
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};
#endif //L3_SHEPHERD_STACK_H