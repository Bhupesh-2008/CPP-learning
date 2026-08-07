#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool isSafe(int x,int y, int n, vector<vector<int>>visited, vector<vector<int>>m){
            
            if((x>=0 && x<n) &&( y>=0 &&y<n) && visited[x][y]==0 &&m[x][y]==1){
                return true;
            }
            else{
                return false;
            }
        }
  
        void solve(vector<vector<int>> &m,int r, vector<string>&ans,int x,int y, vector<vector<int>> visited,string path){
            //you reached x,y here
            
            //base case
            if(x==r-1 && y==r-1){
                ans.push_back(path);
                return;
            }
            
            visited[x][y]=1;
            
            //4 choices d,l,r,u
            
            //down
            int newx=x+1;
            int newy=y;
            if(isSafe(newx,newy,r,visited,m)){
                path.push_back('D');
                solve(m,r,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            //left
            newx=x;
            newy=y-1;
            if(isSafe(newx,newy,r,visited,m)){
                path.push_back('L');
                solve(m,r,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            //Right
            newx=x;
            newy=y+1;
            if(isSafe(newx,newy,r,visited,m)){
                path.push_back('R');
                solve(m,r,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            //Up
            newx=x-1;
            newy=y;
            if(isSafe(newx,newy,r,visited,m)){
                path.push_back('U');
                solve(m,r,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            visited[x][y]=0;
        }
        
vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        if(maze[0][0]==0){
            return ans;
        }
        
        int srcx=0;
        int srcy=0;
        int r= maze.size();
        int c= maze[0].size();
        
        vector<vector<int>>visited=maze;
        
        for(int i=0; i<r;i++){
            for(int j=0; j<c; j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        solve(maze,r,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
    }

    int main() {
    int n;
    cout << "Enter size of maze (n x n): ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    cout << "Enter maze matrix (0 for blocked, 1 for open):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<string> paths = ratInMaze(maze);

    if (paths.empty()) {
        cout << "No path exists!\n";
    } else {
        cout << "Possible paths:\n";
        for (string p : paths) {
            cout << p << "\n";
        }
    }

    return 0;
}

