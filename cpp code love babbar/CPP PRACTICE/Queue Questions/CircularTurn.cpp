#include <bits/stdc++.h>
using namespace std;

struct petrolPump {
    int petrol;
    int distance;
};

class Solution{
public:
    int tour(petrolPump p[],int n){
        int start = 0;
        int deficit = 0;
        int balance = 0;
        
        for(int i=0;i<n; i++){
            balance +=p[i].petrol -p[i].distance;
            if(balance< 0){
                deficit +=balance;
                start = i+1;
                balance = 0;
            }
        }
        if(balance +deficit >=0){
            return start;
        }
        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(cin>>n){
        petrolPump p[n];
        for(int i=0; i<n; i++){
            cin>>p[i].petrol >>p[i].distance;
        }
        Solution obj;
        int startingIndex = obj.tour(p, n);
        cout<<startingIndex <<"\n";
    }
    return 0;
}