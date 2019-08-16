#include <iostream>
#include <stack>


using namespace std;

bool codeBalanced(char *);

int main()
{
  const int SIZE = 1000;
  char codesnippet[SIZE];

  system("Color 1f");
  cout  << "\n\n\t"
        << "Check code for opening closing symbols"
        << "\n\n\t"
        << "Enter code snippet: ";
  cin.getline(codesnippet, SIZE);

  if (codeBalanced(codesnippet))
    cout << " \n\n\t" << codesnippet << " Code snippet is balanced.\n\n";
  else
    cout << " \n\n\t" << codesnippet << " Error. Code snippet is not balanced.\n\n";
  return 0;
}

bool codeBalanced(char *strPtr)
{
  stack<char> codeStack;
  bool leftside = NULL;
  bool rightside = NULL;
  bool  comment = false;


  while (*strPtr != '\0')
  {
    if ( (*strPtr == '/' && rightside == NULL ) || *strPtr == '[' || *strPtr == '{' || *strPtr == '(')
    {
        codeStack.push(*strPtr);
        leftside = true;
    }
    else if ( leftside && *strPtr == '*')
    {
        codeStack.push(*strPtr);
        leftside = false;
        rightside = true;
    }
    else if ( rightside && !leftside && *strPtr == '*') {
        codeStack.push(*strPtr);
    }
    else if ( !leftside && *strPtr == '/'){
        comment = true;
        rightside = NULL;
        if (codeStack.empty() || codeStack.top() != '*')
            return false;
        codeStack.pop();
    }
    else if ( *strPtr == ']')
    {
        if (codeStack.empty() || codeStack.top() != '[' && comment == !true )
            return false;
        codeStack.pop();
    }
    else if ( *strPtr == '}')
    {
         if (codeStack.empty() || codeStack.top() != '{' && comment == !true)
            return false;
        codeStack.pop();
    }
    else if ( *strPtr == ')')
    {
         if (codeStack.empty() || codeStack.top() != '(' && comment == !true)
            return false;
        codeStack.pop();
    }
    strPtr++;
  }

  if(!comment) {
      if (!codeStack.empty())
            return false;
  }
  return true;
}
