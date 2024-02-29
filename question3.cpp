#include <stack>
#include <climits> 
using namespace std;

class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;

public:
    MinStack() {}
    void push(int x) {
        mainStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }
    void pop() {
        if (mainStack.empty()) {
            return;
        }
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    int top() {
        if (mainStack.empty()) {
            return INT_MIN; 
        }
        return mainStack.top();
    }
    int getMin() {
        if (minStack.empty()) {
            return INT_MIN; 
        }
        return minStack.top();
    }
};
