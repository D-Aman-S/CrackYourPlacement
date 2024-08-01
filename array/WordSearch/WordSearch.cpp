#include <bits/stdc++.h>
using namespace std;
//my original solution
class Solution {
public:
    bool ans;
    vector<int> dx,dy;
    bool valid(int i, int j, int m, int n){
        return i>=0 and j>=0 and i<m and j <n;
    }
    void solve(int k, int i, int j , string &word,vector<vector<char>>& b,vector<vector<bool>>& vis){
        if(k==word.size()){
            ans=true;
            return;
        }
    
        for(int p=0;p<4;p++){
            int ni = i + dx[p];
            int nj = j + dy[p];
            if(valid(ni,nj,b.size(),b[0].size()) and !vis[ni][nj] and b[ni][nj]==word[k]){
                vis[ni][nj]=true;
                solve(k+1,ni,nj,word,b,vis);
                vis[ni][nj]=false;
            }
        }
    }
    bool exist(vector<vector<char>>& b, string word) {
        ans = false;
        int m = b.size();
        int n = b[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        dx= {-1,0,1,0};
        dy= {0,1,0,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]==word[0]){
                    if(word.size()==1)return true;
                    vis[i][j]=true;
                    solve(1,i,j,word,b,vis);
                    if(ans)return ans;
                    vis[i][j]=false;
                }
            }
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}