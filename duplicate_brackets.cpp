#include <iostream>
#include <stack>
using namespace std;
 
// Function to find duplicate parenthesis in an expression
bool duplicateParenthesis(string exp)
{
    stack<char> stack;
    // traverse the input expression
    for (char c: exp)
    {
        if (c != ')') {
            stack.push(c);
        }
        else {
            if (stack.top() == '(')
            {
                return true;
            }
 
            // pop till `(` is found for current `)`
            while (stack.top() != '(') {
                stack.pop();
            }
 
            // pop `(`
            stack.pop();
        }
    }
    // if we reach here, then the expression does not have any
    // duplicate parenthesis
    return false;
}
 
int main()
{
    string exp;
    getline(cin,exp);      // assumes valid expression
    cout<<duplicateParenthesis(exp);
 
    return 0;
}