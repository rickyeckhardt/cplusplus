#include <iostream>
#include <cstdlib>
#include "header.h"
#include <stack>


using namespace std;

int main() {

   int i = 2;
   int j = 2;

   do {
     cout << "Do: " << i;
     i++;
   } while ( i < 2);

   while ( j < 2) {
    cout << "\nWhile: " << j;
    ++j;
   }

   /* const int line = 1000;
    char balance_symbols[line];
    char *stack_ptr = balance_symbols;
    stack<char> balance_stack;


    cin.getline(balance_symbols, line);
    while ( *stack_ptr != '\0') {
        balance_stack.push(*stack_ptr);
        *stack_ptr++;
    }

    while (!balance_stack.empty()) {
        cout << balance_stack.top();
        balance_stack.pop();
    } */
/*
    cout << a;

    List Ricky;

    Ricky.AddNode(32);

    Ricky.AddNode(30);

    Ricky.PrintList();

    Ricky.DelNode(31);
    Ricky.DelNode(0);

    Ricky.PrintList();

    Ricky.AddNode(31);
    Ricky.DelNode(32);

    Ricky.PrintList();

    cout << "hello";*/
    return 0;
}
