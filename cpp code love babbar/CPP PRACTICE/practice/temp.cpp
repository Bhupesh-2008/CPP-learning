#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st;  // store indices

    for(int i = 0; i < n; i++) {
        while(!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;  // days until warmer temperature
        }
        st.push(i);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> temperatures(n);
    cout << "Enter temperatures: ";
    for(int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }

    vector<int> result =dailyTemperatures(temperatures);

    cout << "Result: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}