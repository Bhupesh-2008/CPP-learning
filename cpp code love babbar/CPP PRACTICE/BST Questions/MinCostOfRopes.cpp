#include <iostream>
#include <vector>
#include <queue> // Typically needed for the optimal approach (min-heap)

using namespace std;

// Function to calculate the minimum cost of connecting ropes
long long minCost(vector<long long>& ropes) {
    // ==========================================
    // TODO: Write your main logic here
    // ==========================================
    
        priority_queue<long long,vector<long long>,greater<long long>> pq;

        for(int i=0; i<ropes.size(); i++) pq.push(ropes[i]);

        long long cost=0;
        while(pq.size()>1){
            long long a= pq.top();
            pq.pop();
            long long b= pq.top();
            pq.pop();
            long long sum=(a+b);
            cost+= sum;
            pq.push(sum);
        }

    return cost; 
}

int main() {
    // Fast I/O for competitive programming/large inputs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of ropes: ";
    cin >> n;

    vector<long long> ropes(n);
    cout << "Enter the lengths of the ropes: \n";
    for (int i = 0; i < n; i++) {
        cin >> ropes[i];
    }

    long long result = minCost(ropes);
    
    cout << "Minimum cost to connect all ropes is: " << result << "\n";

    return 0;
}