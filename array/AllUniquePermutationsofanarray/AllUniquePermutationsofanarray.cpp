#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> ans;
    void solve(vector<int> &arr, vector<int>& a, int n, int i, vector<bool> vis){
        if(i>=n){
            ans.push_back(a);
            return;
        }
        
        map<int,int> mp;
        for(int j=0;j<n;j++){
            if(mp.find(arr[j])==mp.end() and !vis[j]){
                a.push_back(arr[j]);
                mp[arr[j]]++;
                vis[j]=true;
                solve(arr,a,n,i+1,vis);
                vis[j]=false;
                a.pop_back();
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        ans = {};
        vector<bool> vis(n,false);
        vector<int> a;
        sort(arr.begin(),arr.end());
        solve(arr,a,n,0,vis);
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}