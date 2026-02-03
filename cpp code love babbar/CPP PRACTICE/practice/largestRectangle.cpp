#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int n = heights.size(), maxArea = 0;
    for(int i = 0; i <= n; i++) {
        int h=(i==n?0:heights[i]);
        while(!st.empty() && h < heights[st.top()]) {
            int height = heights[st.top()]; st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
    int n; cin >> n;
    vector<int> heights(n);
    for(int i = 0; i < n; i++) cin >> heights[i];
    cout << largestRectangleArea(heights) << endl;
    return 0;
}