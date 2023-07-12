#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m ){
    // condition to check whether its safe to go on that path or not
    if((x>=0 && x<n) && (y>=0 && x<n) && (visited[x][y] == 0) && (m[x][y] == 1)){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> m, int n, vector<string> &ans, int x, int y,vector<vector<int>> visited, string path){

    // base case
    if(x== n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // 4 choices (D,U,L,R)

    // down jaane pr ( D )
    int newx = x+1;
    int newy = y;
    if(isSafe(newx,newy,n, visited, m)){
        path = "D";
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    // left jaane pr ( L )
    newx = x;
    newy = y-1;
    if(isSafe(newx,newy,n, visited, m)){
        path = "L";
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    // Right jaane pr ( R )
    newx = x;
    newy = y+1;
    if(isSafe(newx,newy,n, visited, m)){
        path = "R";
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    // UP jaane pr ( U )
    newx = x-1;
    newy = y;
    if(isSafe(newx,newy,n, visited, m)){
        path = "U";
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> AllPossiblePath(vector<vector<int>> &m , int n){
    
    vector<string> ans;
    int SourceX = 0;
    int SourceY = 0;
    // if the source is 0 then return the empty ans array
    if(m[SourceX][SourceY] == 0){
        return ans;
    }
    
    // creating a visited matrix
    vector<vector<int>> visited = m;

    // filling visited matrix with 0s
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            visited[i][j] = 0;
        }
    }
    string path = "";
    solve(m,n,ans,SourceX,SourceY,visited,path);
    sort(ans.begin(),ans.end());
    return ans;

}