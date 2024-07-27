#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        int n = (int)nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 and nums[j]==nums[j-1])continue;
                long long fs =(long long) nums[i]+nums[j];
                int l=j+1,r=n-1;
                while(l<r){
                    long long sum =(long long) fs + nums[l] + nums[r];
                    if(sum<t)l++;
                    else if(sum>t)r--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        while(nums[l]==nums[l-1] and l<r)l++;
                    }
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