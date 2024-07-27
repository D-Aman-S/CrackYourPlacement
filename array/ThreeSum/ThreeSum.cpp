#include <bits/stdc++.h>
using namespace std;
//hashmap solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = (int)nums.size();
        sort(nums.begin(),nums.end());
        map<vector<int>,int> st;
        vector<vector<int>> ans;
        for(int i =0;i<n;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            int d = -1*nums[i];
            unordered_map<int,int> mp;
            for(int j=i+1;j<n;j++){
                if(mp.find(d-nums[j])!=mp.end()){
                    vector<int> v = {-1*d,d-nums[j],nums[j]};                  
                    st[v]++;
                }
                mp[nums[j]]++;
            }
            mp.clear();
        }
        for(auto& [x,_]:st){
            ans.push_back(x);
        }
        return ans;
    }
};

//2 pointer solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = (int)nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i =0;i<n;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            int d = nums[i];
            int l = i+1,r = n-1;
            while(l<r){
                int sum =  d + nums[l] + nums[r];
                if(sum>0)r--;
                else if(sum<0)l++;
                else {              
                    ans.push_back({d,nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] and l<r){
                        l++;
                    }
                };
            }
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}