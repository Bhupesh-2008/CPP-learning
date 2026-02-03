#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;     
    stack<int> minS;  

    int q;
    cout << "Enter number of operations: ";
    cin >> q;

    //Operations:
    //1 x -> push x
    //2   -> pop
    //3   -> top
    //4   -> getMin

    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if(type == 1) {
            int x;
            cin >> x;
            s.push(x);
            if(minS.empty() || x <= minS.top()) {
                minS.push(x);
            }
        } else if(type == 2) {
            if(!s.empty()) {
                if(s.top() == minS.top()) {
                    minS.pop();
                }
                s.pop();
            }
        } else if(type == 3) {
            if(!s.empty()) {
                cout << "Top: " << s.top() << endl;
            } else {
                cout << "Stack is empty\n";
            }
        } else if(type == 4) {
            if(!minS.empty()) {
                cout << "Min: " << minS.top() << endl;
            } else {
                cout << "Stack is empty\n";
            }
        }
    }

    return 0;
}