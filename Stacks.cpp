#include <iostream>
#include <stack>
#include <string>

using namespace std;
int top = -1;
int arrayStack[5];
// () balance example
    bool PBalance(string st) {
    stack<char> s;
    
     for (size_t i = 0; i < st.length(); i++) {
        char ch = st[i];
        if (ch == '(') {s.push(ch);} 
		else if (ch == ')') {
            if (s.empty()) {return false;}
            s.pop();
        }
    }
    return s.empty(); //Balance
}
int main() {
//LIFO
//4 main laws : push, pop, top, isEmpty 
//2 implementation way: 
//1-custom stack with arrays: 4 functions in lines 51, 59, 66, 69


//2-use Stack Standard Template Library(don't forget line 2)
stack<int> s;
s.push(7);
s.push(8);
s.push(9);
cout << "Top element: " << s.top() << endl;
s.pop();
cout << "Top element after pop: " << s.top() << endl;
if (s.empty()) {cout << "Stack is empty" << endl;}
else {cout << "Stack is not empty" << endl; }

// () balance example Test
 string st = "(1 + (2 * 3))";
    bool a = PBalance(st);
    if (a) {
        cout << "Balanced parentheses" << endl;
    } else {
        cout << "Unbalanced parentheses" << endl;
    }
}

 //any index add, top++
 void push(int value) {
    if (top == 4) {cout << "Stack overflow" << endl;}
	else {
        top++;
        arrayStack[top] = value;
        }
    }
//any item popped, top--
void pop() {
    if (top == -1) {cout << "Stack underflow" << endl;}
    else { 
        arrayStack[top] = 0;
        top--;
         }
     }
bool isEmpty() {return top == -1;}


int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return arrayStack[top];
        }
    }

