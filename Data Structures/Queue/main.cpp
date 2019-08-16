

#include <iostream>
#include <stack>

using namespace std;

int main ()
{
    stack<int> mystack;

    //Puts element on the stack.
    cout << "Putting elements on the stack: ";
    for (int i=0; i<5; ++i) {
        mystack.push(i);
        cout << ' ' <<  mystack.top();
    }


    cout << "\nPopping elements off the stack: ";
    while (!mystack.empty()){
        cout << ' ' << mystack.top();
        mystack.pop();
    }

    return 0;
}




/*#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    queue<int> myqueue;
    int myint;

    cout << "Please enter integers separated by a space (enter 0 to end):\n";

    do {
        cin >> myint;
        myqueue.push (myint);
    } while (myint);

    cout << "myqueue contains: ";
    while (!myqueue.empty()){
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }

 return 0;
}
*/
